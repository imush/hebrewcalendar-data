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


def emit_special_maftir() -> str:
    return emit_translated_enum(
        "SpecialMaftir", "names/special_maftirs.json",
        "The four special Shabbat maftirs read on the Shabbatot before/around Purim & Nisan."
    )


def emit_tanach_book() -> str:
    """TanachBook enum + forEnglishName lookup.

    Consumers reference books by English name ('II Kings', 'Isaiah', ...);
    the enum lets us render them in any locale. Keys are SCREAMING_SNAKE
    with spaces → underscore ('II Kings' → 'II_KINGS')."""
    data = load("names/tanach_books.json")
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", "",
             "import java.util.HashMap;",
             "import java.util.Map;",
             ""]
    lines.append("/** Books of the Tanach — 5 Chumash + Prophets — with 4-lang translations. */")
    lines.append("public enum TanachBook {")
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
    lines.append("    public final String key, en, he, ru, fr;")
    lines.append("")
    lines.append("    TanachBook(String key, String en, String he, String ru, String fr) {")
    lines.append("        this.key = key; this.en = en; this.he = he; this.ru = ru; this.fr = fr;")
    lines.append("    }")
    lines.append("")
    lines.append("    private static final Map<String, TanachBook> BY_EN = new HashMap<>();")
    lines.append("    static { for (TanachBook b : values()) BY_EN.put(b.en, b); }")
    lines.append("")
    lines.append("    /** Look up by English name ('II Kings', 'Isaiah', ...); null if unknown. */")
    lines.append("    public static TanachBook forEnglishName(String en) { return BY_EN.get(en); }")
    lines.append("}")
    return "\n".join(lines) + "\n"


def emit_zman() -> str:
    return emit_translated_enum(
        "Zman", "names/zmanim.json",
        "Zmanim labels for the halachic times displayed by every consumer."
    )


def emit_custom() -> str:
    return emit_translated_enum(
        "Custom", "names/customs.json",
        "The 5 aliyot/haftarah customs the consumer UIs expose. Fallback "
        "resolution (Chabad → Sefard → Common, etc.) is done at data-gen "
        "time; every entry in Haftarot.ALL covers all 5 customs."
    )


def emit_special_haftarot() -> str:
    """SpecialHaftarot: opentorah-derived non-parsha haftarot (Rosh Chodesh,
    Machar Chodesh, Parshas Shekalim/Zachor/Parah/Hachodesh, Shabbos Hagadol,
    Chanukah, Yom Tov Shabbatot, Yom Kippur morning + afternoon, fast-day
    afternoons, Tisha B'Av)."""
    data = load("schedules/special_haftarot.json")
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", "",
             "import java.util.EnumMap;",
             "import java.util.HashMap;",
             "import java.util.List;",
             "import java.util.Map;",
             ""]
    lines.append("/** Non-parsha haftarot from opentorah SpecialReadings.")
    lines.append(" *  Keyed by \"Occasion_VARIANT\" (e.g. \"RoshChodesh_SHABBAT\",")
    lines.append(" *  \"ParshasShekalim_MAIN\", \"YomKippur_AFTERNOON\"). The occasion")
    lines.append(" *  names match opentorah's Scala object names so the precedence")
    lines.append(" *  code that consumes this can cross-reference the source. */")
    lines.append("public final class SpecialHaftarot {")
    lines.append("    private SpecialHaftarot() {}")
    lines.append("")
    lines.append("    public static final Map<String, Map<Custom, List<Haftarot.Reference>>> ALL;")
    lines.append("    static {")
    lines.append("        Map<String, Map<Custom, List<Haftarot.Reference>>> all = new HashMap<>();")
    for occ, variants in data.items():
        for variant, by_custom in variants.items():
            key = f"{occ}_{variant}"
            lines.append(f"        {{  Map<Custom, List<Haftarot.Reference>> m = new EnumMap<>(Custom.class);")
            for cname, refs in by_custom.items():
                joined = ", ".join(
                    f"new Haftarot.Reference({java_str(r['book'])}, {r['fromCh']}, {r['fromV']}, {r['toCh']}, {r['toV']})"
                    for r in refs
                )
                lines.append(f"            m.put(Custom.{cname}, List.of({joined}));")
            lines.append(f"            all.put({java_str(key)}, java.util.Collections.unmodifiableMap(m)); }}")
    lines.append("        ALL = java.util.Collections.unmodifiableMap(all);")
    lines.append("    }")
    lines.append("")
    lines.append("    /** Haftarah references for the given occasion+variant in the given custom;")
    lines.append("     *  null if not defined (e.g. an ADDITION only defined for CHABAD). */")
    lines.append("    public static List<Haftarot.Reference> forOccasion(String occasionAndVariant, Custom c) {")
    lines.append("        Map<Custom, List<Haftarot.Reference>> m = ALL.get(occasionAndVariant);")
    lines.append("        return m == null ? null : m.get(c);")
    lines.append("    }")
    lines.append("}")
    return "\n".join(lines) + "\n"


