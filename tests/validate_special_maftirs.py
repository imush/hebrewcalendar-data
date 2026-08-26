#!/usr/bin/env python3
"""Validate names/special_maftirs.json against schema + invariants."""
import json, sys
from pathlib import Path

try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)

ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema" / "special_maftirs.schema.json").read_text())
data   = json.loads((ROOT / "names"  / "special_maftirs.json").read_text())

jsonschema.validate(data, schema)
required = {"SHEKALIM", "ZACHOR", "PARA", "HACHODESH"}
missing = required - set(data)
if missing:
    raise SystemExit(f"missing maftir keys: {sorted(missing)}")
print(f"OK  special_maftirs.json  ({len(data)} entries × 4 langs)")
