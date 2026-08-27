#!/usr/bin/env python3
"""Parse vendor/opentorah/scala/SpecialReadings.scala → schedules/special_haftarot.json.

opentorah's SpecialReadings.scala encodes every non-parsha haftarah
(Rosh Chodesh Shabbat, Machar Chodesh, ParshaShekalim/Zachor/Parah/
Hachodesh, ShabbosHagodol, Chanukah, Yom Tov Shabbatot, Yom Kippur
morning + afternoon, fast-day afternoon, Tisha B'Av morning +
afternoon, etc.) as embedded XML literals in Scala 3 syntax.

We extract every `parseHaftarah(...)` call along with:
  - the enclosing `object`  → occasion name
  - the `val`/`def` name    → variant (default 'haftarah' → main;
                                'shabbosHaftarah', 'afternoonHaftarah',
                                'shabbos1Haftarah', 'shabbosAdditionalHaftarah',
                                'afternoonHaftarahExceptions', etc.)

The XML inside each block is standard opentorah <haftarah>...</haftarah>
so we reuse the same custom-inheritance resolution as
parse_opentorah_haftarot.py. `full=false` blocks (additions) may have
customs undefined — we skip resolution for those.
"""
import json
import re
from pathlib import Path
from xml.etree import ElementTree as ET

ROOT   = Path(__file__).resolve().parent.parent
SCALA  = ROOT / "vendor" / "opentorah" / "scala" / "SpecialReadings.scala"
OUT    = ROOT / "schedules" / "special_haftarot.json"

# Reuse the same custom parent map / exposed customs / xml→internal from
# the standard-haftarot parser.  Kept in-file to keep this script self-
# contained (no cross-imports between codegen scripts).
PARENT = {
    "Common":     None,
    "Ashkenaz":   "Common",  "Italki":  "Ashkenaz", "Frankfurt": "Ashkenaz",
    "Lita":       "Ashkenaz","ChayeyOdom":"Lita",   "Hagra":     "Ashkenaz",
    "Sefard":     "Common",  "Chabad":  "Sefard",   "Magreb":    "Sefard",
    "Algeria":    "Magreb",  "Toshbim": "Magreb",   "Djerba":    "Magreb",
    "Morocco":    "Magreb",  "Fes":     "Morocco",
    "Marrakesh":  "Morocco",
    "Bavlim":     "Sefard",  "Teiman":  "Sefard",
    "Baladi":     "Teiman",  "Shami":   "Teiman",
}
XML_TO_INTERNAL = {"Chayey Odom": "ChayeyOdom"}
EXPOSED = [
    "ASHKENAZ", "ITALKI", "FRANKFURT", "LITA", "CHAYEY_ODOM", "HAGRA",
    "SEFARD",   "CHABAD", "MAGREB",    "ALGERIA","MOROCCO",    "FES",
    "MARRAKESH",
    "TOSHBIM",  "DJERBA", "BAVLIM",    "TEIMAN", "BALADI",     "SHAMI",
]
EXPOSED_INTERNAL = {
    "ASHKENAZ":"Ashkenaz","ITALKI":"Italki","FRANKFURT":"Frankfurt",
    "LITA":"Lita","CHAYEY_ODOM":"ChayeyOdom","HAGRA":"Hagra",
    "SEFARD":"Sefard","CHABAD":"Chabad","MAGREB":"Magreb","ALGERIA":"Algeria",
    "MOROCCO":"Morocco","FES":"Fes","MARRAKESH":"Marrakesh",
    "TOSHBIM":"Toshbim","DJERBA":"Djerba",
    "BAVLIM":"Bavlim","TEIMAN":"Teiman","BALADI":"Baladi","SHAMI":"Shami",
}

