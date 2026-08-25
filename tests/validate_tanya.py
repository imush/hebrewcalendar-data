#!/usr/bin/env python3
"""Validate schedules/tanya.json against its schema and cross-check invariants.

The schema catches type/enum errors; the invariants below catch semantic
gaps that a schema can't express (missing days, duplicate keys, expected
row counts per partition).
"""
import json
import sys
from pathlib import Path

try:
    import jsonschema
except ImportError:
    print("jsonschema not installed; install with: pip install jsonschema", file=sys.stderr)
    sys.exit(2)

ROOT = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema" / "tanya.schema.json").read_text())
data = json.loads((ROOT / "schedules" / "tanya.json").read_text())

jsonschema.validate(data, schema)

# Every (leap, month, day) combination must appear exactly once.
seen = {}
for e in data:
    key = (e["leap"], e["month"], e["day"])
    if key in seen:
        raise SystemExit(f"duplicate entry: {key}")
    seen[key] = e

# Expected partition sizes match the Kehot printed schedule.
leap_count = sum(1 for e in data if e["leap"])
nonleap_count = sum(1 for e in data if not e["leap"])
assert leap_count == 385, f"leap partition should be 385 rows, got {leap_count}"
assert nonleap_count == 355, f"non-leap partition should be 355 rows, got {nonleap_count}"

print(f"OK  tanya.json  ({len(data)} entries, leap={leap_count}, non-leap={nonleap_count})")
