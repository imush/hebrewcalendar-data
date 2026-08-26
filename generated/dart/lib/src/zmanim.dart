// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// Astronomical / halachic time-of-day noun labels.
/// Consumers combine these with per-repo formatting (talit/tefilin
/// selection, method-name interpolation, etc.) at render time.
enum Zman {
  dawnRavNaeh('Dawn — Rav Chaim Naeh', 'עלות השחר — הרב א״ח נאה', 'Рассвет — Рав Хаим Наэ', 'Alot Hashachar — Rav Chaim Naeh'),
  dawnSbh('Dawn — Sefer Bein Hashmashot', 'עלות השחר — ספר בין השמשות', 'Рассвет — Сефер бейн ѓашмашот', 'Alot Hashachar — Sefer Bein Hashmashot'),
  sunrise('Sunrise (Hanetz HaChama)', 'הנץ החמה', 'Восход (Ѓанец ѓаХама)', 'Lever du soleil (Hanetz HaChama)'),
  latestShema('Latest Shema', 'סוף זמן קריאת שמע', 'Конец времени Шма', 'Dernier moment pour Shema'),
  latestShacharit('Latest Shacharit', 'סוף זמן תפילת שחרית', 'Конец времени утренней молитвы', 'Dernier moment pour Shacharit'),
  eatChametz('Latest time to eat chometz', 'אכילת חמץ עד', 'Хамец можно есть до', 'Dernier moment pour manger le \'Hamets'),
  burnChametz('Biur Chometz before', 'ביעור חמץ עד', 'Хамец нужно сжечь до', 'Brûler le \'Hamets avant'),
  noon('Noon (Chatzot)', 'חצות היום', 'Полдень (Хацот)', 'Midi (Chatzot)'),
  minchaGedolah('Mincha Gedola', 'מנחה גדולה', 'Минха Гедола', 'Mincha Gedola'),
  minchaKetana('Mincha Ketana', 'מנחה קטנה', 'Минха Ктана', 'Mincha Ketana'),
  plagHamincha('Plag HaMincha', 'פלג המנחה', 'Плаг минха', 'Plag HaMincha'),
  sunset('Sunset (Shkiah)', 'שקיעת החמה', 'Закат (Шкия)', 'Coucher du soleil (Shkiah)'),
  nightfall('Nightfall', 'כניסת הלילה', 'Выход звезд', 'Tombée de la nuit'),
  nightfallAlterRebbe('Nightfall — Alter Rebbe', 'כניסת הלילה — אדמו"ר הזקן', 'Выход звезд — Алтер Ребе', 'Tombée de la nuit — Alter Rebbe'),
  nightfallRabbeinuTam('Nightfall — Rabbeinu Tam', 'כניסת הלילה — רבינו תם', 'Выход звезд — Рабейну Там', 'Tombée de la nuit — Rabbeinu Tam'),
  nightfallSbh('Nightfall — SBH / Igrot Moshe', 'צאת הכוכבים — סבה״ש / אגרות משה', 'Выход звезд — СбГ / Игрот Моше', 'Nuit — SBH / Igrot Moshe'),
  nightfallMelamed('Nightfall — Melamed Lehoil', 'צאת הכוכבים — מלמד להועיל', 'Выход звезд — Меламед Леѓоил', 'Nuit — Melamed Lehoil'),
  fastEnds('Fast ends', 'סיום הצום', 'Конец поста', 'Fin du jeûne'),
  candleLighting('Candle Lighting', 'הדלקת נרות', 'Зажигание свечей', 'Allumage des bougies'),
  candlesNightfall('Light candles after', 'הדלקת נרות אחרי', 'Свечи не ранее', 'Bougies après'),
  candlesBefore('Light candles before', 'הדלקת נרות לפני', 'Свечи не позднее', 'Bougies avant'),
  shabbatEnds('Shabbat ends', 'צאת השבת', 'Исход Субботы', 'Fin du Shabbat'),
  yomTovEnds('Yom Tov ends', 'מוצאי יום טוב', 'Исход праздника', 'Fin de Yom Tov'),
  ;
  final String en;
  final String he;
  final String ru;
  final String fr;
  const Zman(this.en, this.he, this.ru, this.fr);
}
