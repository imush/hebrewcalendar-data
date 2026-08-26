/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

package net.hebrewcalendar.data;

/** Zmanim labels for the halachic times displayed by every consumer. */
public enum Zman {
    DAWN_RAV_NAEH("DAWN_RAV_NAEH", "Dawn — Rav Chaim Naeh", "עלות השחר — הרב א״ח נאה", "Рассвет — Рав Хаим Наэ", "Alot Hashachar — Rav Chaim Naeh"),
    DAWN_SBH("DAWN_SBH", "Dawn — Sefer Bein Hashmashot", "עלות השחר — ספר בין השמשות", "Рассвет — Сефер бейн ѓашмашот", "Alot Hashachar — Sefer Bein Hashmashot"),
    SUNRISE("SUNRISE", "Sunrise (Hanetz HaChama)", "הנץ החמה", "Восход (Ѓанец ѓаХама)", "Lever du soleil (Hanetz HaChama)"),
    LATEST_SHEMA("LATEST_SHEMA", "Latest Shema", "סוף זמן קריאת שמע", "Конец времени Шма", "Dernier moment pour Shema"),
    LATEST_SHACHARIT("LATEST_SHACHARIT", "Latest Shacharit", "סוף זמן תפילת שחרית", "Конец времени утренней молитвы", "Dernier moment pour Shacharit"),
    EAT_CHAMETZ("EAT_CHAMETZ", "Latest time to eat chometz", "אכילת חמץ עד", "Хамец можно есть до", "Dernier moment pour manger le 'Hamets"),
    BURN_CHAMETZ("BURN_CHAMETZ", "Biur Chometz before", "ביעור חמץ עד", "Хамец нужно сжечь до", "Brûler le 'Hamets avant"),
    NOON("NOON", "Noon (Chatzot)", "חצות היום", "Полдень (Хацот)", "Midi (Chatzot)"),
    MINCHA_GEDOLAH("MINCHA_GEDOLAH", "Mincha Gedola", "מנחה גדולה", "Минха Гедола", "Mincha Gedola"),
    MINCHA_KETANA("MINCHA_KETANA", "Mincha Ketana", "מנחה קטנה", "Минха Ктана", "Mincha Ketana"),
    PLAG_HAMINCHA("PLAG_HAMINCHA", "Plag HaMincha", "פלג המנחה", "Плаг минха", "Plag HaMincha"),
    SUNSET("SUNSET", "Sunset (Shkiah)", "שקיעת החמה", "Закат (Шкия)", "Coucher du soleil (Shkiah)"),
    NIGHTFALL("NIGHTFALL", "Nightfall", "כניסת הלילה", "Выход звезд", "Tombée de la nuit"),
    NIGHTFALL_ALTER_REBBE("NIGHTFALL_ALTER_REBBE", "Nightfall — Alter Rebbe", "כניסת הלילה — אדמו\"ר הזקן", "Выход звезд — Алтер Ребе", "Tombée de la nuit — Alter Rebbe"),
    NIGHTFALL_RABBEINU_TAM("NIGHTFALL_RABBEINU_TAM", "Nightfall — Rabbeinu Tam", "כניסת הלילה — רבינו תם", "Выход звезд — Рабейну Там", "Tombée de la nuit — Rabbeinu Tam"),
    NIGHTFALL_SBH("NIGHTFALL_SBH", "Nightfall — SBH / Igrot Moshe", "צאת הכוכבים — סבה״ש / אגרות משה", "Выход звезд — СбГ / Игрот Моше", "Nuit — SBH / Igrot Moshe"),
    NIGHTFALL_MELAMED("NIGHTFALL_MELAMED", "Nightfall — Melamed Lehoil", "צאת הכוכבים — מלמד להועיל", "Выход звезд — Меламед Леѓоил", "Nuit — Melamed Lehoil"),
    FAST_ENDS("FAST_ENDS", "Fast ends", "סיום הצום", "Конец поста", "Fin du jeûne"),
    CANDLE_LIGHTING("CANDLE_LIGHTING", "Candle Lighting", "הדלקת נרות", "Зажигание свечей", "Allumage des bougies"),
    CANDLES_NIGHTFALL("CANDLES_NIGHTFALL", "Light candles after", "הדלקת נרות אחרי", "Свечи не ранее", "Bougies après"),
    CANDLES_BEFORE("CANDLES_BEFORE", "Light candles before", "הדלקת נרות לפני", "Свечи не позднее", "Bougies avant"),
    SHABBAT_ENDS("SHABBAT_ENDS", "Shabbat ends", "צאת השבת", "Исход Субботы", "Fin du Shabbat"),
    YOM_TOV_ENDS("YOM_TOV_ENDS", "Yom Tov ends", "מוצאי יום טוב", "Исход праздника", "Fin de Yom Tov");

    public final String key;
    public final String en;
    public final String he;
    public final String ru;
    public final String fr;

    Zman(String key, String en, String he, String ru, String fr) {
        this.key = key;
        this.en = en;
        this.he = he;
        this.ru = ru;
        this.fr = fr;
    }
}
