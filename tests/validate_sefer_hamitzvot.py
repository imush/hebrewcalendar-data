#!/usr/bin/env python3
"""Validate schedules/sefer_hamitzvot.json."""
import json, sys
from pathlib import Path
try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)

ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema" / "sefer_hamitzvot.schema.json").read_text())
data   = json.loads((ROOT / "schedules" / "sefer_hamitzvot.json").read_text())
jsonschema.validate(data, schema)
assert len(data["readings"]) == 339, f"expected 339 readings, got {len(data['readings'])}"
print(f"OK  sefer_hamitzvot.json  (339 daily readings)")
