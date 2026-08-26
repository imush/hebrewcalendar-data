#!/usr/bin/env python3
"""Emit the Dart mini-package under generated/dart/.

The output is a self-contained pub package named `hebrewcalendar_data`
that consumers reference via a `path:` dependency in pubspec.yaml.
"""
from common import ROOT, load, tanya_key, BANNER

DART_DIR = ROOT / "generated" / "dart"
LIB_DIR  = DART_DIR / "lib"
SRC_DIR  = LIB_DIR / "src"


def dart_str(s: str) -> str:
    """Emit a Dart string literal. \" and \\ get escaped; unicode passes through."""
    return "'" + s.replace("\\", "\\\\").replace("'", r"\'") + "'"


def to_dart_enum_name(screaming: str) -> str:
    """`IGGERET_HAKODESH` → `iggeretHakodesh` (Dart enum-constant style)."""
    parts = screaming.lower().split("_")
    return parts[0] + "".join(p.capitalize() for p in parts[1:])


def emit_tanya() -> str:
    entries  = load("schedules/tanya.json")
    sections = load("names/tanya_sections.json")

    lines = [BANNER]
    lines.append("part of '../hebrewcalendar_data.dart';\n")

    # ── TanyaSection enum ─────────────────────────────────────────
    lines.append("enum TanyaSection {")
    keys_sorted = list(sections.keys())  # preserve insertion order
    for k in keys_sorted:
        v = sections[k]
        lines.append(
            f"  {to_dart_enum_name(k)}({dart_str(v['en'])}, {dart_str(v['he'])}),"
        )
    lines.append("  ;")
    lines.append("  final String en;")
    lines.append("  final String he;")
    lines.append("  const TanyaSection(this.en, this.he);")
    lines.append("}\n")

    # ── TanyaPortion record type ──────────────────────────────────
    lines.append("class TanyaPortion {")
    lines.append("  final TanyaSection section;")
    lines.append("  final int chapter;   // 0 = section has no numbered chapters (front matter)")
    lines.append("  final String start;")
    lines.append("  final String end;")
    lines.append("  const TanyaPortion(this.section, this.chapter, this.start, this.end);")
    lines.append("}\n")

    lines.append("/// Key: (leap ? 1000 : 0) + month * 40 + day")
    lines.append("int tanyaKey({required bool leap, required int month, required int day}) =>")
    lines.append("    (leap ? 1000 : 0) + month * 40 + day;\n")

    # ── Schedule table ────────────────────────────────────────────
    entries.sort(key=lambda e: tanya_key(e["leap"], e["month"], e["day"]))
    lines.append("const Map<int, TanyaPortion> tanyaSchedule = {")
    for e in entries:
        if e["section"] not in sections:
            raise SystemExit(f"tanya.json references unknown section: {e['section']!r}")
        k = tanya_key(e["leap"], e["month"], e["day"])
        tag = f"L{e['month']:02d}-{e['day']:02d}" if e["leap"] else f"N{e['month']:02d}-{e['day']:02d}"
        lines.append(
            f"  {k}: TanyaPortion(TanyaSection.{to_dart_enum_name(e['section'])}, "
            f"{e['chapter']}, {dart_str(e['start'])}, {dart_str(e['end'])}),  // {tag}"
        )
    lines.append("};\n")
    return "\n".join(lines)


