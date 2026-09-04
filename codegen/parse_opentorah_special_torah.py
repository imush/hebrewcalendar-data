#!/usr/bin/env python3
"""Parse the <torah> and <maftir> readings of vendor/opentorah/SpecialReadings.xml
→ schedules/special_torah.json.

The haftarah parser has always ignored these, so the Torah side of every
special day was missing entirely.

A <torah> is a span cut into fragments by its <aliyah> children: each aliyah
starts where it says and runs to the verse before the next one, the last
running to the span's end. That is opentorah's own reading of the element, and
the fragments are what the divisions are built from -- Rosh Chodesh joins them
in one order for most customs and another for Hagra, Chanukah indexes them by
day, and so on. Those joins are logic and live with the code that does them;
what is here is the fragments they join.

A <maftir> is a single span.
"""
import json
from collections import OrderedDict
from pathlib import Path
from common import book_name
from xml.etree import ElementTree as ET

ROOT = Path(__file__).resolve().parent.parent
XML = ROOT / "vendor" / "opentorah" / "SpecialReadings.xml"
OUT = ROOT / "schedules" / "special_torah.json"


def _int(v):
    return None if v is None else int(v)


def chapter_lengths():
    """(book, chapter) -> verses, from opentorah's own book files.

    Needed where an aliyah begins at the first verse of a chapter: the fragment
    before it ends at the last verse of the one before, and only the book knows
    where that is. The Chumash files name the book in an attribute; Tanach.xml
    names its books with a <name lang="en"> child.
    """
    out = {}
    for name in ("Genesis", "Exodus", "Leviticus", "Numbers", "Deuteronomy",
                 "Tanach"):
        path = ROOT / "vendor" / "opentorah" / f"{name}.xml"
        if not path.is_file():
            continue
        for book in ET.parse(path).getroot().iter("book"):
            en = book.get("n") or next(
                (n.get("n") for n in book.findall("name")
                 if n.get("lang") == "en"), None)
            if en is None:
                continue
            for ch in book.iter("chapter"):
                out[(en, int(ch.get("n")))] = int(ch.get("length"))
    return out


LENGTHS = chapter_lengths()


def span_of(el, inherited):
    got = dict(inherited)
    for a in ("book", "fromChapter", "fromVerse", "toChapter", "toVerse"):
        if el.get(a) is not None:
            got[a] = el.get(a)
    return got


def ref(got):
    from_ch = _int(got["fromChapter"])
    return OrderedDict(
        book=book_name(got["book"]),
        fromCh=from_ch,
        fromV=_int(got["fromVerse"]),
        toCh=_int(got.get("toChapter", from_ch)),
        # an omitted toVerse is a single verse, not the rest of the chapter
        toV=_int(got.get("toVerse", got["fromVerse"])),
    )


def fragments(torah):
    """The aliyah fragments of one <torah>, in order.

    Each starts where its <aliyah> says and runs to the verse before the next
    one starts; the last runs to the end of the enclosing span. An aliyah that
    names no chapter continues in the one before it.
    """
    whole = {a: torah.get(a) for a in
             ("book", "fromChapter", "fromVerse", "toChapter", "toVerse")
             if torah.get(a) is not None}
    starts = []
    aliyot = sorted(torah.findall("aliyah"), key=lambda a: int(a.get("n", "1")))
    if not aliyot or int(aliyot[0].get("n", "1")) != 1:
        starts.append((_int(whole["fromChapter"]), _int(whole["fromVerse"])))
    for a in aliyot:
        ch = _int(a.get("fromChapter")) or (starts[-1][0] if starts
                                            else _int(whole["fromChapter"]))
        starts.append((ch, _int(a.get("fromVerse"))))

    end_ch = _int(whole.get("toChapter", whole["fromChapter"]))
    end_v = _int(whole.get("toVerse", whole["fromVerse"]))
    out = []
    for i, (ch, v) in enumerate(starts):
        if i + 1 < len(starts):
            nch, nv = starts[i + 1]
            if nv <= 1:
                # the next aliyah opens a chapter, so this fragment ends at the
                # last verse of the one before it
                to_ch = nch - 1
                to_v = LENGTHS.get((whole["book"], to_ch))
                if to_v is None:
                    raise SystemExit(
                        f"aliyah begins at verse {nv} of chapter {nch} in "
                        f"{whole}, and no length is known for "
                        f"{whole['book']} {to_ch}")
            else:
                to_ch, to_v = nch, nv - 1
        else:
            to_ch, to_v = end_ch, end_v
        out.append(OrderedDict(book=book_name(whole["book"]), fromCh=ch, fromV=v,
                               toCh=to_ch, toV=to_v))
    return out


def main():
    root = ET.parse(XML).getroot()
    out = OrderedDict()
    n_torah = n_maftir = 0
    for day in root.findall("day"):
        for reading in day.findall("reading"):
            torah, maftir = reading.find("torah"), reading.find("maftir")
            entry = None
            if torah is not None:
                entry = OrderedDict(kind="torah", fragments=fragments(torah))
                n_torah += 1
            elif maftir is not None:
                entry = OrderedDict(kind="maftir", ref=ref(span_of(maftir, {})))
                n_maftir += 1
            if entry is not None:
                out.setdefault(day.get("n"), OrderedDict())[reading.get("n")] = entry

    OUT.write_text(json.dumps(out, ensure_ascii=False, indent=1) + "\n",
                   encoding="utf-8")
    print(f"OK  {OUT.name}: {len(out)} occasions, "
          f"{n_torah} torah readings, {n_maftir} maftirs")


if __name__ == "__main__":
    main()
