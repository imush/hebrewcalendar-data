#!/usr/bin/env python3
"""Parse vendor/opentorah/Haftarah.xml → schedules/haftarot.json.

Emits per-parsha, per-custom haftarah references (multi-part supported).
Only exposes the 5 customs the consumer UI lets users pick: Ashkenaz,
Sefard, Chabad, Teiman, Italki. Falls back through the opentorah
inheritance tree (Chabad -> Sefard -> Common, Italki -> Ashkenaz ->
Common, etc.) so every (parsha, exposed-custom) pair resolves.
"""
import json
from pathlib import Path
from common import book_name
from xml.etree import ElementTree as ET

ROOT   = Path(__file__).resolve().parent.parent
XML    = ROOT / "vendor" / "opentorah" / "Haftarah.xml"
OUT    = ROOT / "schedules" / "haftarot.json"
OUT_PRECEDENCE = ROOT / "schedules" / "haftarah_precedence.json"

# opentorah custom name -> parent custom name (from Custom.scala)
# The custom tree, exposed customs and their opentorah XML names all come
# from names/customs.json, so the tree lives in exactly one place.
_CUSTOMS = json.loads((ROOT / "names" / "customs.json").read_text(encoding="utf-8"))

def _internal(key):
    """ASHKENAZ → Ashkenaz, CHAYEY_ODOM → ChayeyOdom."""
    return "".join(p.capitalize() for p in key.split("_"))

EXPOSED = list(_CUSTOMS)
EXPOSED_INTERNAL = {k: _internal(k) for k in EXPOSED}
# "Common" is opentorah's abstract root; it is not an exposed custom, so
# customs.json spells it as a null parent.
PARENT = {"Common": None}
for _k, _v in _CUSTOMS.items():
    PARENT[_internal(_k)] = _internal(_v["parent"]) if _v["parent"] else "Common"
# opentorah spells the two-word names with a space; ours have none
def _key_of(internal):
    """Ashkenaz -> ASHKENAZ, ChayeyOdom -> CHAYEY_ODOM."""
    import re as _re
    return _re.sub(r"(?<=[a-z])(?=[A-Z])", "_", internal).upper()


def _with_descendants(internal):
    """A custom and everything under it, as opentorah means when it names one."""
    out = [internal]
    changed = True
    while changed:
        changed = False
        for child, parent in PARENT.items():
            if parent in out and child not in out:
                out.append(child); changed = True
    return out


def _from_xml_name(name):
    internal = name.replace(" ", "")
    if internal != "Common" and internal not in PARENT:
        raise SystemExit(
            f"unknown custom in Haftarah.xml: {name!r}. It used to be accepted "
            f"silently, so the custom kept its parent's reading.")
    return internal

# opentorah parsha name → hebrewcalendar-data key
PARSHA_MAP = {
    "Bereishis": "BEREISHIT", "Noach": "NOACH", "Lech Lecha": "LECH_LECHA",
    "Vayeira": "VAYERA", "Chayei Sarah": "CHAYEI_SARAH", "Toldos": "TOLDOT",
    "Vayeitzei": "VAYETZE", "Vayishlach": "VAYISHLACH", "Vayeishev": "VAYESHEV",
    "Mikeitz": "MIKETZ", "Vayigash": "VAYIGASH", "Vayechi": "VAYECHI",
    "Shemos": "SHEMOT", "Va'eira": "VAERA", "Bo": "BO", "Beshalach": "BESHALACH",
    "Yisro": "YITRO", "Mishpatim": "MISHPATIM", "Terumah": "TERUMAH",
    "Tetzaveh": "TETZAVEH", "Ki Sisa": "KI_TISA", "Vayakhel": "VAYAKHEL",
    "Pekudei": "PEKUDEI", "Vayikra": "VAYIKRA", "Tzav": "TZAV",
    "Shemini": "SHEMINI", "Tazria": "TAZRIA", "Metzora": "METZORA",
    "Acharei": "ACHAREI_MOT", "Kedoshim": "KEDOSHIM", "Emor": "EMOR",
    "Behar": "BEHAR", "Bechukosai": "BECHUKOTAI", "Bemidbar": "BAMIDBAR",
    "Nasso": "NASO", "Beha'aloscha": "BEHAALOTECHA", "Shelach": "SHELACH",
    "Korach": "KORACH", "Chukas": "CHUKAT", "Balak": "BALAK",
    "Pinchas": "PINCHAS", "Mattos": "MATOT", "Masei": "MASEI",
    "Devarim": "DEVARIM", "Va'eschanan": "VAETCHANAN", "Eikev": "EIKEV",
    "Re'eh": "REEH", "Shoftim": "SHOFTIM", "Ki Seitzei": "KI_TEITZEI",
    "Ki Savo": "KI_TAVO", "Nitzavim": "NITZAVIM", "Vayeilech": "VAYEILECH",
    "Haazinu": "HAAZINU",
    # Vezos Haberachah — read on Simchat Torah (never a normal Shabbat),
    # but a first-class Parsha value so consumers can Haftarot.forParsha
    # it alongside the weekly parshiyot.
    "Vezos Haberachah": "VEZOT_HABRACHA",
}


