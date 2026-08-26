// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// One Bavli tractate in the Daf Yomi cycle.
class DafYomiTractate {
  final String key;       // stable SCREAMING_SNAKE_CASE
  final String en;
  final String he;
  final int lastDaf;      // last daf in the current cycle
  final int oldLastDaf;   // Shekalim pre-cycle-8; = lastDaf otherwise
  final int dafOffset;    // first-daf offset for Kinnim/Tamid/Middot
  final bool amudAOnly;   // ends on daf A-side only
  const DafYomiTractate({
    required this.key, required this.en, required this.he,
    required this.lastDaf, required this.oldLastDaf,
    required this.dafOffset, required this.amudAOnly,
  });
}

/// Cycle-boundary constants used to map a Gregorian date to a daf.
class DafYomiCycle {
  final DateTime oldStart, newStart;
  final int oldCycleDays, newCycleDays, firstNewCycle;
  const DafYomiCycle._({
    required this.oldStart, required this.newStart,
    required this.oldCycleDays, required this.newCycleDays,
    required this.firstNewCycle,
  });
}

final DafYomiCycle dafYomiCycle = DafYomiCycle._(
  oldStart:      DateTime.utc(1923, 9, 11),
  newStart:      DateTime.utc(1975, 6, 24),
  oldCycleDays:  2702,
  newCycleDays:  2711,
  firstNewCycle: 8,
);

/// 40 tractates in daf yomi cycle order.
const List<DafYomiTractate> dafYomiTractates = [
  DafYomiTractate(key: 'BERAKHOT', en: 'Berakhot', he: 'ברכות', lastDaf: 64, oldLastDaf: 64, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'SHABBAT', en: 'Shabbat', he: 'שבת', lastDaf: 157, oldLastDaf: 157, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'ERUVIN', en: 'Eruvin', he: 'עירובין', lastDaf: 105, oldLastDaf: 105, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'PESACHIM', en: 'Pesachim', he: 'פסחים', lastDaf: 121, oldLastDaf: 121, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'SHEKALIM', en: 'Shekalim', he: 'שקלים', lastDaf: 22, oldLastDaf: 13, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'YOMA', en: 'Yoma', he: 'יומא', lastDaf: 88, oldLastDaf: 88, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'SUKKAH', en: 'Sukkah', he: 'סוכה', lastDaf: 56, oldLastDaf: 56, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'BEITZAH', en: 'Beitzah', he: 'ביצה', lastDaf: 40, oldLastDaf: 40, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'ROSH_HASHANAH', en: 'Rosh Hashanah', he: 'ראש השנה', lastDaf: 35, oldLastDaf: 35, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'TAANIT', en: 'Taanit', he: 'תענית', lastDaf: 31, oldLastDaf: 31, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'MEGILLAH', en: 'Megillah', he: 'מגילה', lastDaf: 32, oldLastDaf: 32, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'MOED_KATAN', en: 'Moed Katan', he: 'מועד קטן', lastDaf: 29, oldLastDaf: 29, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'CHAGIGAH', en: 'Chagigah', he: 'חגיגה', lastDaf: 27, oldLastDaf: 27, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'YEVAMOT', en: 'Yevamot', he: 'יבמות', lastDaf: 122, oldLastDaf: 122, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'KETUBOT', en: 'Ketubot', he: 'כתובות', lastDaf: 112, oldLastDaf: 112, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'NEDARIM', en: 'Nedarim', he: 'נדרים', lastDaf: 91, oldLastDaf: 91, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'NAZIR', en: 'Nazir', he: 'נזיר', lastDaf: 66, oldLastDaf: 66, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'SOTAH', en: 'Sotah', he: 'סוטה', lastDaf: 49, oldLastDaf: 49, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'GITTIN', en: 'Gittin', he: 'גיטין', lastDaf: 90, oldLastDaf: 90, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'KIDDUSHIN', en: 'Kiddushin', he: 'קידושין', lastDaf: 82, oldLastDaf: 82, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'BAVA_KAMMA', en: 'Bava Kamma', he: 'בבא קמא', lastDaf: 119, oldLastDaf: 119, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'BAVA_METZIA', en: 'Bava Metzia', he: 'בבא מציעא', lastDaf: 119, oldLastDaf: 119, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'BAVA_BATRA', en: 'Bava Batra', he: 'בבא בתרא', lastDaf: 176, oldLastDaf: 176, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'SANHEDRIN', en: 'Sanhedrin', he: 'סנהדרין', lastDaf: 113, oldLastDaf: 113, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'MAKKOT', en: 'Makkot', he: 'מכות', lastDaf: 24, oldLastDaf: 24, dafOffset: 0, amudAOnly: true),
  DafYomiTractate(key: 'SHEVUOT', en: 'Shevuot', he: 'שבועות', lastDaf: 49, oldLastDaf: 49, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'AVODAH_ZARAH', en: 'Avodah Zarah', he: 'עבודה זרה', lastDaf: 76, oldLastDaf: 76, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'HORAYOT', en: 'Horayot', he: 'הוריות', lastDaf: 14, oldLastDaf: 14, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'ZEVACHIM', en: 'Zevachim', he: 'זבחים', lastDaf: 120, oldLastDaf: 120, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'MENACHOT', en: 'Menachot', he: 'מנחות', lastDaf: 110, oldLastDaf: 110, dafOffset: 0, amudAOnly: true),
  DafYomiTractate(key: 'CHULLIN', en: 'Chullin', he: 'חולין', lastDaf: 142, oldLastDaf: 142, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'BEKHOROT', en: 'Bekhorot', he: 'בכורות', lastDaf: 61, oldLastDaf: 61, dafOffset: 0, amudAOnly: true),
  DafYomiTractate(key: 'ARAKHIN', en: 'Arakhin', he: 'ערכין', lastDaf: 34, oldLastDaf: 34, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'TEMURAH', en: 'Temurah', he: 'תמורה', lastDaf: 34, oldLastDaf: 34, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'KERITOT', en: 'Keritot', he: 'כריתות', lastDaf: 28, oldLastDaf: 28, dafOffset: 0, amudAOnly: false),
  DafYomiTractate(key: 'MEILAH', en: 'Meilah', he: 'מעילה', lastDaf: 22, oldLastDaf: 22, dafOffset: 0, amudAOnly: true),
  DafYomiTractate(key: 'KINNIM', en: 'Kinnim', he: 'קינים', lastDaf: 4, oldLastDaf: 4, dafOffset: 21, amudAOnly: true),
  DafYomiTractate(key: 'TAMID', en: 'Tamid', he: 'תמיד', lastDaf: 9, oldLastDaf: 9, dafOffset: 24, amudAOnly: true),
  DafYomiTractate(key: 'MIDDOT', en: 'Middot', he: 'מדות', lastDaf: 5, oldLastDaf: 5, dafOffset: 32, amudAOnly: false),
  DafYomiTractate(key: 'NIDDAH', en: 'Niddah', he: 'נדה', lastDaf: 73, oldLastDaf: 73, dafOffset: 0, amudAOnly: true),
];
