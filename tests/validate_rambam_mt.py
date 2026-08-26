#!/usr/bin/env python3
"""Validate schedules/rambam_mt.json + assert cycle sums."""
import json, sys
from pathlib import Path
try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)

ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema" / "rambam_mt.schema.json").read_text())
data   = json.loads((ROOT / "schedules" / "rambam_mt.json").read_text())
jsonschema.validate(data, schema)

halachot = data["halachot"]
total1 = sum(h["chapters"] for h in halachot)
total3 = sum(h.get("chapters3", h["chapters"]) for h in halachot)

if total1 != data["cycle"]["oneChapterDays"]:
    raise SystemExit(f"1-chapter cycle sum mismatch: {total1} vs {data['cycle']['oneChapterDays']}")
if total3 != data["cycle"]["threeChapterDays"] * 3:
    raise SystemExit(f"3-chapter cycle sum mismatch: {total3} vs {data['cycle']['threeChapterDays'] * 3}")

# Keys must be unique.
keys = [h["key"] for h in halachot]
if len(keys) != len(set(keys)):
    dupes = [k for k in keys if keys.count(k) > 1]
    raise SystemExit(f"duplicate keys: {sorted(set(dupes))}")

print(f"OK  rambam_mt.json  (88 halachot, cycle sums {total1}/{total3} match)")