def emit_haftarot() -> str:
    data = load("schedules/haftarot.json")
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", "",
             "import java.util.EnumMap;",
             "import java.util.List;",
             "import java.util.Map;",
             ""]
    lines.append("/** Haftarah references per parsha × custom (opentorah-derived).")
    lines.append(" *  Each entry is a list of Reference parts (multi-part haftarot")
    lines.append(" *  concatenate two chunks). Use {@link #forParsha} to look up.")
    lines.append(" */")
    lines.append("public final class Haftarot {")
    lines.append("    private Haftarot() {}")
    lines.append("")
    lines.append("    public static final class Reference {")
    lines.append("        public final String book;")
    lines.append("        public final int fromCh, fromV, toCh, toV;")
    lines.append("        Reference(String book, int fromCh, int fromV, int toCh, int toV) {")
    lines.append("            this.book = book;")
    lines.append("            this.fromCh = fromCh; this.fromV = fromV;")
    lines.append("            this.toCh   = toCh;   this.toV   = toV;")
    lines.append("        }")
    lines.append("    }")
    lines.append("")
    lines.append("    public static final Map<Parsha, Map<Custom, List<Reference>>> ALL;")
    lines.append("    static {")
    lines.append("        Map<Parsha, Map<Custom, List<Reference>>> all = new EnumMap<>(Parsha.class);")
    for pkey, by_custom in data.items():
        lines.append(f"        {{  Map<Custom, List<Reference>> m = new EnumMap<>(Custom.class);")
        for cname, refs in by_custom.items():
            joined = ", ".join(
                f"new Reference({java_str(r['book'])}, {r['fromCh']}, {r['fromV']}, {r['toCh']}, {r['toV']})"
                for r in refs
            )
            lines.append(f"            m.put(Custom.{cname}, List.of({joined}));")
        lines.append(f"            all.put(Parsha.{pkey}, java.util.Collections.unmodifiableMap(m)); }}")
    lines.append("        ALL = java.util.Collections.unmodifiableMap(all);")
    lines.append("    }")
    lines.append("")
    lines.append("    /** Haftarah for the given parsha in the given custom, or null if unknown. */")
    lines.append("    public static List<Reference> forParsha(Parsha p, Custom c) {")
    lines.append("        Map<Custom, List<Reference>> m = ALL.get(p);")
    lines.append("        return m == null ? null : m.get(c);")
    lines.append("    }")
    lines.append("}")
    return "\n".join(lines) + "\n"


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


def emit_jewish_special_day_key() -> str:
    """Emit the categorical translation enum. Each Java lib's algorithmic
    JewishSpecialDay maps to one of these; consumers read display strings
    via .en/.he/.ru/.fr."""
    data = load("names/jewish_special_days.json")
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", ""]
    lines.append("/** Typed enum of holiday categories. Each value carries a stable key")
    lines.append(" *  + 4-language display strings. Java lib's JewishSpecialDay.category()")
    lines.append(" *  maps each algorithmic special-day to one value here. */")
    lines.append("public enum JewishSpecialDayKey {")
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
    lines.append("    JewishSpecialDayKey(String key, String en, String he, String ru, String fr) {")
    lines.append("        this.key = key;")
    lines.append("        this.en = en;")
    lines.append("        this.he = he;")
    lines.append("        this.ru = ru;")
    lines.append("        this.fr = fr;")
    lines.append("    }")
    lines.append("}")
    return "\n".join(lines) + "\n"


