#!/usr/bin/env python3
"""Parse vendor/opentorah/ReadingSources.xml → names/reading_sources.json.

The works the readings are attested in. Entries in haftarot.json and
special_haftarot.json name them by key under "sources"; this is what those
keys mean.
"""
import json
from collections import OrderedDict
from pathlib import Path
from xml.etree import ElementTree as ET

ROOT = Path(__file__).resolve().parent.parent
XML = ROOT / "vendor" / "opentorah" / "ReadingSources.xml"
OUT = ROOT / "names" / "reading_sources.json"

KINDS = {"chumash", "siddur", "halachah", "study", "website", "reconstruction"}


def main():
    root = ET.parse(XML).getroot()
    out = OrderedDict()
    for s in root.findall("source"):
        key = s.get("n")
        kind = s.get("kind")
        if kind not in KINDS:
            raise SystemExit(f"unknown source kind {kind!r} for {key!r}")
        entry = OrderedDict(kind=kind, name=s.get("name"))
        for attr in ("publication", "where", "url"):
            if s.get(attr):
                entry[attr] = s.get(attr)
        if s.get("combines"):
            entry["combines"] = [c.strip() for c in s.get("combines").split(",") if c.strip()]
        out[key] = entry

    for key, entry in out.items():
        for c in entry.get("combines", []):
            if c not in out:
                raise SystemExit(f"source {key!r} combines {c!r}, which is not a source")

    OUT.write_text(json.dumps(out, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(f"OK  {OUT.name}: {len(out)} sources")


if __name__ == "__main__":
    main()
