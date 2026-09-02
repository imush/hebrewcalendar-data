#!/usr/bin/env python3
"""Validate schedules/haftarot.json against its schema + invariants.

Invariants beyond the schema:
- Every parsha key must exist in names/parshiyot.json.
- Every referenced book name is one of the recognised Nach books.
- Every parsha declares every exposed custom; every reference range
  runs strictly forward (fromCh, fromV) ≤ (toCh, toV).
"""
import json, sys
from pathlib import Path
try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)

ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema"    / "haftarot.schema.json").read_text())
data   = json.loads((ROOT / "schedules" / "haftarot.json").read_text())
parshiyot = json.loads((ROOT / "names"  / "parshiyot.json").read_text())

# Derived from names/customs.json so adding a custom cannot silently leave
# this check behind -- including in the schema, whose custom pattern is built
# here rather than written out, so the two cannot drift.
EXPOSED = set(json.loads((ROOT / "names" / "customs.json").read_text()))

def _with_customs(node):
    """Replace the placeholder custom pattern with the customs we declare."""
    if isinstance(node, dict):
        return {("^(" + "|".join(sorted(EXPOSED)) + ")$" if k == "^(CUSTOMS)$" else k):
                _with_customs(v) for k, v in node.items()}
    if isinstance(node, list):
        return [_with_customs(v) for v in node]
    return node

schema = _with_customs(schema)
jsonschema.validate(data, schema)
NACH_BOOKS = {
    "Joshua", "Judges", "I Samuel", "II Samuel", "I Kings", "II Kings",
    "Isaiah", "Jeremiah", "Ezekiel", "Hosea", "Joel", "Amos", "Obadiah",
    "Jonah", "Micah", "Nahum", "Habakkuk", "Zephaniah", "Haggai",
    "Zechariah", "Malachi",
}

known_parshiyot = set(parshiyot)

for pkey, by_custom in data.items():
    if pkey not in known_parshiyot:
        raise SystemExit(f"unknown parsha key: {pkey}")
    missing = EXPOSED - set(by_custom.keys())
    if missing:
        raise SystemExit(f"{pkey} missing customs: {sorted(missing)}")
    for cname, refs in by_custom.items():
        for i, r in enumerate(refs):
            if r["book"] not in NACH_BOOKS:
                raise SystemExit(f"{pkey}/{cname}[{i}]: unknown book {r['book']}")
            if (r["fromCh"], r["fromV"]) > (r["toCh"], r["toV"]):
                raise SystemExit(f"{pkey}/{cname}[{i}]: reversed range {r}")

print(f"OK  haftarot.json  ({len(data)} parshiyot × {len(EXPOSED)} customs)")