# Nach chapter lengths where opentorah's XML omits `toVerse`, meaning
# "read to end of chapter". Verified against Sefaria.
NACH_CHAPTER_LENGTHS = {
    ("II Kings",  13): 25,
    ("Isaiah",    41): 29,
    ("Isaiah",    66): 24,
    ("Isaiah",    40): 31,
    ("Obadiah",    1): 21,
    ("Jonah",      1): 16, ("Jonah", 2): 11, ("Jonah", 3): 10, ("Jonah", 4): 11,
    ("Micah",      7): 20,
    ("Ezekiel",   36): 38, ("Ezekiel", 43): 27, ("Ezekiel", 45): 25, ("Ezekiel", 46): 24,
    ("Malachi",    3): 24,
    ("Zechariah",  2): 17, ("Zechariah", 4): 14, ("Zechariah", 14): 21,
    ("Amos",       2): 16, ("Amos", 3):  15,
    ("Hosea",     14): 10,
    ("Joel",       2): 27,
    ("I Samuel",  20): 42,
    ("II Samuel", 22): 51,
    ("I Kings",    3): 28, ("I Kings", 7): 51, ("I Kings", 8): 66,
    ("Jeremiah",   1): 19, ("Jeremiah", 9): 26, ("Jeremiah", 34): 22,
    ("Joshua",     6): 27,
    ("Judges",     5): 31,
    ("I Kings",   18): 46, ("I Kings", 19): 21,
    ("II Kings",   4): 44, ("II Kings", 7):  20,
    ("Ezekiel",    1): 28, ("Ezekiel", 3):  27,
    ("Habakkuk",   2): 20, ("Habakkuk", 3): 19,
}

# val-name → variant slug
VARIANT_MAP = {
    "haftarah":                     "MAIN",
    "shabbosHaftarah":              "SHABBAT",
    "shabbosAdditionalHaftarah":    "SHABBAT_ADDITION",
    "afternoonHaftarah":            "AFTERNOON",
    "afternoonHaftarahExceptions":  "AFTERNOON_EXCEPTIONS",
    "defaultAfternoonHaftarah":     "AFTERNOON_DEFAULT",
    "shabbos1Haftarah":             "SHABBAT_1",
    "shabbos2Haftarah":             "SHABBAT_2",
}


# ── XML → resolved refs (shared with haftarot parser) ──────────────────

def merged(parent_attrs, child_attrs):
    m = dict(parent_attrs)
    for k in ("book", "fromChapter", "fromVerse", "toChapter", "toVerse"):
        if k in child_attrs and child_attrs[k]:
            m[k] = child_attrs[k]
    return m

def _int(v): return None if v is None else int(v)

def _finalize(attrs):
    if "book" not in attrs:
        raise ValueError(f"missing book in {attrs}")
    from_ch = _int(attrs.get("fromChapter"))
    from_v  = _int(attrs.get("fromVerse"))
    to_ch   = _int(attrs.get("toChapter", from_ch))
    to_v    = _int(attrs.get("toVerse"))
    if to_v is None:
        key = (attrs["book"], to_ch)
        if key not in NACH_CHAPTER_LENGTHS:
            raise ValueError(f"missing toVerse and no chapter length for {key}: {attrs}")
        to_v = NACH_CHAPTER_LENGTHS[key]
    return {"book": attrs["book"], "fromCh": from_ch, "fromV": from_v,
            "toCh": to_ch, "toV": to_v}


def parse_custom_element(custom_el, week_attrs):
    custom_attrs = merged(week_attrs, custom_el.attrib)
    parts_els = list(custom_el.findall("part"))
    if not parts_els:
        return [_finalize(custom_attrs)]
    return [_finalize(merged(custom_attrs, p.attrib))
            for p in sorted(parts_els, key=lambda e: int(e.get("n", "1")))]


def resolve(by_custom, exposed_internal):
    cur = exposed_internal
    while cur is not None:
        if cur in by_custom:
            return by_custom[cur]
        cur = PARENT.get(cur)
    return None


def resolve_all(by_custom, is_full):
    """Resolve the by_custom map into per-EXPOSED-custom entries.

    is_full=True: every EXPOSED custom must resolve (fallback to Common
                  or one of its ancestors).
    is_full=False (additions/exceptions): only include EXPOSED customs
                  whose resolution is defined; others are omitted."""
    out = {}
    for exposed in EXPOSED:
        parts = resolve(by_custom, EXPOSED_INTERNAL[exposed])
        if parts is None:
            if is_full:
                raise SystemExit(f"unresolved custom {exposed} in {by_custom}")
            continue
        out[exposed] = parts
    return out


# ── Scala source scanner ───────────────────────────────────────────────

