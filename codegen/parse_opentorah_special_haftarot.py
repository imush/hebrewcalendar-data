#!/usr/bin/env python3
"""Parse vendor/opentorah/SpecialReadings.xml → schedules/special_haftarot.json.

The special readings used to be XML literals embedded in SpecialReadings.scala
and this script scraped them out of the Scala. Upstream moved them into
SpecialReadings.xml, so it now reads data.

Each <day>/<reading> pair holding a <haftarah> becomes one occasion/variant.
Readings are resolved for every custom in names/customs.json by walking the
inheritance tree, so each (occasion, variant, custom) that reads anything gets
an explicit answer.

A custom may read *nothing*: upstream says so with <none>, which is a value
rather than a missing entry, and stops the walk up the tree. Such customs are
absent from the output, as are those that reach no reading at all.

Sources, comments and variant readings travel alongside under "annotations"
and "variants" -- what the entry says about itself, keyed by custom.
"""
import json
from collections import OrderedDict
from pathlib import Path
from common import book_name
import opentorah_xml as ox
from xml.etree import ElementTree as ET

ROOT = Path(__file__).resolve().parent.parent
XML = ROOT / "vendor" / "opentorah" / "SpecialReadings.xml"
OUT = ROOT / "schedules" / "special_haftarot.json"

_CUSTOMS = json.loads((ROOT / "names" / "customs.json").read_text(encoding="utf-8"))
PARENT = {k: v["parent"] for k, v in _CUSTOMS.items()}

# opentorah names customs in its own Custom.xml; our keys are those names
# uppercased. Deriving the mapping from upstream rather than from our display
# names, which are localised -- ours calls Hagra GR"A.
def _keys_from_upstream():
    out = {"Common": "COMMON"}
    # Custom.xml nests customs now -- the nesting is the tree CustomTree.xml
    # used to hold -- so the names come from the nested elements.
    for name in ox.custom_tree(ROOT / "vendor" / "opentorah" / "Custom.xml"):
            key = name.upper().replace(" ", "_").replace("'", "")
            if key == "COMMON":
                continue
            if key not in _CUSTOMS:
                raise SystemExit(f"opentorah has a custom we do not: {name!r} ({key})")
            out[name] = key
    missing = set(_CUSTOMS) - set(out.values())
    if missing:
        raise SystemExit(f"we have customs opentorah does not: {sorted(missing)}")
    return out

XML_TO_KEY = _keys_from_upstream()

# the reading names upstream uses, and what this file has always called them
VARIANT = {
    "haftarah": "MAIN",
    "shabbosHaftarah": "SHABBAT",
    "shabbosAdditionalHaftarah": "SHABBAT_ADDITION",
    "shabbos1Haftarah": "SHABBAT_1",
    "shabbos2Haftarah": "SHABBAT_2",
    "afternoonHaftarah": "AFTERNOON",
    "defaultAfternoonHaftarah": "AFTERNOON_DEFAULT",
    "afternoonHaftarahExceptions": "AFTERNOON_EXCEPTIONS",
}

BOOKS = {}  # filled from the refs themselves; opentorah spells them in full


def customs_of(attr):
    """`n="Sefard, Italki"` → the keys, failing loudly on an unknown name."""
    out = []
    for name in (attr or "").split(","):
        name = name.strip()
        if not name:
            continue
        if name not in XML_TO_KEY:
            raise SystemExit(f"unknown custom in SpecialReadings.xml: {name!r}")
        out.append(XML_TO_KEY[name])
    return out


def read(el, inherited_book):
    """The refs of one <custom> or <variant>: its spans.

    `book` comes from the span, else the element, else the enclosing
    <haftarah>; `from`/`to` are the span's own. An omitted `to` is a single
    verse, not "to the end of the chapter".
    """
    return [OrderedDict(book=book_name(r["book"]), fromCh=r["fromCh"],
                        fromV=r["fromV"], toCh=r["toCh"], toV=r["toV"])
            for r in ox.spans_of(el, inherited_book)]


