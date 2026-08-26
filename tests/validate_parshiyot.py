#!/usr/bin/env python3
"""Validate names/parshiyot.json against its schema and check invariants
that a schema can't express (expected count, no orphaned duplicates).
"""
import json
import sys
from pathlib import Path

try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr)
    sys.exit(2)

ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema" / "parshiyot.schema.json").read_text())
data   = json.loads((ROOT / "names"  / "parshiyot.json").read_text())

jsonschema.validate(data, schema)

# 54 parshiyot: 53 weekly + Vezot Haberakhah (Simchat Torah).
assert len(data) == 54, f"expected 54 parshiyot, got {len(data)}"

# Every language value must be unique — a duplicate signals a typo, since
# each parsha has a distinct name in every language we translate to.
for lang in ("en", "he", "ru", "fr"):
    values = [entry[lang] for entry in data.values()]
    dupes  = {v for v in values if values.count(v) > 1}
    if dupes:
        raise SystemExit(f"duplicate {lang} translations: {sorted(dupes)}")

print(f"OK  parshiyot.json  ({len(data)} entries × 4 langs)")