def emit_parshiyot() -> str:
    parshiyot = load("names/parshiyot.json")
    lines = [BANNER]
    lines.append("part of '../hebrewcalendar_data.dart';\n")
    lines.append("/// A weekly Torah portion. Enum insertion order matches the C library's")
    lines.append("/// hc_parsha enum (Bereishit=1..Haazinu=53); [hcIndex] gives that value.")
    lines.append("/// V'Zot HaBerachah is not included — it's a Simchat Torah reading only.")
    lines.append("enum Parsha {")
    keys = list(parshiyot.keys())
    for k in keys:
        v = parshiyot[k]
        lines.append(
            f"  {to_dart_enum_name(k)}("
            f"{dart_str(v['en'])}, {dart_str(v['he'])}, "
            f"{dart_str(v['ru'])}, {dart_str(v['fr'])}),"
        )
    lines.append("  ;")
    lines.append("  final String en;")
    lines.append("  final String he;")
    lines.append("  final String ru;")
    lines.append("  final String fr;")
    lines.append("  const Parsha(this.en, this.he, this.ru, this.fr);")
    lines.append("")
    lines.append("  /// hc_parsha enum value (1-based). HC_PARSHA_NONE (0) has no Parsha.")
    lines.append("  int get hcIndex => index + 1;")
    lines.append("")
    lines.append("  /// Look up by hc_parsha integer. Returns null for 0 or out-of-range.")
    lines.append("  static Parsha? fromHcIndex(int idx) =>")
    lines.append("      (idx >= 1 && idx <= values.length) ? values[idx - 1] : null;")
    lines.append("")
    lines.append("  /// Look up by canonical English name (case-sensitive).")
    lines.append("  static Parsha? fromEnglishName(String en) => _byEn[en];")
    lines.append("  static final Map<String, Parsha> _byEn = ")
    lines.append("      { for (final p in values) p.en: p };")
    lines.append("}\n")
    return "\n".join(lines)


def emit_hebrew_months() -> str:
    data = load("names/hebrew_months.json")
    lines = [BANNER]
    lines.append("part of '../hebrewcalendar_data.dart';\n")
    lines.append("/// The 12 Hebrew months plus Adar I / Adar II leap variants.")
    lines.append("/// Callers pick the enum value with [forMonth] using the C library's")
    lines.append("/// month index (1..13, where month 12 in a non-leap year is Adar and")
    lines.append("/// in a leap year is Adar I, and month 13 exists only in leap years).")
    lines.append("enum HebrewMonth {")
    for k, v in data.items():
        lines.append(
            f"  {to_dart_enum_name(k)}("
            f"{dart_str(v['en'])}, {dart_str(v['he'])}, "
            f"{dart_str(v['ru'])}, {dart_str(v['fr'])}),"
        )
    lines.append("  ;")
    lines.append("  final String en;")
    lines.append("  final String he;")
    lines.append("  final String ru;")
    lines.append("  final String fr;")
    lines.append("  const HebrewMonth(this.en, this.he, this.ru, this.fr);")
    lines.append("")
    lines.append("  /// Resolve by (month, leap) using the C library's month indexing.")
    lines.append("  /// month must be in 1..13; month 13 requires leap=true.")
    lines.append("  static HebrewMonth? forMonth(int month, {required bool leap}) {")
    lines.append("    const regular = [")
    lines.append("      HebrewMonth.nisan,   HebrewMonth.iyar,     HebrewMonth.sivan,")
    lines.append("      HebrewMonth.tamuz,   HebrewMonth.av,       HebrewMonth.elul,")
    lines.append("      HebrewMonth.tishrei, HebrewMonth.cheshvan, HebrewMonth.kislev,")
    lines.append("      HebrewMonth.tevet,   HebrewMonth.shvat,")
    lines.append("    ];")
    lines.append("    if (month >= 1 && month <= 11) return regular[month - 1];")
    lines.append("    if (month == 12) return leap ? HebrewMonth.adarI : HebrewMonth.adar;")
    lines.append("    if (month == 13 && leap) return HebrewMonth.adarIi;")
    lines.append("    return null;")
    lines.append("  }")
    lines.append("}\n")
    return "\n".join(lines)