def merged(parent_attrs, child_attrs):
    """Overlay child on parent for the reference attributes."""
    m = dict(parent_attrs)
    for k in ("book", "fromChapter", "fromVerse", "toChapter", "toVerse"):
        if k in child_attrs and child_attrs[k]:
            m[k] = child_attrs[k]
    return m


def _int(v):
    return None if v is None else int(v)


def _finalize(attrs):
    """attrs → single-part reference (book, fromCh, fromV, toCh, toV).

    toChapter defaults to fromChapter, and a missing toVerse means a SINGLE
    VERSE, not "read to the end of the chapter". This read it the second way
    and resolved it through a table of chapter lengths, which made Baladi's
    Metzora run to II Kings 13:25 instead of stopping at 13:23, and
    Va'eschanan to Isaiah 41:29 instead of 41:17."""
    if "book" not in attrs:
        raise ValueError(f"missing book in {attrs}")
    from_ch = _int(attrs.get("fromChapter"))
    from_v  = _int(attrs.get("fromVerse"))
    to_ch   = _int(attrs.get("toChapter", from_ch))
    to_v    = _int(attrs.get("toVerse", from_v))
    return {"book": book_name(attrs["book"]), "fromCh": from_ch, "fromV": from_v,
            "toCh": to_ch, "toV": to_v}


def parse_custom_element(custom_el, week_attrs):
    """Return list of parts for a <custom> element."""
    custom_attrs = merged(week_attrs, custom_el.attrib)
    parts_els = list(custom_el.findall("part"))
    if not parts_els:
        return [_finalize(custom_attrs)]
    result = []
    for p in sorted(parts_els, key=lambda e: int(e.get("n", "1"))):
        result.append(_finalize(merged(custom_attrs, p.attrib)))
    return result


precedence = {}   # parsha key -> customs whose reading comes from this parsha when combined
notes = {}        # parsha key -> {internal custom -> {"sources": [...], "comment": str}}


def _note_of(el):
    """The sources and comment an element carries, or None if it carries none."""
    srcs = [x.strip() for x in (el.get("sources") or "").split(",") if x.strip()]
    comment = " ".join((el.get("comment") or "").split())
    if not srcs and not comment:
        return None
    out = {}
    if srcs:
        out["sources"] = srcs
    if comment:
        out["comment"] = comment
    return out


