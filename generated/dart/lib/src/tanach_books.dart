// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// Books of the Tanach — 5 Chumash + Prophets — with 4-lang names.
///
/// Haftarah references come back from the C library carrying the
/// English book name, which is also what Sefaria URLs use; look up
/// with [fromEnglishName] to render it in another locale.
enum TanachBook {
  genesis('GENESIS', 'Genesis', 'בראשית', 'Берешит', 'Béréchit'),
  exodus('EXODUS', 'Exodus', 'שמות', 'Шмот', 'Chemot'),
  leviticus('LEVITICUS', 'Leviticus', 'ויקרא', 'Ваикра', 'Vayikra'),
  numbers('NUMBERS', 'Numbers', 'במדבר', 'Бемидбар', 'Bemidbar'),
  deuteronomy('DEUTERONOMY', 'Deuteronomy', 'דברים', 'Дварим', 'Devarim'),
  joshua('JOSHUA', 'Joshua', 'יהושע', 'Йеѓошуа', 'Yehochoua'),
  judges('JUDGES', 'Judges', 'שופטים', 'Шофтим', 'Choftim'),
  iSamuel('I_SAMUEL', 'I Samuel', 'שמואל א׳', 'I Шмуэль', 'I Samuel'),
  iiSamuel('II_SAMUEL', 'II Samuel', 'שמואל ב׳', 'II Шмуэль', 'II Samuel'),
  iKings('I_KINGS', 'I Kings', 'מלכים א׳', 'I Мелахим', 'I Melakhim'),
  iiKings('II_KINGS', 'II Kings', 'מלכים ב׳', 'II Мелахим', 'II Melakhim'),
  isaiah('ISAIAH', 'Isaiah', 'ישעיהו', 'Йешаяѓу', 'Yechaya'),
  jeremiah('JEREMIAH', 'Jeremiah', 'ירמיהו', 'Йирмияѓу', 'Yirmiya'),
  ezekiel('EZEKIEL', 'Ezekiel', 'יחזקאל', 'Йехезкель', 'Ye\'hezkel'),
  hosea('HOSEA', 'Hosea', 'הושע', 'Ѓошеа', 'Hoché\'a'),
  joel('JOEL', 'Joel', 'יואל', 'Йоэль', 'Yoël'),
  amos('AMOS', 'Amos', 'עמוס', 'Амос', 'Amos'),
  obadiah('OBADIAH', 'Obadiah', 'עובדיה', 'Овадья', 'Ovadia'),
  jonah('JONAH', 'Jonah', 'יונה', 'Йона', 'Yona'),
  micah('MICAH', 'Micah', 'מיכה', 'Миха', 'Mikha'),
  nahum('NAHUM', 'Nahum', 'נחום', 'Нахум', 'Nahoum'),
  habakkuk('HABAKKUK', 'Habakkuk', 'חבקוק', 'Хавакук', '\'Havakouk'),
  zephaniah('ZEPHANIAH', 'Zephaniah', 'צפניה', 'Цфанья', 'Tsefania'),
  haggai('HAGGAI', 'Haggai', 'חגי', 'Хагай', '\'Haggaï'),
  zechariah('ZECHARIAH', 'Zechariah', 'זכריה', 'Захарья', 'Zekharia'),
  malachi('MALACHI', 'Malachi', 'מלאכי', 'Малахи', 'Malakhi'),
  ;
  final String key;   // stable identifier (matches JSON key)
  final String en;
  final String he;
  final String ru;
  final String fr;
  const TanachBook(this.key, this.en, this.he, this.ru, this.fr);

  /// Look up by English name ('II Kings', 'Isaiah', …); null if unknown.
  static TanachBook? fromEnglishName(String en) => _byEn[en];
  static final Map<String, TanachBook> _byEn =
      { for (final b in values) b.en: b };
}
