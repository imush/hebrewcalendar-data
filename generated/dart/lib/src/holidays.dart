// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// Type-safe enum of holiday categories. Each value carries the
/// canonical SCREAMING_SNAKE_CASE identifier and 4-language display
/// strings; consumers switch/compare on the enum value.
enum HolidayKey {
  nisan11('NISAN_11', '11 Nisan', 'י״א ניסן', '11 нисана', '11 Nissan'),
  erevPesach('EREV_PESACH', 'Erev Pesach', 'ערב פסח', 'Эрев Песах', 'Erev Pessa\'h'),
  pesach('PESACH', 'Pesach', 'פסח', 'Песах', 'Pessa\'h'),
  cholHamoedPesach('CHOL_HAMOED_PESACH', 'Chol Hamoed Pesach', 'חול המועד', 'Хол ѓаМоэд', '\'Hol Hamoed'),
  pesachSheni('PESACH_SHENI', 'Pesach Sheni', 'פסח שני', 'Песах Шени', 'Pessa\'h Chéni'),
  lagBaomer('LAG_BAOMER', 'Lag Baomer', 'ל״ג בעומר', 'Лаг ба-Омер', 'Lag Baomer'),
  shavuot('SHAVUOT', 'Shavuot', 'שבועות', 'Шавуот', 'Chavouot'),
  tamuz3('TAMUZ_3', '3 Tamuz', 'ג׳ תמוז', '3 тамуза', '3 Tamouz'),
  tamuz12('TAMUZ_12', '12 Tamuz', 'י״ב תמוז', '12 тамуза', '12 Tamouz'),
  tamuz13('TAMUZ_13', '13 Tamuz', 'י״ג תמוז', '13 тамуза', '13 Tamouz'),
  fast17Tamuz('FAST_17_TAMUZ', 'Fast of 17 Tamuz', 'שבעה עשר בתמוז', 'Пост 17 тамуза', 'Dix-sept Tamouz'),
  fast9Av('FAST_9_AV', 'Fast of 9 Av', 'תשעה באב', 'Пост 9 ава', 'Ticha Béav'),
  chaiElul('CHAI_ELUL', 'Chai Elul', 'ח״י אלול', 'Хай Элул', 'Haï Eloul'),
  roshHashana('ROSH_HASHANA', 'Rosh Hashana', 'ראש השנה', 'Рош ѓаШана', 'Roch Hachana'),
  roshChodesh('ROSH_CHODESH', 'Rosh Chodesh', 'ראש חודש', 'Рош Ходеш', 'Roch \'Hodech'),
  tzomGedalia('TZOM_GEDALIA', 'Tzom Gedalia', 'צום גדליה', 'Цом Гедалья', 'Tssom Guédalia'),
  erevYomKippur('EREV_YOM_KIPPUR', 'Erev Yom Kippur', 'ערב יום כיפור', 'Эрев Йом-Кипур', 'Erev Yom Kippour'),
  yomKippur('YOM_KIPPUR', 'Yom Kippur', 'יום כיפור', 'Йом-Кипур', 'Yom Kippour'),
  sukkot('SUKKOT', 'Sukkot', 'סוכות', 'Суккот', 'Souccot'),
  cholHamoedSukkot('CHOL_HAMOED_SUKKOT', 'Chol Hamoed Sukkot', 'חול המועד', 'Хол ѓаМоэд', '\'Hol Hamoed'),
  hoshanaRabba('HOSHANA_RABBA', 'Hoshana Rabba', 'הושענא רבא', 'Ѓошана Рабба', 'Hoch\'ana Rabba'),
  shminiAtzeret('SHMINI_ATZERET', 'Shemini Atzeret', 'שמיני עצרת', 'Шмини Ацерет', 'Chemini Atseret'),
  simchatTorah('SIMCHAT_TORAH', 'Simchat Torah', 'שמחת תורה', 'Симхат Тора', 'Sim\'hat Torah'),
  nineteenthKislev('NINETEENTH_KISLEV', '19 Kislev', 'י״ט כסלו', '19 кислева', '19 Kislev'),
  chanukah('CHANUKAH', 'Chanukah', 'חנוכה', 'Ханука', 'Hanouccah'),
  tenthTevet('TENTH_TEVET', '10 Tevet', 'עשרה בטבת', 'Пост 10 тевета', 'Acara Betevet'),
  yudShvat('YUD_SHVAT', '10 Shvat', 'י׳ שבט', '10 швата', '10 Chevat'),
  tuBeshvat('TU_BESHVAT', 'Tu Bishvat', 'ט״ו בשבט', 'Ту би-Шват', 'Tou Bichevat'),
  purimKatan('PURIM_KATAN', 'Purim Katan', 'פורים קטן', 'Пурим Катан', 'Pourim Katan'),
  taanitEsther('TAANIT_ESTHER', 'Fast of Esther', 'תענית אסתר', 'Пост Эстер', 'Ta\'anit Esther'),
  purim('PURIM', 'Purim', 'פורים', 'Пурим', 'Pourim'),
  shushanPurim('SHUSHAN_PURIM', 'Shushan Purim', 'שושן פורים', 'Шушан Пурим', 'Choushan Pourim'),
  shabbatShekalim('SHABBAT_SHEKALIM', 'Shabbat Shekalim', 'שבת שקלים', 'Шаббат Шкалим', 'Chabbat Chekalim'),
  shabbatZachor('SHABBAT_ZACHOR', 'Shabbat Zachor', 'שבת זכור', 'Шаббат Захор', 'Chabbat Zachor'),
  shabbatPara('SHABBAT_PARA', 'Shabbat Para', 'שבת פרה', 'Шаббат Пара', 'Chabbat Para'),
  shabbatHachodesh('SHABBAT_HACHODESH', 'Shabbat Hachodesh', 'שבת החודש', 'Шаббат ѓаХодеш', 'Chabbat HaChodech'),
  shabbatHagadol('SHABBAT_HAGADOL', 'Shabbat Hagadol', 'שבת הגדול', 'Шаббат ѓаГадол', 'Chabbat Hagadol'),
  shabbatChazon('SHABBAT_CHAZON', 'Shabbat Chazon', 'שבת חזון', 'Шаббат Хазон', 'Chabbat \'Hazon'),
  shabbatNachamu('SHABBAT_NACHAMU', 'Shabbat Nachamu', 'שבת נחמו', 'Шаббат Нахаму', 'Chabbat Nahamou'),
  shabbatShuvah('SHABBAT_SHUVAH', 'Shabbat Shuvah', 'שבת שובה', 'Шаббат Шува', 'Chabbat Chouva'),
  shabbatShirah('SHABBAT_SHIRAH', 'Shabbat Shirah', 'שבת שירה', 'Шаббат Шира', 'Chabbat Chirah'),
  shabbatMevarchim('SHABBAT_MEVARCHIM', 'Shabbat Mevarchim', 'שבת מברכים', 'Шаббат Мевархим', 'Chabbat Mevarchim'),
  eruvTavshilin('ERUV_TAVSHILIN', 'Eruv Tavshilin', 'ערוב תבשילין', 'Эрув тавшилин', 'Érouv Tavchilin'),
  talUmatar('TAL_UMATAR', 'Tal Umatar', 'ותן טל ומטר', 'Тал уМатар', 'Tal Umatar'),
  birkatHachama('BIRKAT_HACHAMA', 'Birkat HaChama', 'ברכת החמה', 'Биркат ѓаХама', 'Birkat HaChama'),
  ;
  final String key;   // stable identifier (matches JSON key)
  final String en;
  final String he;
  final String ru;
  final String fr;
  const HolidayKey(this.key, this.en, this.he, this.ru, this.fr);
}

