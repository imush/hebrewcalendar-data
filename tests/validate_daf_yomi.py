#!/usr/bin/env python3
"""Validate schedules/daf_yomi.json against schema + invariants."""
import json, sys
from pathlib import Path
try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)

ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema" / "daf_yomi.schema.json").read_text())
data   = json.loads((ROOT / "schedules" / "daf_yomi.json").read_text())

jsonschema.validate(data, schema)
tractates = data["tractates"]
assert len(tractates) == 40, f"expected 40 tractates, got {len(tractates)}"

# Cycle-length sanity: sum of (lastDaf - 1) across all tractates must equal
# newCycleDays. Also verify old cycle sums correctly if we substitute Shekalim.
def sum_days(use_old_shekalim: bool) -> int:
    total = 0
    for t in tractates:
        if t["key"] == "SHEKALIM" and use_old_shekalim:
            total += t["oldLastDaf"] - 1
        else:
            total += t["lastDaf"] - 1
    return total

expected_new = data["cycle"]["newCycleDays"]
expected_old = data["cycle"]["oldCycleDays"]
if sum_days(False) != expected_new:
    raise SystemExit(f"new-cycle sum mismatch: {sum_days(False)} vs {expected_new}")
if sum_days(True) != expected_old:
    raise SystemExit(f"old-cycle sum mismatch: {sum_days(True)} vs {expected_old}")

print(f"OK  daf_yomi.json  (40 tractates, cycle sums match)")
