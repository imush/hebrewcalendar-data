#!/usr/bin/env python3
"""Validate schedules/special_haftarot.json against schema + invariants."""
import json, sys
from pathlib import Path
try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)

ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema"    / "special_haftarot.schema.json").read_text())
data   = json.loads((ROOT / "schedules" / "special_haftarot.json").read_text())

# Derived from names/customs.json, and substituted into the schema, so a new
# custom cannot leave either behind.
EXPOSED = set(json.loads((ROOT / "names" / "customs.json").read_text()))
SOURCES = set(json.loads((ROOT / "names" / "reading_sources.json").read_text()))

def _with_customs(node):
    if isinstance(node, dict):
        return {("^(" + "|".join(sorted(EXPOSED)) + ")$" if k == "^(CUSTOMS)$" else k):
                _with_customs(v) for k, v in node.items()}
    if isinstance(node, list):
        return [_with_customs(v) for v in node]
    return node

jsonschema.validate(data, _with_customs(schema))
NACH_BOOKS = {
    "Joshua","Judges","I Samuel","II Samuel","I Kings","II Kings",
    "Isaiah","Jeremiah","Ezekiel","Hosea","Joel","Amos","Obadiah",
    "Jonah","Micah","Nahum","Habakkuk","Zephaniah","Haggai",
    "Zechariah","Malachi",
}

n_variants = 0
def check_refs(where, refs):
    for i, r in enumerate(refs):
        if r["book"] not in NACH_BOOKS:
            raise SystemExit(f"{where}[{i}]: unknown book {r['book']}")
        if (r["fromCh"], r["fromV"]) > (r["toCh"], r["toV"]):
            raise SystemExit(f"{where}[{i}]: reversed range {r}")

n_annotated = n_variant_readings = 0
for occ, variants in data.items():
    for v, entry in variants.items():
        n_variants += 1
        for cn, refs in entry["readings"].items():
            check_refs(f"{occ}/{v}/{cn}", refs)
        for cn, a in entry.get("annotations", {}).items():
            n_annotated += 1
            for key in a.get("sources", []):
                if key not in SOURCES:
                    raise SystemExit(f"{occ}/{v}/{cn}: unknown source {key!r}")
        for cn, vs in entry.get("variants", {}).items():
            for var in vs:
                n_variant_readings += 1
                check_refs(f"{occ}/{v}/{cn} variant {var['n']}", var["refs"])
                for key in var.get("sources", []):
                    if key not in SOURCES:
                        raise SystemExit(f"{occ}/{v}/{cn} variant: unknown source {key!r}")

print(f"OK  special_haftarot.json  ({len(data)} occasions, {n_variants} readings, "
      f"{n_annotated} annotations, {n_variant_readings} variant readings)")
