// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// The 12 Hebrew months plus Adar I / Adar II leap variants.
/// Callers pick the enum value with [forMonth] using the C library's
/// month index (1..13, where month 12 in a non-leap year is Adar and
/// in a leap year is Adar I, and month 13 exists only in leap years).
enum HebrewMonth {
  nisan('NISAN', 'Nisan', 'ניסן', 'Нисан', 'Nissan'),
  iyar('IYAR', 'Iyar', 'אייר', 'Ияр', 'Iyar'),
  sivan('SIVAN', 'Sivan', 'סיון', 'Сиван', 'Sivane'),
  tamuz('TAMUZ', 'Tamuz', 'תמוז', 'Тамуз', 'Tamouz'),
  av('AV', 'Av', 'אב', 'Ав', 'Av'),
  elul('ELUL', 'Elul', 'אלול', 'Элул', 'Eloul'),
  tishrei('TISHREI', 'Tishrei', 'תשרי', 'Тишрей', 'Tichri'),
  cheshvan('CHESHVAN', 'Cheshvan', 'חשון', 'Хешван', 'Hechvan'),
  kislev('KISLEV', 'Kislev', 'כסלו', 'Кислев', 'Kislev'),
  tevet('TEVET', 'Tevet', 'טבת', 'Тевет', 'Tevet'),
  shvat('SHVAT', 'Shvat', 'שבט', 'Шват', 'Chevat'),
  adar('ADAR', 'Adar', 'אדר', 'Адар', 'Adar'),
  adarI('ADAR_I', 'Adar I', 'אדר א׳', 'Адар I', 'Adar I'),
  adarIi('ADAR_II', 'Adar II', 'אדר ב׳', 'Адар II', 'Adar II'),
  ;
  final String key;   // stable identifier (matches JSON key)
  final String en;
  final String he;
  final String ru;
  final String fr;
  const HebrewMonth(this.key, this.en, this.he, this.ru, this.fr);

  /// Resolve by (month, leap) using the C library's month indexing.
  /// month must be in 1..13; month 13 requires leap=true.
  static HebrewMonth? forMonth(int month, {required bool leap}) {
    const regular = [
      HebrewMonth.nisan,   HebrewMonth.iyar,     HebrewMonth.sivan,
      HebrewMonth.tamuz,   HebrewMonth.av,       HebrewMonth.elul,
      HebrewMonth.tishrei, HebrewMonth.cheshvan, HebrewMonth.kislev,
      HebrewMonth.tevet,   HebrewMonth.shvat,
    ];
    if (month >= 1 && month <= 11) return regular[month - 1];
    if (month == 12) return leap ? HebrewMonth.adarI : HebrewMonth.adar;
    if (month == 13 && leap) return HebrewMonth.adarIi;
    return null;
  }
}
