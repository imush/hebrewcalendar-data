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

    class_name  : Java enum class name (e.g. Parsha, JewishMonth)
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


def emit_jewish_month() -> str:
    """JewishMonth enum with translations + a helper for (month, leap) lookup."""
    data = load("names/jewish_months.json")
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", ""]
    lines.append("/** Hebrew months plus Adar I / Adar II leap variants. Use {@link #forMonth}")
    lines.append(" *  to resolve from the (month, leap) tuple the calendar layer uses. */")
    lines.append("public enum JewishMonth {")
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
    lines.append("    JewishMonth(String key, String en, String he, String ru, String fr) {")
    lines.append("        this.key = key;")
    lines.append("        this.en = en;")
    lines.append("        this.he = he;")
    lines.append("        this.ru = ru;")
    lines.append("        this.fr = fr;")
    lines.append("    }")
    lines.append("")
    lines.append("    /** Resolve by 1-based month index. Month 12 in a leap year is Adar I;")
    lines.append("     *  month 13 exists only in leap years. Returns null for out-of-range. */")
    lines.append("    public static JewishMonth forMonth(int month, boolean leap) {")
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


def emit_parshiot_year_type() -> str:
    data = load("schedules/parsha_year_schedules.json")
    year_types = data["yearTypes"]

    def render_week(week):
        if not week:
            return "e()"
        if len(week) == 1:
            return f"s({week[0]})"
        return f"d({week[0]}, {week[1]})"

    def render_schedule(readings):
        # Format 4 readings per line for readability.
        parts = [render_week(w) for w in readings]
        lines = []
        for i in range(0, len(parts), 4):
            lines.append("            " + ", ".join(parts[i:i+4]))
        return ",\n".join(lines)

    lines = [JAVA_BANNER]
    lines.append("package net.hebrewcalendar.data;")
    lines.append("")
    lines.append("import java.util.List;")
    lines.append("")
    lines.append("import static net.hebrewcalendar.data.Parsha.*;")
    lines.append("")
    lines.append("/** The 14 canonical Hebrew year types, each carrying its Shabbat reading")
    lines.append(" *  schedule for Israel and the Diaspora. */")
    lines.append("public enum ParshiotYearType {")

    for i, yt in enumerate(year_types):
        term = "," if i < len(year_types) - 1 else ";"
        year_length = yt["yearLength"]
        lines.append(f"")
        lines.append(f"    /** {yt['letter']} : {yt['id']} */")
        lines.append(f"    {yt['id']}(")
        lines.append(f"        {yt['roshHashanaDow']}, YearCheshvanKislevType.{year_length}, {yt['pesachDow']}, {'true' if yt['leap'] else 'false'},")
        lines.append(f"        List.of(")
        lines.append(render_schedule(yt["israel"]))
        lines.append("        ),")
        lines.append(f"        List.of(")
        lines.append(render_schedule(yt["diaspora"]))
        lines.append("        )")
        lines.append(f"    ){term}")

    lines.append("")
    lines.append("    public final int rosh;")
    lines.append("    public final YearCheshvanKislevType yearType;")
    lines.append("    public final int pesach;")
    lines.append("    public final boolean leap;")
    lines.append("    private final List<List<Parsha>> israelSchedule;")
    lines.append("    private final List<List<Parsha>> diasporaSchedule;")
    lines.append("")
    lines.append("    ParshiotYearType(int rosh, YearCheshvanKislevType yearType, int pesach, boolean leap,")
    lines.append("                     List<List<Parsha>> israel, List<List<Parsha>> diaspora) {")
    lines.append("        this.rosh = rosh;")
    lines.append("        this.yearType = yearType;")
    lines.append("        this.pesach = pesach;")
    lines.append("        this.leap = leap;")
    lines.append("        this.israelSchedule = israel;")
    lines.append("        this.diasporaSchedule = diaspora;")
    lines.append("    }")
    lines.append("")
    lines.append("    public List<List<Parsha>> schedule(boolean inIsrael) {")
    lines.append("        return inIsrael ? israelSchedule : diasporaSchedule;")
    lines.append("    }")
    lines.append("")
    lines.append("    public static ParshiotYearType forYear(int rosh, YearCheshvanKislevType yearType, int pesach) {")
    lines.append("        for (ParshiotYearType t : values())")
    lines.append("            if (t.rosh == rosh && t.yearType == yearType && t.pesach == pesach) return t;")
    lines.append("        throw new IllegalArgumentException(")
    lines.append("            \"Unknown Hebrew year type: rosh=\" + rosh + \" yearType=\" + yearType + \" pesach=\" + pesach);")
    lines.append("    }")
    lines.append("")
    lines.append("    private static List<Parsha> s(Parsha a)             { return List.of(a); }")
    lines.append("    private static List<Parsha> d(Parsha a, Parsha b)   { return List.of(a, b); }")
    lines.append("    private static List<Parsha> e()                     { return List.of(); }")
    lines.append("}")
    return "\n".join(lines) + "\n"


def emit_year_cheshvan_kislev_type() -> str:
    """Simple 3-value enum imported by ParshiotYearType. Emitted so that the
    generated package is self-contained. Callers in the Java lib import it
    from data (was in impl/ before)."""
    lines = [JAVA_BANNER]
    lines.append("package net.hebrewcalendar.data;")
    lines.append("")
    lines.append("/** Length type of the Hebrew year, determined by the days in Cheshvan and Kislev:")
    lines.append(" *  SHORT (both 29), NORMAL (Cheshvan 29 / Kislev 30), FULL (both 30). */")
    lines.append("public enum YearCheshvanKislevType {")
    lines.append("    SHORT, NORMAL, FULL")
    lines.append("}")
    return "\n".join(lines) + "\n"


def main():
    JAVA_DIR.mkdir(parents=True, exist_ok=True)
    (JAVA_DIR / "Parsha.java").write_text(emit_parsha(), encoding="utf-8")
    (JAVA_DIR / "JewishMonth.java").write_text(emit_jewish_month(), encoding="utf-8")
    (JAVA_DIR / "YearCheshvanKislevType.java").write_text(emit_year_cheshvan_kislev_type(), encoding="utf-8")
    (JAVA_DIR / "ParshiotYearType.java").write_text(emit_parshiot_year_type(), encoding="utf-8")
    print(f"OK  java  → {JAVA_DIR.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
