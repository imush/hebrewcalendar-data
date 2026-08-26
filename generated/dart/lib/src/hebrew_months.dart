// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// The 12 Hebrew months plus Adar I / Adar II leap variants.
/// Callers pick the enum value with [forMonth] using the C library's
/// month index (1..13, where month 12 in a non-leap year is Adar and
/// in a leap year is Adar I, and month 13 exists only in leap years).
enum HebrewMonth {
  nisan('Nisan', 'ניסן', 'Нисан', 'Nissan'),
  iyar('Iyar', 'אייר', 'Ияр', 'Iyar'),
  sivan('Sivan', 'סיון', 'Сиван', 'Sivane'),
  tamuz('Tamuz', 'תמוז', 'Тамуз', 'Tamouz'),
  av('Av', 'אב', 'Ав', 'Av'),
  elul('Elul', 'אלול', 'Элул', 'Eloul'),
  tishrei('Tishrei', 'תשרי', 'Тишрей', 'Tichri'),
  cheshvan('Cheshvan', 'חשון', 'Хешван', 'Hechvan'),
  kislev('Kislev', 'כסלו', 'Кислев', 'Kislev'),
  tevet('Tevet', 'טבת', 'Тевет', 'Tevet'),
  shvat('Shvat', 'שבט', 'Шват', 'Chevat'),
  adar('Adar', 'אדר', 'Адар', 'Adar'),
  adarI('Adar I', 'אדר א׳', 'Адар I', 'Adar I'),
  adarIi('Adar II', 'אדר ב׳', 'Адар II', 'Adar II'),
  ;
  final String en;
  final String he;
  final String ru;
  final String fr;
  const HebrewMonth(this.en, this.he, this.ru, this.fr);

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
