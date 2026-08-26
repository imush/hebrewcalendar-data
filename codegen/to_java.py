#!/usr/bin/env python3
"""Emit Java sources under generated/java/net/hebrewcalendar/data/.

The Java library adds this directory as an additional Maven source
root. Enum values match the JSON keys (SCREAMING_SNAKE_CASE);
consumers access display strings via public final fields (.en/.he/
.ru/.fr) or the parallel getter methods.
"""
from common import ROOT, load, BANNER

JAVA_DIR = ROOT / "generated" / "java" / "net" / "hebrewcalendar" / "data"

JAVA_BANNER = (
    "/*\n"
    " * GENERATED FILE — DO NOT EDIT.\n"
    " * Source: hebrewcalendar-data — regenerate with ./generate.sh\n"
    " */\n"
)


def java_str(s: str) -> str:
    """Java string literal — escapes \\ and \" ; other chars pass through."""
    return '"' + s.replace("\\", "\\\\").replace('"', r'\"') + '"'


def emit_translated_enum(class_name: str, source: str, javadoc: str) -> str:
    """Emit a simple 4-lang name enum.

    class_name  : Java enum class name (e.g. Parsha, HebrewMonth)
    source      : path under the data repo, e.g. 'names/parshiyot.json'
    javadoc     : one-line summary at the top of the class
    """
    data = load(source)
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", ""]
    lines.append(f"/** {javadoc} */")
    lines.append(f"public enum {class_name} {{")
    items = list(data.items())
    for i, (key, v) in enumerate(items):
        term = "," if i < len(items) - 1 else ";"
        lines.append(
            f"    {key}("
            f"{java_str(key)}, {java_str(v['en'])}, "
            f"{java_str(v['he'])}, {java_str(v['ru'])}, "
            f"{java_str(v['fr'])}){term}"
        )
    lines.append("")
    lines.append("    public final String key;")
    lines.append("    public final String en;")
    lines.append("    public final String he;")
    lines.append("    public final String ru;")
    lines.append("    public final String fr;")
    lines.append("")
    lines.append(f"    {class_name}(String key, String en, String he, String ru, String fr) {{")
    lines.append("        this.key = key;")
    lines.append("        this.en = en;")
    lines.append("        this.he = he;")
    lines.append("        this.ru = ru;")
    lines.append("        this.fr = fr;")
    lines.append("    }")
    lines.append("}")
    return "\n".join(lines) + "\n"


def emit_parsha() -> str:
    return emit_translated_enum(
        "Parsha", "names/parshiyot.json",
        "The 53 weekly Torah portions, in reading-cycle order. Enum name matches the JSON key (SCREAMING_SNAKE_CASE)."
    )


def emit_hebrew_month() -> str:
    """HebrewMonth enum with translations + a helper for (month, leap) lookup."""
    data = load("names/hebrew_months.json")
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", ""]
    lines.append("/** Hebrew months plus Adar I / Adar II leap variants. Use {@link #forMonth}")
    lines.append(" *  to resolve from the (month, leap) tuple the calendar layer uses. */")
    lines.append("public enum HebrewMonth {")
    items = list(data.items())
    for i, (key, v) in enumerate(items):
        term = "," if i < len(items) - 1 else ";"
        lines.append(
            f"    {key}("
            f"{java_str(key)}, {java_str(v['en'])}, "
            f"{java_str(v['he'])}, {java_str(v['ru'])}, "
            f"{java_str(v['fr'])}){term}"
        )
    lines.append("")
    lines.append("    public final String key;")
    lines.append("    public final String en;")
    lines.append("    public final String he;")
    lines.append("    public final String ru;")
    lines.append("    public final String fr;")
    lines.append("")
    lines.append("    HebrewMonth(String key, String en, String he, String ru, String fr) {")
    lines.append("        this.key = key;")
    lines.append("        this.en = en;")
    lines.append("        this.he = he;")
    lines.append("        this.ru = ru;")
    lines.append("        this.fr = fr;")
    lines.append("    }")
    lines.append("")
    lines.append("    /** Resolve by 1-based month index. Month 12 in a leap year is Adar I;")
    lines.append("     *  month 13 exists only in leap years. Returns null for out-of-range. */")
    lines.append("    public static HebrewMonth forMonth(int month, boolean leap) {")
    lines.append("        switch (month) {")
    lines.append("            case 1:  return NISAN;")
    lines.append("            case 2:  return IYAR;")
    lines.append("            case 3:  return SIVAN;")
    lines.append("            case 4:  return TAMUZ;")
    lines.append("            case 5:  return AV;")
    lines.append("            case 6:  return ELUL;")
    lines.append("            case 7:  return TISHREI;")
    lines.append("            case 8:  return CHESHVAN;")
    lines.append("            case 9:  return KISLEV;")
    lines.append("            case 10: return TEVET;")
    lines.append("            case 11: return SHVAT;")
    lines.append("            case 12: return leap ? ADAR_I : ADAR;")
    lines.append("            case 13: return leap ? ADAR_II : null;")
    lines.append("            default: return null;")
    lines.append("        }")
    lines.append("    }")
    lines.append("}")
    return "\n".join(lines) + "\n"


def main():
    JAVA_DIR.mkdir(parents=True, exist_ok=True)
    (JAVA_DIR / "Parsha.java").write_text(emit_parsha(), encoding="utf-8")
    (JAVA_DIR / "HebrewMonth.java").write_text(emit_hebrew_month(), encoding="utf-8")
    print(f"OK  java  → {JAVA_DIR.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
