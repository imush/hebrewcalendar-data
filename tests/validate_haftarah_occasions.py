#!/usr/bin/env python3
"""Validate enums/hc_haftarah_occasions.json against every hand-written copy.

The occasion enum is declared four times: the C header (which owns the ABI),
this JSON mirror, the Dart enum in the app's FFI bindings, and the Java enum in
the hebrewcalendar library. Dart cannot import a C enum -- dart:ffi maps the
struct field as Int32 -- and the Java library is a separate artifact, so the
copies are unavoidable. What is avoidable is silent drift: the Java enum had
SIMCHAT_TORAH and YOM_KIPPUR_AFTERNOON in different slots than C for some time,
which went unnoticed because the two were only ever compared by reading.

The C header is the source of truth. Whichever copies are reachable from this
checkout are compared against it; the rest are skipped, so this runs the same
whether the data repo sits inside the app, inside the Java library, or alone.
"""
import json
import pathlib
import re
import sys

ROOT = pathlib.Path(__file__).resolve().parent.parent
PREFIX = "HC_HAFT_OCC_"

errors: list[str] = []
checked: list[str] = []


def c_order(header: pathlib.Path) -> list[str]:
    """Enumerator names in declaration order, comments and COUNT stripped."""
    text = header.read_text()
    body = text.split("typedef enum hc_haftarah_occasion {")[1]
    body = body.split("} hc_haftarah_occasion")[0]
    names = []
    for line in body.split("\n"):
        line = re.sub(r"/\*.*?\*/", "", line)          # inline /* ... */
        for tok in re.findall(PREFIX + r"[A-Z0-9_]+", line):
            name = tok[len(PREFIX):]
            if name != "COUNT":
                names.append(name)
    return names


def compare(label: str, actual: list[str], expected: list[str]) -> None:
    checked.append(label)
    if actual == expected:
        return
    for i in range(max(len(actual), len(expected))):
        a = actual[i] if i < len(actual) else "<missing>"
        e = expected[i] if i < len(expected) else "<missing>"
        if a != e:
            errors.append(f"{label}: slot {i} is {a!r}, expected {e!r}")
    if len(actual) != len(expected):
        errors.append(f"{label}: has {len(actual)} values, expected {len(expected)}")


def screaming(dart_or_java: str) -> str:
    """`shabbatShuvah` / `SHABBAT_SHUVAH` -> `SHABBAT_SHUVAH`."""
    if dart_or_java.isupper() or "_" in dart_or_java:
        return dart_or_java
    s = re.sub(r"(?<!^)(?=[A-Z0-9])", "_", dart_or_java).upper()
    # chanukahShabbat1 -> CHANUKAH_SHABBAT_1, not CHANUKAH_SHABBAT1
    return re.sub(r"_?(\d+)$", r"_\1", s).replace("__", "_")


# ── the JSON mirror, against the C header ────────────────────────────────────
data = json.loads((ROOT / "enums" / "hc_haftarah_occasions.json").read_text())
expected = data["occasions"]

header = ROOT / ".." / "src" / "hc_haftarah.h"
if header.is_file():
    compare("C header", c_order(header), expected)
else:
    print("  skip: C header not in this checkout")

if len(set(expected)) != len(expected):
    errors.append("JSON: duplicate occasion names")

# ── the Dart copy ────────────────────────────────────────────────────────────
dart = ROOT / ".." / ".." / ".." / "lib" / "ffi" / "bindings.dart"
if dart.is_file():
    text = dart.read_text()
    if "enum HaftarahOccasion {" in text:
        body = text.split("enum HaftarahOccasion {")[1].split("}")[0]
        body = body.split(";")[0]                       # stop at the members' end
        names = [screaming(v.strip().rstrip(","))
                 for v in body.split("\n")
                 if v.strip() and not v.strip().startswith("//")]
        compare("Dart HaftarahOccasion", names, expected)
else:
    print("  skip: Dart bindings not in this checkout")

# ── the Java copy ────────────────────────────────────────────────────────────
java = ROOT / ".." / "src" / "net" / "hebrewcalendar" / "learning" / "Haftarah.java"
if not java.is_file():                                   # data repo inside the Java library
    java = ROOT / ".." / "src" / "net" / "hebrewcalendar" / "learning" / "Haftarah.java"
if java.is_file():
    text = java.read_text()
    body = text.split("public enum Occasion {")[1].split("}")[0]
    names = [v.strip().rstrip(",") for v in body.split("\n")
             if v.strip() and not v.strip().startswith("//")]
    compare("Java Occasion", names, expected)
else:
    print("  skip: Java Haftarah.java not in this checkout")

if errors:
    print("hc_haftarah_occasions: FAILED")
    for e in errors:
        print("  " + e)
    sys.exit(1)

print(f"hc_haftarah_occasions: OK ({len(expected)} occasions; "
      f"checked {', '.join(checked) if checked else 'nothing reachable'})")