def emit_daf_yomi() -> str:
    data = load("schedules/daf_yomi.json")
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", "",
             "import java.time.LocalDate;", ""]
    lines.append("/** Daf Yomi Bavli cycle: 40 tractates + cycle boundary constants. */")
    lines.append("public final class DafYomi {")
    lines.append("    private DafYomi() {}")
    lines.append("")
    lines.append("    public static final class Tractate {")
    lines.append("        public final String key, en, he;")
    lines.append("        public final int lastDaf, oldLastDaf, dafOffset;")
    lines.append("        public final boolean amudAOnly;")
    lines.append("        public Tractate(String key, String en, String he, int lastDaf,")
    lines.append("                        int oldLastDaf, int dafOffset, boolean amudAOnly) {")
    lines.append("            this.key = key; this.en = en; this.he = he;")
    lines.append("            this.lastDaf = lastDaf; this.oldLastDaf = oldLastDaf;")
    lines.append("            this.dafOffset = dafOffset; this.amudAOnly = amudAOnly;")
    lines.append("        }")
    lines.append("    }")
    lines.append("")
    cycle = data["cycle"]
    y, m, d = cycle["oldStart"].split("-")
    lines.append(f"    public static final LocalDate OLD_START      = LocalDate.of({int(y)}, {int(m)}, {int(d)});")
    y, m, d = cycle["newStart"].split("-")
    lines.append(f"    public static final LocalDate NEW_START      = LocalDate.of({int(y)}, {int(m)}, {int(d)});")
    lines.append(f"    public static final int      OLD_CYCLE_DAYS  = {cycle['oldCycleDays']};")
    lines.append(f"    public static final int      NEW_CYCLE_DAYS  = {cycle['newCycleDays']};")
    lines.append(f"    public static final int      FIRST_NEW_CYCLE = {cycle['firstNewCycle']};")
    lines.append("")
    lines.append("    public static final Tractate[] TRACTATES = {")
    for t in data["tractates"]:
        old = t.get("oldLastDaf", t["lastDaf"])
        off = t.get("dafOffset", 0)
        amudA = "true" if t.get("amudAOnly", False) else "false"
        lines.append(
            f"        new Tractate({java_str(t['key'])}, {java_str(t['en'])}, "
            f"{java_str(t['he'])}, {t['lastDaf']}, {old}, {off}, {amudA}),"
        )
    lines.append("    };")
    lines.append("}")
    return "\n".join(lines) + "\n"


def emit_rambam_mt() -> str:
    data = load("schedules/rambam_mt.json")
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", "",
             "import java.time.LocalDate;", ""]
    lines.append("/** Rambam Mishneh Torah study cycle data. */")
    lines.append("public enum RambamHalacha {")
    items = data["halachot"]
    for i, h in enumerate(items):
        ch3 = h.get("chapters3", h["chapters"])
        term = "," if i < len(items) - 1 else ";"
        lines.append(
            f"    {h['key']}({java_str(h['key'])}, {java_str(h['en'])}, "
            f"{java_str(h['he'])}, {java_str(h['ru'])}, {java_str(h['fr'])}, "
            f"{h['chapters']}, {ch3}){term}"
        )
    lines.append("")
    lines.append("    public final String key, en, he, ru, fr;")
    lines.append("    public final int chapters, chapters3;")
    lines.append("")
    lines.append("    RambamHalacha(String key, String en, String he, String ru, String fr,")
    lines.append("                  int chapters, int chapters3) {")
    lines.append("        this.key = key; this.en = en; this.he = he;")
    lines.append("        this.ru = ru; this.fr = fr;")
    lines.append("        this.chapters = chapters; this.chapters3 = chapters3;")
    lines.append("    }")
    lines.append("")
    cycle = data["cycle"]
    y, m, d = cycle["epoch"].split("-")
    lines.append(f"    public static final LocalDate EPOCH                    = LocalDate.of({int(y)}, {int(m)}, {int(d)});")
    lines.append(f"    public static final int      ONE_CHAPTER_CYCLE_DAYS   = {cycle['oneChapterDays']};")
    lines.append(f"    public static final int      THREE_CHAPTER_CYCLE_DAYS = {cycle['threeChapterDays']};")
    lines.append("")
    lines.append("    public static final String[][] FIRST_FOUR_VERSES = {")
    for row in data["firstFourVerses"]:
        lines.append(f"        {{ {java_str(row[0])}, {java_str(row[1])}, {java_str(row[2])} }},")
    lines.append("    };")
    lines.append("}")
    return "\n".join(lines) + "\n"


