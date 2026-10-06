#!/usr/bin/env python3
"""Is what we vendored still what opentorah says? Needs the network.

    python3 tests/check_upstream_current.py            # against master
    python3 tests/check_upstream_current.py --quiet    # print only if drifted

Exit 0 when in sync, 1 when upstream has moved under us. Meant for a periodic
job: upstream changes silently as far as we are concerned, and the first
symptom otherwise is a reading that disagrees with theirs.
"""
import json
import shutil
import subprocess
import sys
import urllib.request
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
VENDOR = ROOT / "vendor" / "opentorah"
STAMP = json.loads((VENDOR / "UPSTREAM.json").read_text(encoding="utf-8"))

RAW = ("https://raw.githubusercontent.com/opentorah/opentorah/master/"
       "texts/src/main/resources/org/opentorah/texts/tanach/")
quiet = "--quiet" in sys.argv


def fetch(name):
    # curl where it exists: some Python builds here have no CA bundle
    if shutil.which("curl"):
        done = subprocess.run(["curl", "-sSfL", "--max-time", "30", RAW + name],
                              capture_output=True)
        if done.returncode != 0:
            raise RuntimeError(done.stderr.decode(errors="replace").strip() or "curl failed")
        return done.stdout
    with urllib.request.urlopen(RAW + name, timeout=30) as r:
        return r.read()


def main():
    drifted, failed = [], []
    for name in STAMP["files"]:
        try:
            upstream = fetch(name)
        except Exception as e:  # a fetch failure is not a drift
            failed.append(f"{name}: {e}")
            continue
        if (VENDOR / name).read_bytes() != upstream:
            drifted.append(name)

    if failed:
        print("COULD NOT CHECK: " + "; ".join(failed))
        return 0 if not drifted else 1

    if not drifted:
        if not quiet:
            print(f"OK  vendored opentorah is current "
                  f"({len(STAMP['files'])} files, from {STAMP['commit'][:8]})")
        return 0

    print(f"DRIFT  opentorah has changed since {STAMP['commit'][:8]} "
          f"(vendored {STAMP['vendored']}):")
    for name in drifted:
        print(f"  {name}")
    print("\nTo take the change:")
    print("  python3 codegen/vendor_opentorah.py <path to opentorah checkout>")
    print("  ./generate.sh          # and read the diff to the tables")
    return 1


if __name__ == "__main__":
    sys.exit(main())
