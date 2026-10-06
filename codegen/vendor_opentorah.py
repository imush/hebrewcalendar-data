#!/usr/bin/env python3
"""Refresh vendor/opentorah/ from an opentorah checkout, then regenerate.

    python3 codegen/vendor_opentorah.py ~/IdeaProjects/opentorah

This is the one way to take an upstream change. It copies the files we
depend on, records which upstream commit they came from, and leaves the
regeneration to generate.sh so the diff shows both what upstream changed
and what that did to our tables.

Nothing here edits the vendored files: they are a verbatim copy, so a
re-vendor never has to be reconciled by hand. Corrections we make on top
live in the parsers.
"""
import json
import subprocess
import sys
from datetime import datetime, timezone
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
VENDOR = ROOT / "vendor" / "opentorah"
STAMP = VENDOR / "UPSTREAM.json"

# what we read, and which parser reads it
FILES = {
    "Haftarah.xml": "parse_opentorah_haftarot",
    "SpecialReadings.xml": "parse_opentorah_special_haftarot",
    "ReadingSources.xml": "parse_opentorah_sources",
    "Custom.xml": "custom names",
    "CustomTree.xml": "the custom tree",
    "Genesis.xml": "parse_opentorah_chumash",
    "Exodus.xml": "parse_opentorah_chumash",
    "Leviticus.xml": "parse_opentorah_chumash",
    "Numbers.xml": "parse_opentorah_chumash",
    "Deuteronomy.xml": "parse_opentorah_chumash",
    "Tanach.xml": "book names",
}

SUBDIR = Path("texts/src/main/resources/org/opentorah/texts/tanach")


def main():
    if len(sys.argv) != 2:
        raise SystemExit(f"usage: {sys.argv[0]} <path to opentorah checkout>")
    src = Path(sys.argv[1]).expanduser().resolve()
    if not (src / SUBDIR).is_dir():
        raise SystemExit(f"not an opentorah checkout: {src}")

    head = subprocess.run(["git", "-C", str(src), "rev-parse", "HEAD"],
                          capture_output=True, text=True, check=True).stdout.strip()
    dirty = subprocess.run(["git", "-C", str(src), "status", "--porcelain"],
                           capture_output=True, text=True, check=True).stdout.strip()
    if dirty:
        raise SystemExit(
            "the opentorah checkout has uncommitted changes; vendor a commit, "
            "not a working tree, so UPSTREAM.json means something")

    changed = []
    for name in FILES:
        source = src / SUBDIR / name
        if not source.is_file():
            raise SystemExit(f"upstream no longer has {name} -- has it moved?")
        target = VENDOR / name
        new = source.read_bytes()
        if not target.is_file() or target.read_bytes() != new:
            target.write_bytes(new)
            changed.append(name)

    STAMP.write_text(json.dumps({
        "repository": "https://github.com/opentorah/opentorah",
        "commit": head,
        "vendored": datetime.now(timezone.utc).strftime("%Y-%m-%d"),
        "files": sorted(FILES),
    }, indent=2) + "\n", encoding="utf-8")

    print(f"vendored opentorah {head[:8]}")
    print("  changed: " + (", ".join(changed) if changed else "nothing"))
    print("  now run ./generate.sh and read the diff")


if __name__ == "__main__":
    main()
