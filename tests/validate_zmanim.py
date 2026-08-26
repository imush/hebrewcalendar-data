#!/usr/bin/env python3
"""Validate names/zmanim.json."""
import json, sys
from pathlib import Path
try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)
ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema" / "zmanim.schema.json").read_text())
data   = json.loads((ROOT / "names"  / "zmanim.json").read_text())
jsonschema.validate(data, schema)
print(f"OK  zmanim.json  ({len(data)} entries × 4 langs)")
