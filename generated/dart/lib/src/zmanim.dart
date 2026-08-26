// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// Astronomical / halachic time-of-day noun labels.
/// Consumers combine these with per-repo formatting (talit/tefilin
/// selection, method-name interpolation, etc.) at render time.
enum Zman {
  dawnRavNaeh('DAWN_RAV_NAEH', 'Dawn — Rav Chaim Naeh', 'עלות השחר — הרב א״ח נאה', 'Рассвет — Рав Хаим Наэ', 'Alot Hashachar — Rav Chaim Naeh'),
  dawnSbh('DAWN_SBH', 'Dawn — Sefer Bein Hashmashot', 'עלות השחר — ספר בין השמשות', 'Рассвет — Сефер бейн ѓашмашот', 'Alot Hashachar — Sefer Bein Hashmashot'),
  sunrise('SUNRISE', 'Sunrise (Hanetz HaChama)', 'הנץ החמה', 'Восход (Ѓанец ѓаХама)', 'Lever du soleil (Hanetz HaChama)'),
  latestShema('LATEST_SHEMA', 'Latest Shema', 'סוף זמן קריאת שמע', 'Конец времени Шма', 'Dernier moment pour Shema'),
  latestShacharit('LATEST_SHACHARIT', 'Latest Shacharit', 'סוף זמן תפילת שחרית', 'Конец времени утренней молитвы', 'Dernier moment pour Shacharit'),
  eatChametz('EAT_CHAMETZ', 'Latest time to eat chometz', 'אכילת חמץ עד', 'Хамец можно есть до', 'Dernier moment pour manger le \'Hamets'),
  burnChametz('BURN_CHAMETZ', 'Biur Chometz before', 'ביעור חמץ עד', 'Хамец нужно сжечь до', 'Brûler le \'Hamets avant'),
  noon('NOON', 'Noon (Chatzot)', 'חצות היום', 'Полдень (Хацот)', 'Midi (Chatzot)'),
  minchaGedolah('MINCHA_GEDOLAH', 'Mincha Gedola', 'מנחה גדולה', 'Минха Гедола', 'Mincha Gedola'),
  minchaKetana('MINCHA_KETANA', 'Mincha Ketana', 'מנחה קטנה', 'Минха Ктана', 'Mincha Ketana'),
  plagHamincha('PLAG_HAMINCHA', 'Plag HaMincha', 'פלג המנחה', 'Плаг минха', 'Plag HaMincha'),
  sunset('SUNSET', 'Sunset (Shkiah)', 'שקיעת החמה', 'Закат (Шкия)', 'Coucher du soleil (Shkiah)'),
  nightfall('NIGHTFALL', 'Nightfall', 'כניסת הלילה', 'Выход звезд', 'Tombée de la nuit'),
  nightfallAlterRebbe('NIGHTFALL_ALTER_REBBE', 'Nightfall — Alter Rebbe', 'כניסת הלילה — אדמו"ר הזקן', 'Выход звезд — Алтер Ребе', 'Tombée de la nuit — Alter Rebbe'),
  nightfallRabbeinuTam('NIGHTFALL_RABBEINU_TAM', 'Nightfall — Rabbeinu Tam', 'כניסת הלילה — רבינו תם', 'Выход звезд — Рабейну Там', 'Tombée de la nuit — Rabbeinu Tam'),
  nightfallSbh('NIGHTFALL_SBH', 'Nightfall — SBH / Igrot Moshe', 'צאת הכוכבים — סבה״ש / אגרות משה', 'Выход звезд — СбГ / Игрот Моше', 'Nuit — SBH / Igrot Moshe'),
  nightfallMelamed('NIGHTFALL_MELAMED', 'Nightfall — Melamed Lehoil', 'צאת הכוכבים — מלמד להועיל', 'Выход звезд — Меламед Леѓоил', 'Nuit — Melamed Lehoil'),
  fastEnds('FAST_ENDS', 'Fast ends', 'סיום הצום', 'Конец поста', 'Fin du jeûne'),
  candleLighting('CANDLE_LIGHTING', 'Candle Lighting', 'הדלקת נרות', 'Зажигание свечей', 'Allumage des bougies'),
  candlesNightfall('CANDLES_NIGHTFALL', 'Light candles after', 'הדלקת נרות אחרי', 'Свечи не ранее', 'Bougies après'),
  candlesBefore('CANDLES_BEFORE', 'Light candles before', 'הדלקת נרות לפני', 'Свечи не позднее', 'Bougies avant'),
  shabbatEnds('SHABBAT_ENDS', 'Shabbat ends', 'צאת השבת', 'Исход Субботы', 'Fin du Shabbat'),
  yomTovEnds('YOM_TOV_ENDS', 'Yom Tov ends', 'מוצאי יום טוב', 'Исход праздника', 'Fin de Yom Tov'),
  ;
  final String key;   // stable identifier (matches JSON key)
  final String en;
  final String he;
  final String ru;
  final String fr;
  const Zman(this.key, this.en, this.he, this.ru, this.fr);
}
