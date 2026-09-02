#!/usr/bin/env python3
"""Check that what we vendored, what we declare, and what we generate agree.

Runs offline, in generate.sh. It does not ask whether the vendored files are
current -- check_upstream_current.py does that -- only whether everything here
is consistent with them.
"""
import json
import sys
from pathlib import Path
from xml.etree import ElementTree as ET

ROOT = Path(__file__).resolve().parent.parent
VENDOR = ROOT / "vendor" / "opentorah"
errors = []


def check(condition, message):
    if not condition:
        errors.append(message)


customs = json.loads((ROOT / "names" / "customs.json").read_text(encoding="utf-8"))
sources = json.loads((ROOT / "names" / "reading_sources.json").read_text(encoding="utf-8"))

# 1. our custom tree is upstream's custom tree
tree = {c.get("n"): c.get("parent")
        for c in ET.parse(VENDOR / "CustomTree.xml").getroot().findall("custom")}


def key(name):
    return name.upper().replace(" ", "_").replace("'", "")


for name, parent in tree.items():
    if name == "Common":
        continue
    k = key(name)
    check(k in customs, f"customs.json is missing {k}, which CustomTree.xml has")
    if k in customs:
        want = None if parent in (None, "Common") else key(parent)
        check(customs[k]["parent"] == want,
              f"{k}: we say parent {customs[k]['parent']}, upstream says {want}")
for k in customs:
    check(any(key(n) == k for n in tree), f"we have {k}, which upstream does not")

# 2. every custom named in a reading is one we know
named = set()
for xml in ("Haftarah.xml", "SpecialReadings.xml"):
    for el in ET.parse(VENDOR / xml).getroot().iter():
        if el.tag in ("custom", "annotation", "none") and el.get("n"):
            named |= {n.strip() for n in el.get("n").split(",")}
for name in sorted(named):
    check(name == "Common" or key(name) in customs,
          f"a reading names {name!r}, which is not a custom we have")

# 3. every source a reading cites is one we know
cited = set()
for xml in ("Haftarah.xml", "SpecialReadings.xml"):
    for el in ET.parse(VENDOR / xml).getroot().iter():
        if el.get("sources"):
            cited |= {s.strip() for s in el.get("sources").split(",") if s.strip()}
for s in sorted(cited):
    check(s in sources, f"a reading cites source {s!r}, which reading_sources.json lacks")

# 4. every custom resolves to a reading, or to a deliberate nothing
special = json.loads((ROOT / "schedules" / "special_haftarot.json").read_text(encoding="utf-8"))
for occasion, variants in special.items():
    for variant, entry in variants.items():
        for custom in entry.get("annotations", {}):
            check(custom in customs or custom == "COMMON",
                  f"{occasion}/{variant} annotates {custom}, which is not a custom")

if errors:
    print(f"FAIL  validate_opentorah_sync: {len(errors)} problem(s)")
    for e in errors:
        print(f"  {e}")
    sys.exit(1)
print(f"OK  validate_opentorah_sync: {len(customs)} customs, {len(sources)} sources, "
      f"{len(named)} names and {len(cited)} citations all resolve")
