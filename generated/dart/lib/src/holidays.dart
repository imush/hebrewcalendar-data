// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

part of '../hebrewcalendar_data.dart';

/// A holiday / special-day category with 4-language display strings.
/// A single Holiday may correspond to multiple HC_SD_* enum values
/// (Chanukah days 1..8, Chol Hamoed days, etc.); use [hcSdToHoliday]
/// to look up by the integer sd returned from getSpecialDays().
class Holiday {
  final String key;   // stable SCREAMING_SNAKE_CASE
  final String en;
  final String he;
  final String ru;
  final String fr;
  const Holiday(this.key, this.en, this.he, this.ru, this.fr);
}

// Instances (const) for the reverse map below.
class _H {
  static const _nisan11 = Holiday('NISAN_11', '11 Nisan', 'י״א ניסן', '11 нисана', '11 Nissan');
  static const _erevPesach = Holiday('EREV_PESACH', 'Erev Pesach', 'ערב פסח', 'Эрев Песах', 'Erev Pessa\'h');
  static const _pesach = Holiday('PESACH', 'Pesach', 'פסח', 'Песах', 'Pessa\'h');
  static const _cholHamoedPesach = Holiday('CHOL_HAMOED_PESACH', 'Chol Hamoed Pesach', 'חול המועד', 'Хол ѓаМоэд', '\'Hol Hamoed');
  static const _pesachSheni = Holiday('PESACH_SHENI', 'Pesach Sheni', 'פסח שני', 'Песах Шени', 'Pessa\'h Chéni');
  static const _lagBaomer = Holiday('LAG_BAOMER', 'Lag Baomer', 'ל״ג בעומר', 'Лаг ба-Омер', 'Lag Baomer');
  static const _shavuot = Holiday('SHAVUOT', 'Shavuot', 'שבועות', 'Шавуот', 'Chavouot');
  static const _tamuz3 = Holiday('TAMUZ_3', '3 Tamuz', 'ג׳ תמוז', '3 тамуза', '3 Tamouz');
  static const _tamuz12 = Holiday('TAMUZ_12', '12 Tamuz', 'י״ב תמוז', '12 тамуза', '12 Tamouz');
  static const _tamuz13 = Holiday('TAMUZ_13', '13 Tamuz', 'י״ג תמוז', '13 тамуза', '13 Tamouz');
  static const _fast17Tamuz = Holiday('FAST_17_TAMUZ', 'Fast of 17 Tamuz', 'שבעה עשר בתמוז', 'Пост 17 тамуза', 'Dix-sept Tamouz');
  static const _fast9Av = Holiday('FAST_9_AV', 'Fast of 9 Av', 'תשעה באב', 'Пост 9 ава', 'Ticha Béav');
  static const _chaiElul = Holiday('CHAI_ELUL', 'Chai Elul', 'ח״י אלול', 'Хай Элул', 'Haï Eloul');
  static const _roshHashana = Holiday('ROSH_HASHANA', 'Rosh Hashana', 'ראש השנה', 'Рош ѓаШана', 'Roch Hachana');
  static const _roshChodesh = Holiday('ROSH_CHODESH', 'Rosh Chodesh', 'ראש חודש', 'Рош Ходеш', 'Roch \'Hodech');
  static const _tzomGedalia = Holiday('TZOM_GEDALIA', 'Tzom Gedalia', 'צום גדליה', 'Цом Гедалья', 'Tssom Guédalia');
  static const _erevYomKippur = Holiday('EREV_YOM_KIPPUR', 'Erev Yom Kippur', 'ערב יום כיפור', 'Эрев Йом-Кипур', 'Erev Yom Kippour');
  static const _yomKippur = Holiday('YOM_KIPPUR', 'Yom Kippur', 'יום כיפור', 'Йом-Кипур', 'Yom Kippour');
  static const _sukkot = Holiday('SUKKOT', 'Sukkot', 'סוכות', 'Суккот', 'Souccot');
  static const _cholHamoedSukkot = Holiday('CHOL_HAMOED_SUKKOT', 'Chol Hamoed Sukkot', 'חול המועד', 'Хол ѓаМоэд', '\'Hol Hamoed');
  static const _hoshanaRabba = Holiday('HOSHANA_RABBA', 'Hoshana Rabba', 'הושענא רבא', 'Ѓошана Рабба', 'Hoch\'ana Rabba');
  static const _shminiAtzeret = Holiday('SHMINI_ATZERET', 'Shemini Atzeret', 'שמיני עצרת', 'Шмини Ацерет', 'Chemini Atseret');
  static const _simchatTorah = Holiday('SIMCHAT_TORAH', 'Simchat Torah', 'שמחת תורה', 'Симхат Тора', 'Sim\'hat Torah');
  static const _nineteenthKislev = Holiday('NINETEENTH_KISLEV', '19 Kislev', 'י״ט כסלו', '19 кислева', '19 Kislev');
  static const _chanukah = Holiday('CHANUKAH', 'Chanukah', 'חנוכה', 'Ханука', 'Hanouccah');
  static const _tenthTevet = Holiday('TENTH_TEVET', '10 Tevet', 'עשרה בטבת', 'Пост 10 тевета', 'Acara Betevet');
  static const _yudShvat = Holiday('YUD_SHVAT', '10 Shvat', 'י׳ שבט', '10 швата', '10 Chevat');
  static const _tuBeshvat = Holiday('TU_BESHVAT', 'Tu Bishvat', 'ט״ו בשבט', 'Ту би-Шват', 'Tou Bichevat');
  static const _purimKatan = Holiday('PURIM_KATAN', 'Purim Katan', 'פורים קטן', 'Пурим Катан', 'Pourim Katan');
  static const _taanitEsther = Holiday('TAANIT_ESTHER', 'Fast of Esther', 'תענית אסתר', 'Пост Эстер', 'Ta\'anit Esther');
  static const _purim = Holiday('PURIM', 'Purim', 'פורים', 'Пурим', 'Pourim');
  static const _shushanPurim = Holiday('SHUSHAN_PURIM', 'Shushan Purim', 'שושן פורים', 'Шушан Пурим', 'Choushan Pourim');
  static const _shabbatShekalim = Holiday('SHABBAT_SHEKALIM', 'Shabbat Shekalim', 'שבת שקלים', 'Шаббат Шкалим', 'Chabbat Chekalim');
  static const _shabbatZachor = Holiday('SHABBAT_ZACHOR', 'Shabbat Zachor', 'שבת זכור', 'Шаббат Захор', 'Chabbat Zachor');
  static const _shabbatPara = Holiday('SHABBAT_PARA', 'Shabbat Para', 'שבת פרה', 'Шаббат Пара', 'Chabbat Para');
  static const _shabbatHachodesh = Holiday('SHABBAT_HACHODESH', 'Shabbat Hachodesh', 'שבת החודש', 'Шаббат ѓаХодеш', 'Chabbat HaChodech');
  static const _shabbatHagadol = Holiday('SHABBAT_HAGADOL', 'Shabbat Hagadol', 'שבת הגדול', 'Шаббат ѓаГадол', 'Chabbat Hagadol');
  static const _shabbatChazon = Holiday('SHABBAT_CHAZON', 'Shabbat Chazon', 'שבת חזון', 'Шаббат Хазон', 'Chabbat \'Hazon');
  static const _shabbatNachamu = Holiday('SHABBAT_NACHAMU', 'Shabbat Nachamu', 'שבת נחמו', 'Шаббат Нахаму', 'Chabbat Nahamou');
  static const _shabbatShuvah = Holiday('SHABBAT_SHUVAH', 'Shabbat Shuvah', 'שבת שובה', 'Шаббат Шува', 'Chabbat Chouva');
  static const _shabbatShirah = Holiday('SHABBAT_SHIRAH', 'Shabbat Shirah', 'שבת שירה', 'Шаббат Шира', 'Chabbat Chirah');
  static const _shabbatMevarchim = Holiday('SHABBAT_MEVARCHIM', 'Shabbat Mevarchim', 'שבת מברכים', 'Шаббат Мевархим', 'Chabbat Mevarchim');
  static const _eruvTavshilin = Holiday('ERUV_TAVSHILIN', 'Eruv Tavshilin', 'ערוב תבשילין', 'Эрув тавшилин', 'Érouv Tavchilin');
  static const _talUmatar = Holiday('TAL_UMATAR', 'Tal Umatar', 'ותן טל ומטר', 'Тал уМатар', 'Tal Umatar');
  static const _birkatHachama = Holiday('BIRKAT_HACHAMA', 'Birkat HaChama', 'ברכת החמה', 'Биркат ѓаХама', 'Birkat HaChama');
}