def parse():
    tree = ET.parse(XML)
    root = tree.getroot()
    # week name → {internal_custom_name → [parts, ...]}
    per_parsha_customs = {}
    for week in root.findall("week"):
        wname = week.get("n")
        if wname not in PARSHA_MAP:
            continue
        pkey = PARSHA_MAP[wname]
        week_attrs = {k: v for k, v in week.attrib.items()
                      if k not in ("n", "sources", "comment", "precedenceWhenCombined")}
        # Customs for which this parsha's haftarah wins when it is the first of
        # a combined week, instead of the second parsha's as combined weeks
        # otherwise go. Names a custom and everything under it.
        if week.get("precedenceWhenCombined"):
            claimed = []
            for name in week.get("precedenceWhenCombined").split(","):
                internal = _from_xml_name(name.strip())
                claimed.extend(_with_descendants(internal))
            # Common is opentorah's abstract root, not a custom anyone reads as
            precedence[pkey] = sorted({_key_of(c) for c in claimed} - {"COMMON"})
        # A `variant` entry is a reading recorded beside a custom's own, never
        # resolved to. Taking it would silently overwrite the reading it sits
        # beside -- which it did, giving Ashkenaz the Vayeilech variant.
        custom_els = [c for c in week.findall("custom") if c.get("variant") is None]
        variant_els = [c for c in week.findall("custom") if c.get("variant") is not None]
        by_custom = {}
        by_custom_note = {}
        if not custom_els:
            # Universal — the <week> itself carries all the reference attrs.
            by_custom["Common"] = [_finalize(week_attrs)]
            wn = _note_of(week)
            if wn:
                by_custom_note["Common"] = (wn, ["Common"])
        else:
            for c in custom_els:
                n = c.get("n") or "Common"
                # Comma-separated only: two customs are spelled with a space,
                # "Chayey Odom" and "Pure Sephardim", and splitting on spaces
                # turned each into two names that match nothing -- so they
                # silently kept their parent's reading.
                names = [x.strip() for x in n.split(",") if x.strip()]
                cn = _note_of(c)
                internals = [_from_xml_name(x) for x in names]
                for internal in internals:
                    by_custom[internal] = parse_custom_element(c, week_attrs)
                    if cn:
                        # the note travels with the customs the entry names, so
                        # an heir can be told whose remark it is reading
                        by_custom_note[internal] = (cn, internals)

        # <annotation n="Custom"> hangs a note on one custom, whether or not it
        # has a reading of its own. Upstream moved the remarks that were about
        # a single custom out of shared entries and into these, so a parser
        # that reads only <custom> now sees a note where the prose is not, and
        # none where it is.
        for a in week.findall("annotation"):
            an = _note_of(a)
            if not an:
                continue
            # `n` is a list, as it is on <custom>: one note, said of several
            # customs, held once rather than copied per custom.
            names = [x.strip() for x in (a.get("n") or "Common").split(",") if x.strip()]
            internals = [_from_xml_name(x) for x in names]
            for internal in internals:
                # An annotation adds to what the reading entry already records,
                # it does not replace it -- opentorah's own Annotation.++ merges
                # the two. The entry carries the sources, which attest the
                # reading for every custom in it; the annotation carries the
                # remark about this one. Overwriting lost Romania its michlol.
                prev = by_custom_note.get(internal)
                merged = dict(prev[0]) if prev else {}
                srcs = list(merged.get("sources", []))
                for x in an.get("sources", []):
                    if x not in srcs:
                        srcs.append(x)
                if srcs:
                    merged["sources"] = srcs
                comments = [c for c in (merged.get("comment"), an.get("comment")) if c]
                if comments:
                    merged["comment"] = " ".join(comments)
                by_custom_note[internal] = (merged, internals)
        per_parsha_customs[pkey] = by_custom
        notes[pkey] = by_custom_note
    return per_parsha_customs


def resolve(by_custom, exposed_internal):
    """Walk the parent chain to find a defined haftarah for the exposed custom."""
    found = resolve_from(by_custom, exposed_internal)
    return None if found is None else found[0]


def resolve_from(by_custom, exposed_internal):
    """As resolve, but says which ancestor the reading came from."""
    cur = exposed_internal
    while cur is not None:
        if cur in by_custom:
            return by_custom[cur], cur
        cur = PARENT.get(cur)
    return None


def main():
    per_parsha = parse()
    out = {}
    unresolved = []
    for pkey, by_custom in per_parsha.items():
        entry = {}
        annotations = {}
        for exposed in EXPOSED:
            internal = EXPOSED_INTERNAL[exposed]
            found = resolve_from(by_custom, internal)
            if found is None:
                unresolved.append((pkey, exposed))
                continue
            parts, came_from = found
            entry[exposed] = parts
            # The note belongs to the entry the reading came from, so a custom
            # that inherits the reading inherits the note. Where the entry does
            # not name this custom, recordedFor says whose remark it is: taking
            # it silently put a remark about Poznan under Chabad's reading, and
            # one about Romania under Chabad's, as if it were about them.
            carried = notes.get(pkey, {}).get(came_from)
            if carried:
                note, named = carried
                out_note = dict(note)
                if internal not in named:
                    out_note["recordedFor"] = sorted({_key_of(x) for x in named} - {"COMMON"})
                annotations[exposed] = out_note
        if annotations:
            entry["annotations"] = annotations
        out[pkey] = entry
    if unresolved:
        raise SystemExit(f"unresolved (parsha, custom) pairs: {unresolved}")
    OUT.write_text(json.dumps(out, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(f"OK  wrote {OUT.relative_to(ROOT)} — {len(out)} parshiyot × {len(EXPOSED)} customs")
    OUT_PRECEDENCE.write_text(json.dumps(precedence, ensure_ascii=False, indent=2) + "\n",
                              encoding="utf-8")
    print(f"OK  wrote {OUT_PRECEDENCE.relative_to(ROOT)} — "
          f"{len(precedence)} parshiyot claim customs when combined")


if __name__ == "__main__":
    main()