def emit_special_maftirs() -> str:
    data = load("names/special_maftirs.json")
    lines = [BANNER]
    lines.append("part of '../hebrewcalendar_data.dart';\n")
    lines.append("/// The four 'Arba Parshiyot' maftirs read on specific Shabbatot")
    lines.append("/// in Adar / Nisan.")
    lines.append("enum SpecialMaftir {")
    for k, v in data.items():
        lines.append(
            f"  {to_dart_enum_name(k)}("
            f"{dart_str(v['en'])}, {dart_str(v['he'])}, "
            f"{dart_str(v['ru'])}, {dart_str(v['fr'])}),"
        )
    lines.append("  ;")
    lines.append("  final String en;")
    lines.append("  final String he;")
    lines.append("  final String ru;")
    lines.append("  final String fr;")
    lines.append("  const SpecialMaftir(this.en, this.he, this.ru, this.fr);")
    lines.append("")
    lines.append("  /// Look up by canonical English name (case-sensitive).")
    lines.append("  static SpecialMaftir? fromEnglishName(String en) => _byEn[en];")
    lines.append("  static final Map<String, SpecialMaftir> _byEn =")
    lines.append("      { for (final m in values) m.en: m };")
    lines.append("}\n")
    return "\n".join(lines)


def emit_hebrew_year_exceptions() -> str:
    data = load("names/hebrew_year_exceptions.json")
    entries = sorted((int(k), v) for k, v in data.items() if not k.startswith("$"))
    lines = [BANNER]
    lines.append("part of '../hebrewcalendar_data.dart';\n")
    lines.append("/// Hebrew years whose gematria letter-ordering is replaced by a")
    lines.append("/// rearranged form (avoiding ominous combinations, spelling auspicious")
    lines.append("/// phrases). Look up a year here before running the default gematria.")
    lines.append("const Map<int, String> hebrewYearExceptions = {")
    for year, form in entries:
        lines.append(f"  {year}: {dart_str(form)},")
    lines.append("};\n")
    return "\n".join(lines)


def emit_daf_yomi() -> str:
    data = load("schedules/daf_yomi.json")
    tractates = data["tractates"]
    cycle = data["cycle"]
    lines = [BANNER]
    lines.append("part of '../hebrewcalendar_data.dart';\n")
    lines.append("/// One Bavli tractate in the Daf Yomi cycle.")
    lines.append("class DafYomiTractate {")
    lines.append("  final String key;       // stable SCREAMING_SNAKE_CASE")
    lines.append("  final String en;")
    lines.append("  final String he;")
    lines.append("  final int lastDaf;      // last daf in the current cycle")
    lines.append("  final int oldLastDaf;   // Shekalim pre-cycle-8; = lastDaf otherwise")
    lines.append("  final int dafOffset;    // first-daf offset for Kinnim/Tamid/Middot")
    lines.append("  final bool amudAOnly;   // ends on daf A-side only")
    lines.append("  const DafYomiTractate({")
    lines.append("    required this.key, required this.en, required this.he,")
    lines.append("    required this.lastDaf, required this.oldLastDaf,")
    lines.append("    required this.dafOffset, required this.amudAOnly,")
    lines.append("  });")
    lines.append("}\n")
    lines.append("/// Cycle-boundary constants used to map a Gregorian date to a daf.")
    lines.append("class DafYomiCycle {")
    lines.append("  final DateTime oldStart, newStart;")
    lines.append("  final int oldCycleDays, newCycleDays, firstNewCycle;")
    lines.append("  const DafYomiCycle._({")
    lines.append("    required this.oldStart, required this.newStart,")
    lines.append("    required this.oldCycleDays, required this.newCycleDays,")
    lines.append("    required this.firstNewCycle,")
    lines.append("  });")
    lines.append("}\n")

    def date_to_ctor(s: str) -> str:
        y, m, d = s.split("-")
        return f"DateTime.utc({int(y)}, {int(m)}, {int(d)})"

    lines.append("final DafYomiCycle dafYomiCycle = DafYomiCycle._(")
    lines.append(f"  oldStart:      {date_to_ctor(cycle['oldStart'])},")
    lines.append(f"  newStart:      {date_to_ctor(cycle['newStart'])},")
    lines.append(f"  oldCycleDays:  {cycle['oldCycleDays']},")
    lines.append(f"  newCycleDays:  {cycle['newCycleDays']},")
    lines.append(f"  firstNewCycle: {cycle['firstNewCycle']},")
    lines.append(");\n")

    lines.append("/// 40 tractates in daf yomi cycle order.")
    lines.append("const List<DafYomiTractate> dafYomiTractates = [")
    for t in tractates:
        old = t.get("oldLastDaf", t["lastDaf"])
        off = t.get("dafOffset", 0)
        amudA = "true" if t.get("amudAOnly", False) else "false"
        lines.append(
            f"  DafYomiTractate(key: {dart_str(t['key'])}, "
            f"en: {dart_str(t['en'])}, he: {dart_str(t['he'])}, "
            f"lastDaf: {t['lastDaf']}, oldLastDaf: {old}, "
            f"dafOffset: {off}, amudAOnly: {amudA}),"
        )
    lines.append("];\n")
    return "\n".join(lines)


