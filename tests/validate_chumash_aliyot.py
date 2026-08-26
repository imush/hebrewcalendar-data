#!/usr/bin/env python3
"""Validate schedules/chumash_aliyot.json against schema + invariants."""
import json, sys
from pathlib import Path
try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)

ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema"    / "chumash_aliyot.schema.json").read_text())
data   = json.loads((ROOT / "schedules" / "chumash_aliyot.json").read_text())
parshiyot = json.loads((ROOT / "names"  / "parshiyot.json").read_text())

jsonschema.validate(data, schema)

# Every parsha key referenced must exist in parshiyot.json.
known = set(parshiyot)
for r in data["readings"]:
    for p in r["parshiyot"]:
        if p not in known:
            raise SystemExit(f"unknown parsha key in reading {r['id']}: {p}")
    if not r["parshiyot"]:
        raise SystemExit(f"reading {r['id']} has no parshiyot")

# All parsha keys must appear in at least one reading (including VEZOT_HABRACHA,
# which has its own reading id and is a first-class Parsha value).
covered = set()
for r in data["readings"]:
    for p in r["parshiyot"]: covered.add(p)
missing = known - covered
if missing:
    raise SystemExit(f"parshiyot missing from chumash_aliyot: {sorted(missing)}")

print(f"OK  chumash_aliyot.json  ({len(data['readings'])} readings, {len(covered)}/{len(known)} parshiyot covered)")
