#!/usr/bin/env python3
"""Validate schedules/haftarot.json against its schema + invariants.

Invariants beyond the schema:
- Every parsha key must exist in names/parshiyot.json.
- Every referenced book name is one of the recognised Nach books.
- Every parsha declares all 5 exposed customs; every reference range
  runs strictly forward (fromCh, fromV) ≤ (toCh, toV).
"""
import json, sys
from pathlib import Path
try:
    import jsonschema
except ImportError:
    print("jsonschema not installed", file=sys.stderr); sys.exit(2)

ROOT   = Path(__file__).resolve().parent.parent
schema = json.loads((ROOT / "schema"    / "haftarot.schema.json").read_text())
data   = json.loads((ROOT / "schedules" / "haftarot.json").read_text())
parshiyot = json.loads((ROOT / "names"  / "parshiyot.json").read_text())

jsonschema.validate(data, schema)

EXPOSED = {"ASHKENAZ","ITALKI","FRANKFURT","LITA","CHAYEY_ODOM","HAGRA","SEFARD","CHABAD","MAGREB","ALGERIA","MOROCCO","FES","TOSHBIM","DJERBA","BAVLIM","TEIMAN","BALADI","SHAMI"}
NACH_BOOKS = {
    "Joshua", "Judges", "I Samuel", "II Samuel", "I Kings", "II Kings",
    "Isaiah", "Jeremiah", "Ezekiel", "Hosea", "Joel", "Amos", "Obadiah",
    "Jonah", "Micah", "Nahum", "Habakkuk", "Zephaniah", "Haggai",
    "Zechariah", "Malachi",
}

known_parshiyot = set(parshiyot)

for pkey, by_custom in data.items():
    if pkey not in known_parshiyot:
        raise SystemExit(f"unknown parsha key: {pkey}")
    missing = EXPOSED - set(by_custom.keys())
    if missing:
        raise SystemExit(f"{pkey} missing customs: {sorted(missing)}")
    for cname, refs in by_custom.items():
        for i, r in enumerate(refs):
            if r["book"] not in NACH_BOOKS:
                raise SystemExit(f"{pkey}/{cname}[{i}]: unknown book {r['book']}")
            if (r["fromCh"], r["fromV"]) > (r["toCh"], r["toV"]):
                raise SystemExit(f"{pkey}/{cname}[{i}]: reversed range {r}")

print(f"OK  haftarot.json  ({len(data)} parshiyot × {len(EXPOSED)} customs)")
