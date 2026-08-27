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

jsonschema.validate(data, schema)

EXPOSED = {"ASHKENAZ","ITALKI","FRANKFURT","LITA","CHAYEY_ODOM","HAGRA","SEFARD","CHABAD","MAGREB","ALGERIA","MOROCCO","FES","TOSHBIM","DJERBA","BAVLIM","TEIMAN","BALADI","SHAMI"}
NACH_BOOKS = {
    "Joshua","Judges","I Samuel","II Samuel","I Kings","II Kings",
    "Isaiah","Jeremiah","Ezekiel","Hosea","Joel","Amos","Obadiah",
    "Jonah","Micah","Nahum","Habakkuk","Zephaniah","Haggai",
    "Zechariah","Malachi",
}

n_variants = 0
for occ, variants in data.items():
    for v, byc in variants.items():
        n_variants += 1
        for cn, refs in byc.items():
            for i, r in enumerate(refs):
                if r["book"] not in NACH_BOOKS:
                    raise SystemExit(f"{occ}/{v}/{cn}[{i}]: unknown book {r['book']}")
                if (r["fromCh"], r["fromV"]) > (r["toCh"], r["toV"]):
                    raise SystemExit(f"{occ}/{v}/{cn}[{i}]: reversed range {r}")

print(f"OK  special_haftarot.json  ({len(data)} occasions, {n_variants} variants)")