/// Look up a [HolidayKey] by the integer sd value returned from
/// [hc.getSpecialDays]. Returns null for HC_SD_NONE (0) and any
/// sd not classified in holidays.json (validator prevents that).
const Map<int, HolidayKey> hcSdToHoliday = {
  1: HolidayKey.nisan11,  // NISAN_11
  2: HolidayKey.erevPesach,  // EREV_PESACH
  3: HolidayKey.pesach,  // PESACH_1
  4: HolidayKey.pesach,  // PESACH_2_C
  5: HolidayKey.pesach,  // PESACH_7
  6: HolidayKey.pesach,  // PESACH_LAST_C
  7: HolidayKey.cholHamoedPesach,  // CHOL_HAMOED_PESACH_1_I
  8: HolidayKey.cholHamoedPesach,  // CHOL_HAMOED_PESACH_2_I
  9: HolidayKey.cholHamoedPesach,  // CHOL_HAMOED_PESACH_3_I
  10: HolidayKey.cholHamoedPesach,  // CHOL_HAMOED_PESACH_4_I
  11: HolidayKey.cholHamoedPesach,  // CHOL_HAMOED_PESACH_5_I
  12: HolidayKey.cholHamoedPesach,  // CHOL_HAMOED_PESACH_1_C
  13: HolidayKey.cholHamoedPesach,  // CHOL_HAMOED_PESACH_2_C
  14: HolidayKey.cholHamoedPesach,  // CHOL_HAMOED_PESACH_3_C
  15: HolidayKey.cholHamoedPesach,  // CHOL_HAMOED_PESACH_4_C
  16: HolidayKey.pesachSheni,  // PESACH_SHENI
  17: HolidayKey.lagBaomer,  // LAG_BAOMER
  18: HolidayKey.shavuot,  // SHAVUOT
  19: HolidayKey.shavuot,  // SHAVUOT_2_C
  20: HolidayKey.tamuz3,  // TAMUZ_3
  21: HolidayKey.tamuz12,  // TAMUZ_12
  22: HolidayKey.tamuz13,  // TAMUZ_13
  23: HolidayKey.fast17Tamuz,  // FAST_17_TAMUZ
  24: HolidayKey.fast9Av,  // FAST_9_AV
  25: HolidayKey.chaiElul,  // CHAI_ELUL
  26: HolidayKey.roshHashana,  // ROSH_HASHANA_1
  27: HolidayKey.roshHashana,  // ROSH_HASHANA_2
  28: HolidayKey.roshChodesh,  // ROSH_CHODESH
  29: HolidayKey.tzomGedalia,  // TZOM_GEDALIA
  30: HolidayKey.erevYomKippur,  // EREV_YOM_KIPPUR
  31: HolidayKey.yomKippur,  // YOM_KIPPUR
  32: HolidayKey.sukkot,  // SUKKOT_1
  33: HolidayKey.sukkot,  // SUKKOT_2_C
  34: HolidayKey.cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_1_I
  35: HolidayKey.cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_2_I
  36: HolidayKey.cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_3_I
  37: HolidayKey.cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_4_I
  38: HolidayKey.cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_5_I
  39: HolidayKey.cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_1_C
  40: HolidayKey.cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_2_C
  41: HolidayKey.cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_3_C
  42: HolidayKey.cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_4_C
  43: HolidayKey.hoshanaRabba,  // HOSHANA_RABBA
  44: HolidayKey.shminiAtzeret,  // SHMINI_ATZERET_C
  45: HolidayKey.simchatTorah,  // SIMCHAT_TORAH_C
  46: HolidayKey.simchatTorah,  // SIMCHAT_TORAH_I
  47: HolidayKey.nineteenthKislev,  // NINETEENTH_KISLEV
  48: HolidayKey.chanukah,  // CHANUKAH_1
  49: HolidayKey.chanukah,  // CHANUKAH_2
  50: HolidayKey.chanukah,  // CHANUKAH_3
  51: HolidayKey.chanukah,  // CHANUKAH_4
  52: HolidayKey.chanukah,  // CHANUKAH_5
  53: HolidayKey.chanukah,  // CHANUKAH_6
  54: HolidayKey.chanukah,  // CHANUKAH_7
  55: HolidayKey.chanukah,  // CHANUKAH_8
  56: HolidayKey.tenthTevet,  // TENTH_TEVET
  57: HolidayKey.yudShvat,  // YUD_SHVAT
  58: HolidayKey.tuBeshvat,  // TU_BESHVAT
  59: HolidayKey.purimKatan,  // PURIM_KATAN
  60: HolidayKey.taanitEsther,  // TAANIT_ESTHER
  61: HolidayKey.purim,  // PURIM
  62: HolidayKey.shushanPurim,  // SHUSHAN_PURIM
  63: HolidayKey.shabbatShekalim,  // SHABBAT_SHEKALIM
  64: HolidayKey.shabbatZachor,  // SHABBAT_ZACHOR
  65: HolidayKey.shabbatPara,  // SHABBAT_PARA
  66: HolidayKey.shabbatHachodesh,  // SHABBAT_HACHODESH
  67: HolidayKey.shabbatHagadol,  // SHABBAT_HAGADOL
  68: HolidayKey.shabbatChazon,  // SHABBAT_CHAZON
  69: HolidayKey.shabbatNachamu,  // SHABBAT_NACHAMU
  70: HolidayKey.shabbatShuvah,  // SHABBAT_SHUVAH
  71: HolidayKey.shabbatShirah,  // SHABBAT_SHIRAH
  72: HolidayKey.shabbatMevarchim,  // SHABBAT_MEVARCHIM
  73: HolidayKey.eruvTavshilin,  // ERUV_TAVSHILIN_I
  74: HolidayKey.eruvTavshilin,  // ERUV_TAVSHILIN_C
  75: HolidayKey.talUmatar,  // TAL_UMATAR_I
  76: HolidayKey.talUmatar,  // TAL_UMATAR_C
  77: HolidayKey.birkatHachama,  // BIRKAT_HACHAMA
};