# Objects to keep — every leaf object we care about (skip helpers like
# `Fast`, `Succos`, `IntermediateShabbos`, `FestivalEnd` that don't own
# a haftarah of their own).
OBJECT_RE = re.compile(r"^\s*(object|private object)\s+([A-Za-z0-9_]+)")
HAFTARAH_ASSIGN_RE = re.compile(
    r"(?:private\s+|override\s+|protected\s+)*"
    r"(?:val|def)\s+([A-Za-z][A-Za-z0-9_]*)\s*"
    r"(?::\s*[^=]+)?"                # optional type ascription
    r"=\s*(?:Some\()?parseHaftarah\("
)


def scala_comment_strip(fragment):
    """Strip `// ...` line comments from Scala fragment text. XML literals
    in Scala 3 allow `//` after a `>` on the same line — those are Scala
    comments, not XML.  We drop them line-by-line before feeding to ET."""
    out = []
    for line in fragment.splitlines():
        idx = line.find("//")
        if idx >= 0:
            # Only strip if the // isn't inside an XML attribute (crude:
            # if there's a `"` after //, treat as comment; otherwise safe).
            out.append(line[:idx])
        else:
            out.append(line)
    return "\n".join(out)


def extract_xml_fragment(text, start_paren_index):
    """Given the position right after `parseHaftarah(`, return the XML
    payload string (from `<haftarah` to its matching close).

    The outer element is always <haftarah>; it is either self-closing
    (`<haftarah ... />`) or has children ending in `</haftarah>`.  We
    detect which by looking at the opening tag's terminator: if it ends
    `/>`, it's self-closing; if it ends `>`, we look for `</haftarah>`."""
    lt = text.find("<haftarah", start_paren_index)
    if lt < 0: raise ValueError("no <haftarah> found")
    # Find the end of the opening tag: the first `>` after lt, honouring
    # attribute-value quotes (opentorah never has `>` inside an attribute
    # here, but be safe).
    i = lt + len("<haftarah")
    in_str = None
    while i < len(text):
        ch = text[i]
        if in_str:
            if ch == in_str: in_str = None
        elif ch in ('"', "'"):
            in_str = ch
        elif ch == ">":
            break
        i += 1
    if i >= len(text): raise ValueError("no > closing the opening tag")
    if text[i-1] == "/":
        return text[lt:i+1]
    close = text.find("</haftarah>", i)
    if close < 0: raise ValueError("no </haftarah> found")
    return text[lt:close + len("</haftarah>")]


def is_full_call(text, start_paren_index):
    """True unless the call is `parseHaftarah(full = false, ...)`."""
    # Look at up to the first `<` for the "full = false" argument.
    lt = text.find("<haftarah", start_paren_index)
    head = text[start_paren_index:lt] if lt > 0 else text[start_paren_index:start_paren_index+80]
    return "full = false" not in head and "full=false" not in head


def snake(name):
    """CamelCase → SCREAMING_SNAKE_CASE."""
    s = re.sub(r"([a-z0-9])([A-Z])", r"\1_\2", name)
    return s.upper()


def scan_scala(text):
    """Iterate the Scala source, tracking `object X:` nesting by
    indentation.  Yields (occasion_name, variant, is_full, xml_str)."""
    # Track a stack of (indent, object_name).
    lines = text.splitlines(keepends=True)
    stack = []            # list of (indent, name)
    offset = 0            # running char offset for regex on full text
    line_starts = [0]
    for line in lines[:-1]:
        line_starts.append(line_starts[-1] + len(line))

    for li, line in enumerate(lines):
        m = OBJECT_RE.match(line)
        if m:
            indent = len(line) - len(line.lstrip(" "))
            while stack and stack[-1][0] >= indent:
                stack.pop()
            stack.append((indent, m.group(2)))
            continue

        h = HAFTARAH_ASSIGN_RE.search(line)
        if h and stack:
            val_name = h.group(1)
            occasion = stack[-1][1]
            variant  = VARIANT_MAP.get(val_name, snake(val_name))
            # Find the parseHaftarah( position in the FULL text.
            start_line = line_starts[li]
            call_ix = line.find("parseHaftarah(", h.start())
            paren_pos = start_line + call_ix + len("parseHaftarah(")
            is_full = is_full_call(text, paren_pos)
            xml_str = extract_xml_fragment(text, paren_pos)
            yield occasion, variant, is_full, xml_str


