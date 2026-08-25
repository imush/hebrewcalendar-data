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