/// Look up a Holiday by the integer sd value returned from
/// [hc.getSpecialDays]. Returns null for HC_SD_NONE (0) and any
/// sd not classified in holidays.json (validator prevents that).
const Map<int, Holiday> hcSdToHoliday = {
  1: _H._nisan11,  // NISAN_11
  2: _H._erevPesach,  // EREV_PESACH
  3: _H._pesach,  // PESACH_1
  4: _H._pesach,  // PESACH_2_C
  5: _H._pesach,  // PESACH_7
  6: _H._pesach,  // PESACH_LAST_C
  7: _H._cholHamoedPesach,  // CHOL_HAMOED_PESACH_1_I
  8: _H._cholHamoedPesach,  // CHOL_HAMOED_PESACH_2_I
  9: _H._cholHamoedPesach,  // CHOL_HAMOED_PESACH_3_I
  10: _H._cholHamoedPesach,  // CHOL_HAMOED_PESACH_4_I
  11: _H._cholHamoedPesach,  // CHOL_HAMOED_PESACH_5_I
  12: _H._cholHamoedPesach,  // CHOL_HAMOED_PESACH_1_C
  13: _H._cholHamoedPesach,  // CHOL_HAMOED_PESACH_2_C
  14: _H._cholHamoedPesach,  // CHOL_HAMOED_PESACH_3_C
  15: _H._cholHamoedPesach,  // CHOL_HAMOED_PESACH_4_C
  16: _H._pesachSheni,  // PESACH_SHENI
  17: _H._lagBaomer,  // LAG_BAOMER
  18: _H._shavuot,  // SHAVUOT
  19: _H._shavuot,  // SHAVUOT_2_C
  20: _H._tamuz3,  // TAMUZ_3
  21: _H._tamuz12,  // TAMUZ_12
  22: _H._tamuz13,  // TAMUZ_13
  23: _H._fast17Tamuz,  // FAST_17_TAMUZ
  24: _H._fast9Av,  // FAST_9_AV
  25: _H._chaiElul,  // CHAI_ELUL
  26: _H._roshHashana,  // ROSH_HASHANA_1
  27: _H._roshHashana,  // ROSH_HASHANA_2
  28: _H._roshChodesh,  // ROSH_CHODESH
  29: _H._tzomGedalia,  // TZOM_GEDALIA
  30: _H._erevYomKippur,  // EREV_YOM_KIPPUR
  31: _H._yomKippur,  // YOM_KIPPUR
  32: _H._sukkot,  // SUKKOT_1
  33: _H._sukkot,  // SUKKOT_2_C
  34: _H._cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_1_I
  35: _H._cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_2_I
  36: _H._cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_3_I
  37: _H._cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_4_I
  38: _H._cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_5_I
  39: _H._cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_1_C
  40: _H._cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_2_C
  41: _H._cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_3_C
  42: _H._cholHamoedSukkot,  // CHOL_HAMOED_SUKKOT_4_C
  43: _H._hoshanaRabba,  // HOSHANA_RABBA
  44: _H._shminiAtzeret,  // SHMINI_ATZERET_C
  45: _H._simchatTorah,  // SIMCHAT_TORAH_C
  46: _H._simchatTorah,  // SIMCHAT_TORAH_I
  47: _H._nineteenthKislev,  // NINETEENTH_KISLEV
  48: _H._chanukah,  // CHANUKAH_1
  49: _H._chanukah,  // CHANUKAH_2
  50: _H._chanukah,  // CHANUKAH_3
  51: _H._chanukah,  // CHANUKAH_4
  52: _H._chanukah,  // CHANUKAH_5
  53: _H._chanukah,  // CHANUKAH_6
  54: _H._chanukah,  // CHANUKAH_7
  55: _H._chanukah,  // CHANUKAH_8
  56: _H._tenthTevet,  // TENTH_TEVET
  57: _H._yudShvat,  // YUD_SHVAT
  58: _H._tuBeshvat,  // TU_BESHVAT
  59: _H._purimKatan,  // PURIM_KATAN
  60: _H._taanitEsther,  // TAANIT_ESTHER
  61: _H._purim,  // PURIM
  62: _H._shushanPurim,  // SHUSHAN_PURIM
  63: _H._shabbatShekalim,  // SHABBAT_SHEKALIM
  64: _H._shabbatZachor,  // SHABBAT_ZACHOR
  65: _H._shabbatPara,  // SHABBAT_PARA
  66: _H._shabbatHachodesh,  // SHABBAT_HACHODESH
  67: _H._shabbatHagadol,  // SHABBAT_HAGADOL
  68: _H._shabbatChazon,  // SHABBAT_CHAZON
  69: _H._shabbatNachamu,  // SHABBAT_NACHAMU
  70: _H._shabbatShuvah,  // SHABBAT_SHUVAH
  71: _H._shabbatShirah,  // SHABBAT_SHIRAH
  72: _H._shabbatMevarchim,  // SHABBAT_MEVARCHIM
  73: _H._eruvTavshilin,  // ERUV_TAVSHILIN_I
  74: _H._eruvTavshilin,  // ERUV_TAVSHILIN_C
  75: _H._talUmatar,  // TAL_UMATAR_I
  76: _H._talUmatar,  // TAL_UMATAR_C
  77: _H._birkatHachama,  // BIRKAT_HACHAMA
};
