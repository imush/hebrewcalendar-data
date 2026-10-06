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
import opentorah_xml as ox
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
    """What this element says about its span: `book` may come from above,
    `from`/`to` are its own and are never inherited."""
    got = dict(inherited)
    if el.get("book") is not None:
        got["book"] = el.get("book")
    for a in ("from", "to"):
        got.pop(a, None)
        if el.get(a) is not None:
            got[a] = el.get(a)
    return got


def ref(got):
    r = ox.span_ref_from(got["from"], got.get("to"))
    return OrderedDict(book=book_name(got["book"]), fromCh=r[0], fromV=r[1],
                       toCh=r[2], toV=r[3])


def fragments(torah):
    """The aliyah fragments of one <torah>, in order.

    Each starts where its <aliyah> says and runs to the verse before the next
    one starts; the last runs to the end of the enclosing span. An aliyah that
    names no chapter continues in the one before it.
    """
    whole = {a: torah.get(a) for a in ("book", "from", "to")
             if torah.get(a) is not None}
    whole_from = ox.point(whole["from"])
    starts = []
    aliyot = sorted(torah.findall("aliyah"), key=lambda a: int(a.get("n", "1")))
    if not aliyot or int(aliyot[0].get("n", "1")) != 1:
        starts.append(whole_from)
    for a in aliyot:
        starts.append(ox.point(a.get("from")))

    end_ch, end_v = (ox.point(whole["to"], default_verse=whole_from[1])
                     if whole.get("to") else whole_from)
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
    # The <reading n="..."> wrapper is gone: torah/maftir/haftarah now sit
    # directly under <day>, and what the wrapper's name said is spelled out in
    # `when`, `role` and `n`. The names themselves are unchanged, so everything
    # keyed on them downstream is too.
    for day in root.findall("day"):
        for el in day:
            entry = None
            if el.tag == "torah":
                entry = OrderedDict(kind="torah", fragments=fragments(el))
                n_torah += 1
            elif el.tag == "maftir":
                entry = OrderedDict(kind="maftir", ref=ref(span_of(el, {})))
                n_maftir += 1
            if entry is not None:
                name = ox.legacy_reading_name(el)
                out.setdefault(day.get("n"), OrderedDict())[name] = entry

    OUT.write_text(json.dumps(out, ensure_ascii=False, indent=1) + "\n",
                   encoding="utf-8")
    print(f"OK  {OUT.name}: {len(out)} occasions, "
          f"{n_torah} torah readings, {n_maftir} maftirs")


if __name__ == "__main__":
    main()