def emit_sefer_hamitzvot() -> str:
    data = load("schedules/sefer_hamitzvot.json")
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", "",
             "import java.time.LocalDate;", ""]
    lines.append("/** Sefer HaMitzvot 339-day study cycle. */")
    lines.append("public final class SeferHaMitzvot {")
    lines.append("    private SeferHaMitzvot() {}")
    lines.append("")
    cycle = data["cycle"]
    y, m, d = cycle["epoch"].split("-")
    lines.append(f"    public static final LocalDate EPOCH      = LocalDate.of({int(y)}, {int(m)}, {int(d)});")
    lines.append(f"    public static final int      CYCLE_DAYS = {cycle['cycleDays']};")
    lines.append("")
    lines.append("    public static final String[] READINGS = {")
    for r in data["readings"]:
        lines.append(f"        {java_str(r)},")
    lines.append("    };")
    lines.append("}")
    return "\n".join(lines) + "\n"


def emit_tanya() -> str:
    entries  = load("schedules/tanya.json")
    sections = load("names/tanya_sections.json")
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", "",
             "import java.util.HashMap;", "import java.util.Map;", ""]
    lines.append("/** Tanya daily-study schedule (740 entries: leap + non-leap partitions). */")
    lines.append("public final class Tanya {")
    lines.append("    private Tanya() {}")
    lines.append("")
    lines.append("    public enum Section {")
    keys = list(sections.keys())
    for i, k in enumerate(keys):
        term = "," if i < len(keys) - 1 else ";"
        v = sections[k]
        lines.append(f"        {k}({java_str(k)}, {java_str(v['en'])}, {java_str(v['he'])}){term}")
    lines.append("        public final String key, en, he;")
    lines.append("        Section(String key, String en, String he) { this.key = key; this.en = en; this.he = he; }")
    lines.append("    }")
    lines.append("")
    lines.append("    public static final class Portion {")
    lines.append("        public final Section section;")
    lines.append("        public final int chapter;")
    lines.append("        public final String start, end;")
    lines.append("        public Portion(Section section, int chapter, String start, String end) {")
    lines.append("            this.section = section; this.chapter = chapter;")
    lines.append("            this.start = start; this.end = end;")
    lines.append("        }")
    lines.append("    }")
    lines.append("")
    lines.append("    /** Map key: (leap ? 1000 : 0) + month * 40 + day. */")
    lines.append("    public static int key(boolean leap, int month, int day) {")
    lines.append("        return (leap ? 1000 : 0) + month * 40 + day;")
    lines.append("    }")
    lines.append("")
    lines.append("    public static final Map<Integer, Portion> SCHEDULE;")
    lines.append("    static {")
    lines.append("        Map<Integer, Portion> m = new HashMap<>(800);")
    entries.sort(key=lambda e: (1000 if e["leap"] else 0) + e["month"] * 40 + e["day"])
    for e in entries:
        k = (1000 if e["leap"] else 0) + e["month"] * 40 + e["day"]
        lines.append(
            f"        m.put({k}, new Portion(Section.{e['section']}, "
            f"{e['chapter']}, {java_str(e['start'])}, {java_str(e['end'])}));"
        )
    lines.append("        SCHEDULE = java.util.Collections.unmodifiableMap(m);")
    lines.append("    }")
    lines.append("}")
    return "\n".join(lines) + "\n"


