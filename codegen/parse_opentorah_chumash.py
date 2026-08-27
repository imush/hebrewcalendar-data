#!/usr/bin/env python3
"""Parse opentorah's Genesis/Exodus/Leviticus/Numbers/Deuteronomy XML into
per-parsha, per-custom Shabbat-aliyot boundaries.

opentorah's model (see texts/src/main/scala/.../Parsha.scala):

  <week>
    <aliyah n="2" fromChapter="1" fromVerse="6"/>              (Ashkenaz's aliyah 2)
    <aliyah n="3" fromChapter="1" fromVerse="9" toVerse="13"/> (Ashkenaz's aliyah 3)
    <day n="1" fromChapter="1" fromVerse="1"/>                 (universal — Chabad's aliyah 1 too)
    <day n="4" fromChapter="3" fromVerse="22" custom="Chabad"/> (per-custom override)
    ...
    <maftir fromChapter="6" fromVerse="5"/>
  </week>

The 7 Shabbat aliyot per custom:
  Common (Ashkenaz-flavoured):
    aliyot 1..3 = the three <aliyah> spans (aliyah 1 implied from parsha start)
    aliyot 4..7 = <day n="4"> .. <day n="7"> (default variant, no custom= attr)
  Chabad:
    aliyot 1..7 = <day n="1"> .. <day n="7">, with custom="Chabad" overrides applied

The parsha ends at (start of the NEXT parsha) or (start of maftir + maftir span)
whichever comes later; opentorah's maftir sits at the parsha's tail and never
overlaps the next parsha, so we use "next parsha start - 1" as the parsha end.

Emits schedules/chumash_aliyot.json with per-parsha:
  { "aliyot": [<7 common ranges>], "aliyotChabad": [<7 chabad ranges>] }
plus the existing `id`, `parshiyot`, `book`, and the same 7-item "aliyot"
mapping the Learning page already consumes.

For combined parshas (Vayakhel-Pekudei etc.), no aliyot are emitted here —
that's still handled by the Chumash.java layer (which zips two singles into
one reading via the "_" joined-key convention).
"""
import json
import re
from pathlib import Path
from xml.etree import ElementTree as ET

ROOT = Path(__file__).resolve().parent.parent
VENDOR = ROOT / "vendor" / "opentorah"
OUT = ROOT / "schedules" / "chumash_aliyot.json"

BOOKS = [  # book number → (xml file, key)
    (1, "Genesis.xml"),
    (2, "Exodus.xml"),
    (3, "Leviticus.xml"),
    (4, "Numbers.xml"),
    (5, "Deuteronomy.xml"),
]

# opentorah week Hebrew name → our Parsha key
PARSHA_MAP = {
    "בראשית":"BEREISHIT","נח":"NOACH","לך לך":"LECH_LECHA","וירא":"VAYERA",
    "חיי שרה":"CHAYEI_SARAH","תולדות":"TOLDOT","ויצא":"VAYETZE","וישלח":"VAYISHLACH",
    "וישב":"VAYESHEV","מקץ":"MIKETZ","ויגש":"VAYIGASH","ויחי":"VAYECHI",
    "שמות":"SHEMOT","וארא":"VAERA","בא":"BO","בשלח":"BESHALACH","יתרו":"YITRO",
    "משפטים":"MISHPATIM",
    "משפטימ":"MISHPATIM",   # opentorah XML typo (missing final-mem form)
    "תרומה":"TERUMAH","תצוה":"TETZAVEH","כי תשא":"KI_TISA",
    "ויקהל":"VAYAKHEL","פקודי":"PEKUDEI","ויקרא":"VAYIKRA","צו":"TZAV","שמיני":"SHEMINI",
    "תזריע":"TAZRIA","מצורע":"METZORA","אחרי מות":"ACHAREI_MOT","קדושים":"KEDOSHIM",
    "אמור":"EMOR","בהר":"BEHAR","בחקתי":"BECHUKOTAI","בחקותי":"BECHUKOTAI","במדבר":"BAMIDBAR","נשא":"NASO",
    "בהעלתך":"BEHAALOTECHA","בהעלותך":"BEHAALOTECHA","שלח":"SHELACH","קרח":"KORACH","חקת":"CHUKAT","בלק":"BALAK",
    "פינחס":"PINCHAS","פנחס":"PINCHAS","מטות":"MATOT","מסעי":"MASEI","דברים":"DEVARIM","ואתחנן":"VAETCHANAN",
    "עקב":"EIKEV","ראה":"REEH","שופטים":"SHOFTIM","כי תצא":"KI_TEITZEI","כי תבוא":"KI_TAVO",
    "נצבים":"NITZAVIM","וילך":"VAYEILECH","האזינו":"HAAZINU","וזאת הברכה":"VEZOT_HABRACHA",
}

