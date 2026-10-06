#!/usr/bin/env python3
"""The grammar of opentorah's vendored XML, in one place.

Upstream reshaped these files (opentorah 995085c, vendored 2026-10-05):

    fromChapter/fromVerse/toChapter/toVerse   ->  from="c:v" / to="c:v"
    <part n="1">                              ->  <span>
    <reading n="shabbosAdditionalHaftarah">   ->  when="shabbos" role="additional"
    full="false"                              ->  partial="true"
    comment="..."                             ->  <comment>...</comment>
    variant="..." (attribute)                 ->  <variant> (child element)
    <annotation n="X" .../>                   ->  <custom n="X" reads="inherit">
    CustomTree.xml                            ->  folded into Custom.xml

Two rules are easy to get wrong and are worth stating:

  * `book` is inherited from an ancestor; `from`/`to` are never inherited.
    They used to be, which is why a custom could once carry a chapter and
    let its parts supply only verses.
  * `to` omitted means a SINGLE VERSE, not "to the end of the chapter".
"""
from xml.etree import ElementTree as ET


def custom_tree(path):
    """Custom.xml as {english name: parent english name or None}.

    Upstream folded CustomTree.xml into Custom.xml: a custom's parent is now
    the custom it is nested in, and its names are its <name lang=...> children.
    """
    def english(el):
        for n in el.findall("name"):
            if n.get("lang", "en") == "en":
                return n.get("n")
        return None

    tree = {}

    def walk(el, parent):
        name = english(el)
        if name:
            tree[name] = parent
        for child in el.findall("custom"):
            walk(child, name or parent)

    for top in parse(path).findall("custom"):
        walk(top, None)
    return tree


def point(value, *, default_verse=1):
    """"20:18" -> (20, 18); "20" -> (20, default_verse)."""
    if value is None:
        return None
    text = value.strip()
    if ":" in text:
        chapter, verse = text.split(":", 1)
        return int(chapter), int(verse)
    return int(text), default_verse


def book_of(element, inherited=None):
    """`book` as this element sees it: its own, else the ancestor's."""
    return element.get("book") or inherited


def span_ref(element, book):
    """A span (or any element carrying from/to) as a reference dict.

    `to` absent means the single verse `from` names.
    """
    start = point(element.get("from"))
    if start is None:
        raise ValueError(f"<{element.tag}> has no 'from'")
    end = point(element.get("to"), default_verse=start[1]) if element.get("to") else start
    return {"book": book, "fromCh": start[0], "fromV": start[1],
            "toCh": end[0], "toV": end[1]}


def span_ref_from(from_value, to_value=None):
    """("20:18", "20:42") -> (20, 18, 20, 42); `to` absent is a single verse."""
    start = point(from_value)
    end = point(to_value, default_verse=start[1]) if to_value else start
    return start[0], start[1], end[0], end[1]


def spans_of(element, inherited_book=None):
    """Every <span> under this element, as reference dicts."""
    book = book_of(element, inherited_book)
    return [span_ref(s, book_of(s, book)) for s in element.findall("span")]


def custom_names(element):
    """`n` as a list. Comma-separated: two custom names contain a space."""
    raw = element.get("n") or "Common"
    return [name.strip() for name in raw.split(",") if name.strip()]


def reads_of(element):
    """None (reads what its spans say), 'inherit' (note only), or 'none'."""
    return element.get("reads")


def comment_of(element):
    """The <comment> child's text, whitespace collapsed; '' when there is none."""
    node = element.find("comment")
    if node is None:
        return ""
    return " ".join("".join(node.itertext()).split())


def sources_of(element):
    """`sources` as a list of work names."""
    return [s.strip() for s in (element.get("sources") or "").split(",") if s.strip()]


def note_of(element):
    """What this element records beyond its reading, or None."""
    sources, comment = sources_of(element), comment_of(element)
    if not sources and not comment:
        return None
    note = {}
    if sources:
        note["sources"] = sources
    if comment:
        note["comment"] = comment
    return note


def variants_of(element):
    """<variant> children: readings recorded beside the custom's own.

    Never resolved to -- taking one would overwrite the reading it sits
    beside, which is how Ashkenaz once acquired the Vayeilech variant.
    """
    return element.findall("variant")


# ── Special readings: the old composite names ────────────────────────────────
# `<reading n="shabbosAdditionalHaftarah">` became
# `<haftarah when="shabbos" role="additional">`. The twenty old names and the
# twenty new combinations correspond exactly, so the rest of the generator can
# go on speaking the names it already uses.
_LEGACY_NAMES = {
    # (tag, when, role, n) -> the name <reading n="..."> used to carry.
    # Twenty combinations, twenty old names; the old spelling was not
    # consistent about where the role sat ("shabbosAdditionalHaftarah" but
    # "afternoonTorahPart1"), so it is written out rather than assembled.
    ("torah",    None,        None,               None): "torah",
    ("torah",    None,        None,               "3"): "torah3",
    ("torah",    None,        None,               "4"): "torah4",
    ("torah",    None,        None,               "6"): "torah6",
    ("torah",    None,        "chassanBereishis", None): "chassanBereishis",
    ("torah",    None,        "day1Cohen",        None): "day1Cohen",
    ("torah",    None,        "korbanot",         None): "korbanot",
    ("torah",    "shabbos",   None,               None): "shabbosTorah",
    ("torah",    "afternoon", None,               None): "afternoonTorah",
    ("torah",    "afternoon", "part1",            None): "afternoonTorahPart1",
    ("maftir",   None,        None,               None): "maftir",
    ("maftir",   None,        "end",              None): "maftirEnd",
    ("haftarah", None,        None,               None): "haftarah",
    ("haftarah", "shabbos",   None,               None): "shabbosHaftarah",
    ("haftarah", "shabbos",   None,               "1"): "shabbos1Haftarah",
    ("haftarah", "shabbos",   None,               "2"): "shabbos2Haftarah",
    ("haftarah", "shabbos",   "additional",       None): "shabbosAdditionalHaftarah",
    ("haftarah", "afternoon", None,               None): "afternoonHaftarah",
    ("haftarah", "afternoon", "default",          None): "defaultAfternoonHaftarah",
    ("haftarah", "afternoon", "exceptions",       None): "afternoonHaftarahExceptions",
}


def legacy_reading_name(element):
    """The name `<reading n=...>` used to carry for this element.

    Raises on a combination upstream has invented since: silently inventing a
    name here would drop the reading from everything keyed on these names.
    """
    key = (element.tag, element.get("when"), element.get("role"), element.get("n"))
    try:
        return _LEGACY_NAMES[key]
    except KeyError:
        raise SystemExit(
            f"unknown special reading {key} in SpecialReadings.xml: upstream "
            f"has added a combination this generator does not know.") from None


def is_partial(element):
    """True when the custom map need not cover everyone (old full="false")."""
    return element.get("partial") == "true"


def parse(path):
    return ET.parse(path).getroot()
