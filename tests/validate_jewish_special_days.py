#!/usr/bin/env python3
"""Validate names/jewish_special_days.json + enums/hc_special_days.json — every SD
belongs to exactly one holiday category (except NONE), no orphans, no
duplicates. Adding a new SD to hc_special_days.json fails CI until it's
classified in jewish_special_days.json.
"""
import json, sys
from pathlib import Path
try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)

ROOT     = Path(__file__).resolve().parent.parent
schema   = json.loads((ROOT / "schema" / "jewish_special_days.schema.json").read_text())
jewish_special_days = json.loads((ROOT / "names"  / "jewish_special_days.json").read_text())
sds_data = json.loads((ROOT / "enums"  / "hc_special_days.json").read_text())

jsonschema.validate(jewish_special_days, schema)

all_sds = set(sds_data["sds"])
if "NONE" not in all_sds:
    raise SystemExit("enum must include NONE at index 0")

# NONE is intentionally NOT in any category (empty display string).
expected = all_sds - {"NONE"}

# Collect every referenced SD; check for duplicates + orphans.
seen = {}
for cat, entry in jewish_special_days.items():
    for sd in entry["sd"]:
        if sd in seen:
            raise SystemExit(f"SD {sd!r} appears in both {seen[sd]!r} and {cat!r}")
        seen[sd] = cat
    unknown = set(entry["sd"]) - all_sds
    if unknown:
        raise SystemExit(f"category {cat!r} references unknown SDs: {sorted(unknown)}")

missing = expected - set(seen)
if missing:
    raise SystemExit(f"unclassified SDs (no holiday category): {sorted(missing)}")

print(f"OK  jewish_special_days.json  ({len(jewish_special_days)} categories covering {len(seen)}/{len(expected)} SDs)")
