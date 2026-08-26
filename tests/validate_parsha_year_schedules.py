#!/usr/bin/env python3
"""Validate schedules/parsha_year_schedules.json against schema, and
cross-check that every parsha key resolves in names/parshiyot.json and
that the 14 year types have unique dispatch keys.
"""
import json
import sys
from pathlib import Path

try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr)
    sys.exit(2)

ROOT = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema" / "parsha_year_schedules.schema.json").read_text())
data   = json.loads((ROOT / "schedules" / "parsha_year_schedules.json").read_text())
names  = json.loads((ROOT / "names" / "parshiyot.json").read_text())

jsonschema.validate(data, schema)

# Every parsha key referenced must exist in parshiyot.json.
known = set(names)
unknown = set()
for yt in data["yearTypes"]:
    for side in ("israel", "diaspora"):
        for week in yt[side]:
            for p in week:
                if p not in known:
                    unknown.add(p)
if unknown:
    raise SystemExit(f"unknown parsha keys referenced: {sorted(unknown)}")

# Every (rosh, yearLength, pesach, leap) tuple must be unique — this is
# the dispatch key the C library uses to pick a schedule.
keys = {(yt["roshHashanaDow"], yt["yearLength"], yt["pesachDow"], yt["leap"])
        for yt in data["yearTypes"]}
if len(keys) != 14:
    raise SystemExit(f"expected 14 unique dispatch keys, got {len(keys)}")

# The 7 canonical doubling pairs — any double outside this set is a bug.
CANONICAL_PAIRS = {
    ("VAYAKHEL", "PEKUDEI"),
    ("TAZRIA", "METZORA"),
    ("ACHAREI_MOT", "KEDOSHIM"),
    ("BEHAR", "BECHUKOTAI"),
    ("CHUKAT", "BALAK"),
    ("MATOT", "MASEI"),
    ("NITZAVIM", "VAYEILECH"),
}
for yt in data["yearTypes"]:
    for side in ("israel", "diaspora"):
        for i, week in enumerate(yt[side]):
            if len(week) == 2 and tuple(week) not in CANONICAL_PAIRS:
                raise SystemExit(
                    f"non-canonical doubling in {yt['id']} {side} week {i}: {week}"
                )

print(f"OK  parsha_year_schedules.json  ({len(data['yearTypes'])} year types)")
