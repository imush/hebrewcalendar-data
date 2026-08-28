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
from xml.etree import ElementTree as ET

ROOT   = Path(__file__).resolve().parent.parent
XML    = ROOT / "vendor" / "opentorah" / "Haftarah.xml"
OUT    = ROOT / "schedules" / "haftarot.json"

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
XML_TO_INTERNAL = {"Chayey Odom": "ChayeyOdom"}

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


# Nach chapter lengths for the few "read to end of chapter" haftarah
# fragments where opentorah omits toVerse. Verified against Sefaria.
NACH_CHAPTER_LENGTHS = {
    ("II Kings", 13): 25,
    ("Isaiah",   41): 29,
    ("Joshua",    6): 27,   # Vezos Haberachah Teiman part 2
}


def _finalize(attrs):
    """attrs → single-part reference (book, fromCh, fromV, toCh, toV).

    toChapter defaults to fromChapter (per XML doc comment).
    Missing toVerse means 'read to end of that chapter' — resolved via
    NACH_CHAPTER_LENGTHS."""
    if "book" not in attrs:
        raise ValueError(f"missing book in {attrs}")
    from_ch = _int(attrs.get("fromChapter"))
    from_v  = _int(attrs.get("fromVerse"))
    to_ch   = _int(attrs.get("toChapter",   from_ch))
    to_v    = _int(attrs.get("toVerse"))
    if to_v is None:
        key = (attrs["book"], to_ch)
        if key not in NACH_CHAPTER_LENGTHS:
            raise ValueError(f"missing toVerse and no chapter length for {key}: {attrs}")
        to_v = NACH_CHAPTER_LENGTHS[key]
    return {"book": attrs["book"], "fromCh": from_ch, "fromV": from_v,
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
        week_attrs = {k: v for k, v in week.attrib.items() if k != "n"}
        custom_els = list(week.findall("custom"))
        by_custom = {}
        if not custom_els:
            # Universal — the <week> itself carries all the reference attrs.
            by_custom["Common"] = [_finalize(week_attrs)]
        else:
            for c in custom_els:
                n = c.get("n") or "Common"
                # Space or comma-separated list of custom names.
                names = [x.strip() for x in n.replace(",", " ").split() if x.strip()]
                for name in names:
                    internal = XML_TO_INTERNAL.get(name, name)
                    by_custom[internal] = parse_custom_element(c, week_attrs)
        per_parsha_customs[pkey] = by_custom
    return per_parsha_customs


def resolve(by_custom, exposed_internal):
    """Walk the parent chain to find a defined haftarah for the exposed custom."""
    cur = exposed_internal
    while cur is not None:
        if cur in by_custom:
            return by_custom[cur]
        cur = PARENT.get(cur)
    return None


def main():
    per_parsha = parse()
    out = {}
    unresolved = []
    for pkey, by_custom in per_parsha.items():
        entry = {}
        for exposed in EXPOSED:
            parts = resolve(by_custom, EXPOSED_INTERNAL[exposed])
            if parts is None:
                unresolved.append((pkey, exposed))
                continue
            entry[exposed] = parts
        out[pkey] = entry
    if unresolved:
        raise SystemExit(f"unresolved (parsha, custom) pairs: {unresolved}")
    OUT.write_text(json.dumps(out, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(f"OK  wrote {OUT.relative_to(ROOT)} — {len(out)} parshiyot × {len(EXPOSED)} customs")


if __name__ == "__main__":
    main()
