#!/usr/bin/env python3
"""Validate names/hebrew_year_exceptions.json."""
import json, sys
from pathlib import Path
try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)

ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema" / "hebrew_year_exceptions.schema.json").read_text())
data   = json.loads((ROOT / "names"  / "hebrew_year_exceptions.json").read_text())
jsonschema.validate(data, schema)
entries = {k: v for k, v in data.items() if not k.startswith("$")}
# Sanity: contains the historically known set.
required = {"5670", "5672", "5677", "5679", "5698", "5710", "5751"}
missing = required - set(entries)
if missing:
    raise SystemExit(f"missing year exceptions: {sorted(missing)}")
print(f"OK  hebrew_year_exceptions.json  ({len(entries)} entries)")