# Read chapter lengths (needed to compute end verses and to know where a
# `<day n=N fromChapter=C fromVerse=V/>` runs to when day N+1 starts in a
# later chapter).
def load_chapter_lengths():
    lengths = {}   # (book_num, chapter) → length
    for num, fname in BOOKS:
        tree = ET.parse(VENDOR / fname)
        for ch in tree.getroot().findall("chapter"):
            lengths[(num, int(ch.get("n")))] = int(ch.get("length"))
    return lengths


CHAPTERS = load_chapter_lengths()


def num_chapters(book_num):
    return max(ch for (b, ch) in CHAPTERS.keys() if b == book_num)


def prev_verse(book_num, ch, v):
    """(book,ch,v) minus 1 verse; may cross a chapter boundary."""
    if v > 1:
        return ch, v - 1
    if ch > 1:
        return ch - 1, CHAPTERS[(book_num, ch - 1)]
    # First verse of the book — no previous verse. Return same to avoid crashing.
    return ch, v


def next_verse(book_num, ch, v):
    """(book,ch,v) plus 1 verse; may cross a chapter boundary."""
    if v < CHAPTERS[(book_num, ch)]:
        return ch, v + 1
    if ch < num_chapters(book_num):
        return ch + 1, 1
    return ch, v


def parse_book(book_num, path):
    """Yield (parsha_key, week_element, parsha_end_ch, parsha_end_v)."""
    tree = ET.parse(path)
    weeks = list(tree.getroot().findall("week"))
    for i, w in enumerate(weeks):
        he_name = None
        for n in w.findall("name"):
            if n.get("lang") == "he" and n.text:
                he_name = n.text.strip(); break
        pk = PARSHA_MAP.get(he_name)
        if pk is None:
            raise SystemExit(f"unknown parsha name {he_name!r} in {path.name}")

        # Parsha end = last verse before the next parsha begins, or end of
        # book for the last parsha.
        if i + 1 < len(weeks):
            nxt = weeks[i + 1]
            nxt_ch = int(nxt.get("fromChapter"))
            nxt_v  = int(nxt.get("fromVerse"))
            end_ch, end_v = prev_verse(book_num, nxt_ch, nxt_v)
        else:
            end_ch = num_chapters(book_num)
            end_v  = CHAPTERS[(book_num, end_ch)]

        yield pk, w, end_ch, end_v


def _int(x): return None if x is None else int(x)


def spans_from_starts(book_num, starts, end_ch, end_v):
    """starts is a list of (ch, v). Returns list of "ch:v-ch:v" ranges — each
    entry runs up to (start of next - 1); last entry runs to (end_ch, end_v)."""
    out = []
    for i, (ch, v) in enumerate(starts):
        if i + 1 < len(starts):
            n_ch, n_v = starts[i + 1]
            e_ch, e_v = prev_verse(book_num, n_ch, n_v)
        else:
            e_ch, e_v = end_ch, end_v
        out.append(f"{ch}:{v}-{e_ch}:{e_v}")
    return out