def emit_chumash_aliyot() -> str:
    data = load("schedules/chumash_aliyot.json")
    lines = [JAVA_BANNER, "package net.hebrewcalendar.data;", ""]
    lines.append("import java.util.HashMap;")
    lines.append("import java.util.List;")
    lines.append("import java.util.Map;")
    lines.append("")
    lines.append("/** Chumash daily-aliyah boundaries. Keyed by the reading id")
    lines.append(" *  (single parsha key, doubled JOINED_KEY, or VEZOT_HABRACHA). */")
    lines.append("public final class ChumashAliyot {")
    lines.append("    private ChumashAliyot() {}")
    lines.append("")
    lines.append("    public static final String[] BOOKS = {")
    lines.append("        null, \"Genesis\", \"Exodus\", \"Leviticus\", \"Numbers\", \"Deuteronomy\"")
    lines.append("    };")
    lines.append("")
    lines.append("    public static final class Reading {")
    lines.append("        public final String id;")
    lines.append("        public final List<String> parshiyot;   // 1 or 2 Parsha keys")
    lines.append("        public final int book;                 // 1..5")
    lines.append("        public final String[] aliyot;          // 7 entries in \"chap:verse-chap:verse\" form")
    lines.append("        public Reading(String id, List<String> parshiyot, int book, String[] aliyot) {")
    lines.append("            this.id = id; this.parshiyot = parshiyot;")
    lines.append("            this.book = book; this.aliyot = aliyot;")
    lines.append("        }")
    lines.append("    }")
    lines.append("")
    lines.append("    public static final Map<String, Reading> READINGS;")
    lines.append("    static {")
    lines.append("        Map<String, Reading> m = new HashMap<>();")
    for r in data["readings"]:
        parshiyot = ", ".join(java_str(p) for p in r["parshiyot"])
        parshiyot_expr = f"List.of({parshiyot})"
        aliyot_str = ", ".join(java_str(a) for a in r["aliyot"])
        lines.append(
            f"        m.put({java_str(r['id'])}, new Reading({java_str(r['id'])}, "
            f"{parshiyot_expr}, {r['book']}, "
            f"new String[]{{ {aliyot_str} }}));"
        )
    lines.append("        READINGS = java.util.Collections.unmodifiableMap(m);")
    lines.append("    }")
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
    (JAVA_DIR / "JewishSpecialDayKey.java").write_text(emit_jewish_special_day_key(), encoding="utf-8")
    (JAVA_DIR / "DafYomi.java").write_text(emit_daf_yomi(), encoding="utf-8")
    (JAVA_DIR / "RambamHalacha.java").write_text(emit_rambam_mt(), encoding="utf-8")
    (JAVA_DIR / "SeferHaMitzvot.java").write_text(emit_sefer_hamitzvot(), encoding="utf-8")
    (JAVA_DIR / "Tanya.java").write_text(emit_tanya(), encoding="utf-8")
    (JAVA_DIR / "ChumashAliyot.java").write_text(emit_chumash_aliyot(), encoding="utf-8")
    (JAVA_DIR / "SpecialMaftir.java").write_text(emit_special_maftir(), encoding="utf-8")
    (JAVA_DIR / "TanachBook.java").write_text(emit_tanach_book(), encoding="utf-8")
    (JAVA_DIR / "Zman.java").write_text(emit_zman(), encoding="utf-8")
    (JAVA_DIR / "Custom.java").write_text(emit_custom(), encoding="utf-8")
    (JAVA_DIR / "Haftarot.java").write_text(emit_haftarot(), encoding="utf-8")
    (JAVA_DIR / "SpecialHaftarot.java").write_text(emit_special_haftarot(), encoding="utf-8")
    print(f"OK  java  → {JAVA_DIR.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