def emit_zmanim() -> str:
    data = load("names/zmanim.json")
    lines = [BANNER]
    lines.append("part of '../hebrewcalendar_data.dart';\n")
    lines.append("/// Astronomical / halachic time-of-day noun labels.")
    lines.append("/// Consumers combine these with per-repo formatting (talit/tefilin")
    lines.append("/// selection, method-name interpolation, etc.) at render time.")
    lines.append("enum Zman {")
    for k, v in data.items():
        lines.append(
            f"  {to_dart_enum_name(k)}("
            f"{dart_str(v['en'])}, {dart_str(v['he'])}, "
            f"{dart_str(v['ru'])}, {dart_str(v['fr'])}),"
        )
    lines.append("  ;")
    lines.append("  final String en;")
    lines.append("  final String he;")
    lines.append("  final String ru;")
    lines.append("  final String fr;")
    lines.append("  const Zman(this.en, this.he, this.ru, this.fr);")
    lines.append("}\n")
    return "\n".join(lines)


def emit_barrel() -> str:
    return (
        BANNER
        + "\n"
        + "library hebrewcalendar_data;\n\n"
        + "part 'src/tanya.dart';\n"
        + "part 'src/parshiyot.dart';\n"
        + "part 'src/hebrew_months.dart';\n"
        + "part 'src/special_maftirs.dart';\n"
        + "part 'src/hebrew_year_exceptions.dart';\n"
        + "part 'src/daf_yomi.dart';\n"
        + "part 'src/zmanim.dart';\n"
    )


def emit_pubspec() -> str:
    # Not generator-versioned yet — bump manually when publishing.
    return (
        "# GENERATED (structure) — data content is regenerated by codegen/to_dart.py\n"
        "name: hebrewcalendar_data\n"
        "description: Hebrew-calendar reference data (schedules, translations).\n"
        "version: 0.1.0\n"
        "publish_to: none\n"
        "environment:\n"
        "  sdk: '>=3.0.0 <4.0.0'\n"
    )


def main():
    SRC_DIR.mkdir(parents=True, exist_ok=True)
    (SRC_DIR / "tanya.dart").write_text(emit_tanya(), encoding="utf-8")
    (SRC_DIR / "parshiyot.dart").write_text(emit_parshiyot(), encoding="utf-8")
    (SRC_DIR / "hebrew_months.dart").write_text(emit_hebrew_months(), encoding="utf-8")
    (SRC_DIR / "special_maftirs.dart").write_text(emit_special_maftirs(), encoding="utf-8")
    (SRC_DIR / "hebrew_year_exceptions.dart").write_text(emit_hebrew_year_exceptions(), encoding="utf-8")
    (SRC_DIR / "daf_yomi.dart").write_text(emit_daf_yomi(), encoding="utf-8")
    (SRC_DIR / "zmanim.dart").write_text(emit_zmanim(), encoding="utf-8")
    (LIB_DIR / "hebrewcalendar_data.dart").write_text(emit_barrel(), encoding="utf-8")
    (DART_DIR / "pubspec.yaml").write_text(emit_pubspec(), encoding="utf-8")
    print(f"OK  dart  → {DART_DIR.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