def annotation(el):
    a = OrderedDict()
    note = ox.note_of(el)
    if note:
        if note.get("sources"):
            a["sources"] = note["sources"]
        if note.get("comment"):
            a["comment"] = note["comment"]
    return a


def parse_haftarah(h):
    """One <haftarah> → (readings by custom, explicit nones, annotations, variants).

    Every reading is a <custom> now: a bare <haftarah> carrying the span is
    written as <custom n="Common">. `reads="none"` is what <none> was, and
    `reads="inherit"` is what <annotation> was -- a custom that reads what its
    parent reads, with something recorded about why.
    """
    inherited_book = h.get("book")
    readings, nones, annotations, variants = {}, set(), OrderedDict(), OrderedDict()

    customs = h.findall("custom")
    for c in customs:
        keys = customs_of(c.get("n"))
        reads = ox.reads_of(c)
        a = annotation(c)

        # A <variant> sits inside the custom it qualifies, and its own `n`
        # narrows it to a subset of that custom's names. It is recorded beside
        # the reading, never resolved to.
        for i, v in enumerate(ox.variants_of(c), start=1):
            v_keys = customs_of(v.get("n")) if v.get("n") else keys
            v_refs = read(v, ox.book_of(c, inherited_book))
            v_a = annotation(v)
            for k in v_keys:
                variants.setdefault(k, []).append(
                    OrderedDict([("n", i + 1), ("refs", v_refs)] + list(v_a.items())))

        if reads == "none":
            for k in keys:
                nones.add(k)
                if a:
                    annotations[k] = a
            continue
        if reads == "inherit":
            for k in keys:
                if not a:
                    continue
                if k in annotations:
                    merged = OrderedDict(annotations[k])
                    merged["sources"] = sorted(
                        set(merged.get("sources", [])) | set(a.get("sources", [])))
                    if a.get("comment"):
                        merged["comment"] = (merged.get("comment", "") + " "
                                             + a["comment"]).strip()
                    annotations[k] = merged
                else:
                    annotations[k] = a
            continue

        refs = read(c, inherited_book)
        for k in keys:
            readings[k] = refs
            if a:
                annotations[k] = a

    return readings, nones, annotations, variants


def resolve(readings, nones, custom):
    """Walk up the tree. An explicit <none> stops the walk; a gap continues."""
    seen = custom
    while seen is not None:
        if seen in nones:
            return None
        if seen in readings:
            return readings[seen]
        if seen == "COMMON":
            return None
        seen = PARENT[seen] if seen in PARENT else None
        if seen is None:
            return readings.get("COMMON")
    return None


def main():
    root = ET.parse(XML).getroot()
    out = OrderedDict()
    for day in root.findall("day"):
        occasion = day.get("n")
        # <haftarah> sits directly under <day> now; what the <reading n="...">
        # wrapper used to say is spelled out in `when`, `role` and `n`.
        for h in day.findall("haftarah"):
            name = ox.legacy_reading_name(h)
            if name not in VARIANT:
                raise SystemExit(f"unmapped reading name: {occasion}/{name}")
            readings, nones, annotations, variants = parse_haftarah(h)
            resolved = OrderedDict()
            for custom in _CUSTOMS:
                got = resolve(readings, nones, custom)
                if got is not None:
                    resolved[custom] = got
            entry = OrderedDict()
            entry["readings"] = resolved
            if annotations:
                entry["annotations"] = annotations
            if variants:
                entry["variants"] = variants
            out.setdefault(occasion, OrderedDict())[VARIANT[name]] = entry

    OUT.write_text(json.dumps(out, ensure_ascii=False, indent=1) + "\n", encoding="utf-8")
    n = sum(len(v) for v in out.values())
    ann = sum(1 for o in out.values() for v in o.values() if "annotations" in v)
    var = sum(1 for o in out.values() for v in o.values() if "variants" in v)
    print(f"OK  {OUT.name}: {len(out)} occasions, {n} readings, "
          f"{ann} with annotations, {var} with variants")


if __name__ == "__main__":
    main()