def resolve_days(week, book_num, parsha_from_ch, parsha_from_v, custom):
    """Return the 7 (ch, v) day starts for the given custom.
    custom is None (default) or 'Chabad' or 'Ashkenaz'."""
    starts = {}  # n → (ch, v)
    for d in week.findall("day"):
        n = int(d.get("n"))
        c = d.get("custom")
        this = (int(d.get("fromChapter")), int(d.get("fromVerse")))
        if c is None:
            # Default — only takes effect if no custom-specific override wins.
            starts.setdefault(n, ("_default", this))
        elif c == custom:
            starts[n] = ("_custom", this)
    # Day 1 starts at parsha start if not explicitly set.
    result = []
    for n in range(1, 8):
        v = starts.get(n)
        if v is None:
            # No explicit start → use parsha start for day 1, or previous day + 1 otherwise.
            if n == 1:
                result.append((parsha_from_ch, parsha_from_v))
            else:
                raise SystemExit(f"day {n} not defined in {week.get('n')}")
        else:
            # `_default` takes precedence unless a `_custom` beat it (we may have
            # written `_custom` on top). Just extract the tuple.
            result.append(v[1])
    return result


def resolve_aliyot(week, book_num, parsha_from_ch, parsha_from_v, days_default_starts):
    """Common (Ashkenaz) 7 Shabbat aliyot:
      1..3 from <aliyah> entries (aliyah 1 implied at parsha start),
      4..7 from <day n=4..7> default starts.
    Returns 7 (ch, v) tuples."""
    aliyah_starts = {1: (parsha_from_ch, parsha_from_v)}
    for a in week.findall("aliyah"):
        n = int(a.get("n"))
        aliyah_starts[n] = (int(a.get("fromChapter")), int(a.get("fromVerse")))
    result = []
    for n in range(1, 8):
        if n <= 3:
            if n not in aliyah_starts:
                raise SystemExit(f"aliyah {n} not defined in {week.get('n')}")
            result.append(aliyah_starts[n])
        else:
            result.append(days_default_starts[n - 1])
    return result


def main():
    all_readings = {}
    for book_num, fname in BOOKS:
        path = VENDOR / fname
        for pk, week, end_ch, end_v in parse_book(book_num, path):
            from_ch = int(week.get("fromChapter"))
            from_v  = int(week.get("fromVerse"))
            days_default = resolve_days(week, book_num, from_ch, from_v, custom=None)
            days_chabad  = resolve_days(week, book_num, from_ch, from_v, custom="Chabad")
            aliyot_common = resolve_aliyot(week, book_num, from_ch, from_v, days_default)
            aliyot_common_ranges = spans_from_starts(book_num, aliyot_common, end_ch, end_v)
            aliyot_chabad_ranges = spans_from_starts(book_num, days_chabad,   end_ch, end_v)
            all_readings[pk] = {
                "book": book_num,
                "aliyot":       aliyot_common_ranges,
                "aliyotChabad": aliyot_chabad_ranges,
            }
    return all_readings


def merge_into_existing():
    existing = json.loads(OUT.read_text())
    per_parsha = main()
    updated = 0; added_chabad = 0
    for r in existing["readings"]:
        # Combined readings (id has an underscore between two parsha keys) —
        # not handled here; the Chumash.java layer zips singles.
        if r["id"] not in per_parsha:
            continue
        p = per_parsha[r["id"]]
        # Preserve any other keys we already store (parshiyot, etc.).
        r["aliyot"] = p["aliyot"]
        if r["aliyot"] != p["aliyotChabad"]:
            r["aliyotChabad"] = p["aliyotChabad"]; added_chabad += 1
        else:
            r.pop("aliyotChabad", None)
        updated += 1
    OUT.write_text(json.dumps(existing, ensure_ascii=False, indent=2) + "\n")
    print(f"updated {updated} single-parsha readings; "
          f"{added_chabad} carry an explicit aliyotChabad")


if __name__ == "__main__":
    merge_into_existing()
