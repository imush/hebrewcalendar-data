#!/usr/bin/env python3
"""Validate names/hebrew_months.json against schema + invariants."""
import json, sys
from pathlib import Path

try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)

ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema" / "hebrew_months.schema.json").read_text())
data   = json.loads((ROOT / "names"  / "hebrew_months.json").read_text())

jsonschema.validate(data, schema)

required = ["NISAN", "IYAR", "SIVAN", "TAMUZ", "AV", "ELUL",
            "TISHREI", "CHESHVAN", "KISLEV", "TEVET", "SHVAT",
            "ADAR", "ADAR_I", "ADAR_II"]
missing = [k for k in required if k not in data]
if missing:
    raise SystemExit(f"missing month keys: {missing}")

# Every language value must be unique — a duplicate would mean two months
# resolved to the same display name, which is a data error.
for lang in ("en", "he", "ru", "fr"):
    values = [entry[lang] for entry in data.values()]
    dupes  = {v for v in values if values.count(v) > 1}
    if dupes:
        raise SystemExit(f"duplicate {lang} month translations: {sorted(dupes)}")

print(f"OK  hebrew_months.json  ({len(data)} entries × 4 langs)")
