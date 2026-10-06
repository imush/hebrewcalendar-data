"""Shared helpers for codegen scripts."""
from pathlib import Path
import json

ROOT = Path(__file__).resolve().parent.parent

def load(rel: str):
    return json.loads((ROOT / rel).read_text(encoding="utf-8"))

def tanya_key(leap: bool, month: int, day: int) -> int:
    """Compact stable key matching the Java library's scheme."""
    return (1000 if leap else 0) + month * 40 + day

BANNER = (
    "// GENERATED FILE — DO NOT EDIT.\n"
    "// Source: hebrewcalendar-data — regenerate with ./generate.sh\n"
)

# opentorah writes the paired books "I Samuel"; names/tanach_books.json calls
# them "Samuel I", the way a reader looking one up would say it, and every
# consumer resolves a citation by that name. One spelling wins, and it is that
# one -- the other resolves to nothing, which is not an error anywhere, just a
# citation that silently loses its Hebrew and keeps the wrong word order.
PAIRED_BOOKS = {
    "I Samuel": "Samuel I", "II Samuel": "Samuel II",
    "I Kings":  "Kings I",  "II Kings":  "Kings II",
}


def book_name(name: str) -> str:
    """The name a book is looked up by."""
    return PAIRED_BOOKS.get(name, name)