def parse_xml(xml_str):
    """Parse a <haftarah>...</haftarah> string → {internal_custom: [parts]}.

    Three shapes covered:
      - <haftarah book=... fromChapter=... .../>  — single universal ref.
      - <haftarah book=...><part n=1 .../><part n=2 .../></haftarah>
          — multi-part universal (no custom split; goes under Common).
      - <haftarah ...><custom n=...>...</custom><custom .../></haftarah>
          — per-custom, each child either a self-closing single or with
            nested <part> children.
    """
    xml_str = scala_comment_strip(xml_str)
    el = ET.fromstring(xml_str)
    outer_attrs = {k: v for k, v in el.attrib.items()}
    custom_els = list(el.findall("custom"))
    part_els   = list(el.findall("part"))
    if not custom_els:
        if part_els:
            parts = [_finalize(merged(outer_attrs, p.attrib))
                     for p in sorted(part_els, key=lambda e: int(e.get("n", "1")))]
        else:
            parts = [_finalize(outer_attrs)]
        return {"Common": parts}
    by = {}
    for c in custom_els:
        n = c.get("n") or "Common"
        names = [x.strip() for x in n.replace(",", " ").split() if x.strip()]
        for name in names:
            internal = XML_TO_INTERNAL.get(name, name)
            by[internal] = parse_custom_element(c, outer_attrs)
    return by


# ── Deliberate divergences from upstream ───────────────────────────────
# Corrections applied after parsing, so the vendored Scala stays a verbatim
# copy of upstream and re-vendoring keeps the fix. Drop an entry once the
# corresponding change lands upstream.
#
# (occasion, variant) → (customs to keep, why)
UPSTREAM_CORRECTIONS = {
    # opentorah hangs the Tzom Gedalia mincha exception — Hosea 14:2-10 +
    # Joel 2:11-27 — on Morocco, so Fes inherits it too. Morocco reads the
    # same as Ashkenaz there (Isaiah 55:6-56:8, already
    # Fast.defaultAfternoonHaftarah); it is specifically Marrakesh that keeps
    # Hosea + Joel. Narrowing the exception to Marrakesh leaves Morocco and
    # Fes falling through to the default. The verses are unchanged.
    ("FastOfGedalia", "AFTERNOON_EXCEPTIONS"):
        (["MARRAKESH"],
         "the Tzom Gedalia exception belongs to Marrakesh, not to Morocco as a whole"),
}


def apply_corrections(out):
    for (occasion, variant), (keep, why) in UPSTREAM_CORRECTIONS.items():
        entry = out.get(occasion, {}).get(variant)
        if entry is None:
            print(f"WARNING  correction no longer applies: {occasion}.{variant} is "
                  f"absent upstream — has it been fixed? ({why})")
            continue
        dropped = sorted(set(entry) - set(keep))
        missing = sorted(set(keep) - set(entry))
        if missing:
            raise SystemExit(
                f"correction for {occasion}.{variant} wants {missing}, which the "
                f"parser did not resolve — check the custom tree")
        for c in dropped:
            del entry[c]
        print(f"OK  correction: {occasion}.{variant} kept for {keep}, "
              f"dropped {dropped} — {why}")


def main():
    text = SCALA.read_text()
    out = {}    # occasion → {variant → {custom → parts, ...}}
    for occasion, variant, is_full, xml_str in scan_scala(text):
        try:
            by_custom = parse_xml(xml_str)
        except Exception as e:
            print(f"XML parse failed for {occasion}.{variant}: {e}")
            print("Fragment was:")
            print(xml_str)
            raise
        resolved  = resolve_all(by_custom, is_full)
        out.setdefault(occasion, {})[variant] = resolved
    apply_corrections(out)
    OUT.write_text(json.dumps(out, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(f"OK  wrote {OUT.relative_to(ROOT)} — {len(out)} occasions, "
          f"{sum(len(v) for v in out.values())} variants total")


if __name__ == "__main__":
    main()
