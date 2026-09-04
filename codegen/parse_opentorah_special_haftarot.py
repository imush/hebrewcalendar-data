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
    root = ET.parse(ROOT / "vendor" / "opentorah" / "Custom.xml").getroot()
    for names in root.findall("names"):
        for n in names.findall("name"):
            if n.get("lang", "en") != "en":
                continue
            name = n.get("n")
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


def span(el, inherited):
    """A <custom> or <part>, with whatever the enclosing element already set."""
    got = dict(inherited)
    for a in ("book", "fromChapter", "fromVerse", "toChapter", "toVerse"):
        if el.get(a) is not None:
            got[a] = el.get(a)
    return got


def ref(got):
    fromCh = int(got["fromChapter"])
    toCh = int(got.get("toChapter", fromCh))
    fromV = int(got["fromVerse"])
    # opentorah omits toVerse for a single verse -- it does not mean
    # "to the end of the chapter"
    toV = int(got.get("toVerse", fromV))
    return OrderedDict(book=book_name(got["book"]), fromCh=fromCh, fromV=fromV, toCh=toCh, toV=toV)


def read(el, inherited):
    """The refs of one <custom>: its parts, or its own span."""
    got = span(el, inherited)
    parts = el.findall("part")
    if parts:
        return [ref(span(p, got)) for p in parts]
    return [ref(got)]


def annotation(el):
    a = OrderedDict()
    if el.get("sources"):
        a["sources"] = [s.strip() for s in el.get("sources").split(",") if s.strip()]
    if el.get("comment"):
        a["comment"] = " ".join(el.get("comment").split())
    return a


def parse_haftarah(h):
    """One <haftarah> → (readings by custom, explicit nones, annotations, variants)."""
    inherited = {a: h.get(a) for a in
                 ("book", "fromChapter", "fromVerse", "toChapter", "toVerse")
                 if h.get(a) is not None}
    readings, nones, annotations, variants = {}, set(), OrderedDict(), OrderedDict()

    parts = h.findall("part")
    customs = h.findall("custom")
    if not customs:
        # a bare <haftarah>, or one with parts: everyone reads it
        readings["COMMON"] = ([ref(span(p, inherited)) for p in parts] if parts
                              else [ref(inherited)])

    for c in customs:
        keys = customs_of(c.get("n"))
        refs = read(c, inherited)
        a = annotation(c)
        if c.get("variant"):
            for k in keys:
                variants.setdefault(k, []).append(
                    OrderedDict([("n", int(c.get("variant"))), ("refs", refs)] + list(a.items())))
            continue
        for k in keys:
            readings[k] = refs
            if a:
                annotations[k] = a

    for n in h.findall("none"):
        for k in customs_of(n.get("n")):
            nones.add(k)
            a = annotation(n)
            if a:
                annotations[k] = a

    for el in h.findall("annotation"):
        for k in customs_of(el.get("n")):
            a = annotation(el)
            if not a:
                continue
            if k in annotations:
                merged = OrderedDict(annotations[k])
                merged["sources"] = sorted(set(merged.get("sources", [])) | set(a.get("sources", [])))
                if a.get("comment"):
                    merged["comment"] = (merged.get("comment", "") + " " + a["comment"]).strip()
                annotations[k] = merged
            else:
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
        for r in day.findall("reading"):
            h = r.find("haftarah")
            if h is None:
                continue
            name = r.get("n")
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
