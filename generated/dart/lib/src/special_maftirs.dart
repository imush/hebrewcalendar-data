// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// The four 'Arba Parshiyot' maftirs read on specific Shabbatot
/// in Adar / Nisan.
enum SpecialMaftir {
  shekalim('Shekalim', 'שקלים', 'Шкалим', 'Chekalim'),
  zachor('Zachor', 'זכור', 'Захор', 'Zachor'),
  para('Para', 'פרה', 'Пара', 'Para'),
  hachodesh('Hachodesh', 'החודש', 'ѓаХодеш', 'Hachodech'),
  ;
  final String en;
  final String he;
  final String ru;
  final String fr;
  const SpecialMaftir(this.en, this.he, this.ru, this.fr);

  /// Look up by canonical English name (case-sensitive).
  static SpecialMaftir? fromEnglishName(String en) => _byEn[en];
  static final Map<String, SpecialMaftir> _byEn =
      { for (final m in values) m.en: m };
}
