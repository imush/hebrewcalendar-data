/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

package net.hebrewcalendar.data;

import java.time.LocalDate;

/** Daf Yomi Bavli cycle: 40 tractates + cycle boundary constants. */
public final class DafYomi {
    private DafYomi() {}

    public static final class Tractate {
        public final String key, en, he, ru, fr;
        public final int lastDaf, oldLastDaf, dafOffset;
        public final boolean amudAOnly;
        public Tractate(String key, String en, String he, String ru, String fr,
                        int lastDaf, int oldLastDaf, int dafOffset, boolean amudAOnly) {
            this.key = key; this.en = en; this.he = he; this.ru = ru; this.fr = fr;
            this.lastDaf = lastDaf; this.oldLastDaf = oldLastDaf;
            this.dafOffset = dafOffset; this.amudAOnly = amudAOnly;
        }
    }

    public static final LocalDate OLD_START      = LocalDate.of(1923, 9, 11);
    public static final LocalDate NEW_START      = LocalDate.of(1975, 6, 24);
    public static final int      OLD_CYCLE_DAYS  = 2702;
    public static final int      NEW_CYCLE_DAYS  = 2711;
    public static final int      FIRST_NEW_CYCLE = 8;

    public static final Tractate[] TRACTATES = {
        new Tractate("BERAKHOT", "Berakhot", "ברכות", "Брахот", "Berakhot", 64, 64, 0, false),
        new Tractate("SHABBAT", "Shabbat", "שבת", "Шаббат", "Chabbat", 157, 157, 0, false),
        new Tractate("ERUVIN", "Eruvin", "עירובין", "Эйрувин", "Érouvin", 105, 105, 0, false),
        new Tractate("PESACHIM", "Pesachim", "פסחים", "Псахим", "Pessa'him", 121, 121, 0, false),
        new Tractate("SHEKALIM", "Shekalim", "שקלים", "Шкалим", "Chekalim", 22, 13, 0, false),
        new Tractate("YOMA", "Yoma", "יומא", "Йома", "Yoma", 88, 88, 0, false),
        new Tractate("SUKKAH", "Sukkah", "סוכה", "Сукка", "Soucca", 56, 56, 0, false),
        new Tractate("BEITZAH", "Beitzah", "ביצה", "Бейца", "Beitsa", 40, 40, 0, false),
        new Tractate("ROSH_HASHANAH", "Rosh Hashanah", "ראש השנה", "Рош ѓаШана", "Roch Hachana", 35, 35, 0, false),
        new Tractate("TAANIT", "Taanit", "תענית", "Таанит", "Ta'anit", 31, 31, 0, false),
        new Tractate("MEGILLAH", "Megillah", "מגילה", "Мегила", "Meguila", 32, 32, 0, false),
        new Tractate("MOED_KATAN", "Moed Katan", "מועד קטן", "Моэд катан", "Mo'ed Katan", 29, 29, 0, false),
        new Tractate("CHAGIGAH", "Chagigah", "חגיגה", "Хагига", "'Haguiga", 27, 27, 0, false),
        new Tractate("YEVAMOT", "Yevamot", "יבמות", "Йевамот", "Yevamot", 122, 122, 0, false),
        new Tractate("KETUBOT", "Ketubot", "כתובות", "Ктубот", "Ketoubot", 112, 112, 0, false),
        new Tractate("NEDARIM", "Nedarim", "נדרים", "Недарим", "Nedarim", 91, 91, 0, false),
        new Tractate("NAZIR", "Nazir", "נזיר", "Назир", "Nazir", 66, 66, 0, false),
        new Tractate("SOTAH", "Sotah", "סוטה", "Сота", "Sota", 49, 49, 0, false),
        new Tractate("GITTIN", "Gittin", "גיטין", "Гитин", "Guitin", 90, 90, 0, false),
        new Tractate("KIDDUSHIN", "Kiddushin", "קידושין", "Кидушин", "Kidouchin", 82, 82, 0, false),
        new Tractate("BAVA_KAMMA", "Bava Kamma", "בבא קמא", "Бава кама", "Bava Kama", 119, 119, 0, false),
        new Tractate("BAVA_METZIA", "Bava Metzia", "בבא מציעא", "Бава мециа", "Bava Metsia", 119, 119, 0, false),
        new Tractate("BAVA_BATRA", "Bava Batra", "בבא בתרא", "Бава батра", "Bava Batra", 176, 176, 0, false),
        new Tractate("SANHEDRIN", "Sanhedrin", "סנהדרין", "Санѓедрин", "Sanhédrin", 113, 113, 0, false),
        new Tractate("MAKKOT", "Makkot", "מכות", "Макот", "Makot", 24, 24, 0, true),
        new Tractate("SHEVUOT", "Shevuot", "שבועות", "Швуот", "Chevouot", 49, 49, 0, false),
        new Tractate("AVODAH_ZARAH", "Avodah Zarah", "עבודה זרה", "Авода зара", "Avoda Zara", 76, 76, 0, false),
        new Tractate("HORAYOT", "Horayot", "הוריות", "Ѓораёт", "Horayot", 14, 14, 0, false),
        new Tractate("ZEVACHIM", "Zevachim", "זבחים", "Звахим", "Zeva'him", 120, 120, 0, false),
        new Tractate("MENACHOT", "Menachot", "מנחות", "Менахот", "Mena'hot", 110, 110, 0, true),
        new Tractate("CHULLIN", "Chullin", "חולין", "Хулин", "'Houlin", 142, 142, 0, false),
        new Tractate("BEKHOROT", "Bekhorot", "בכורות", "Бхорот", "Bekhorot", 61, 61, 0, true),
        new Tractate("ARAKHIN", "Arakhin", "ערכין", "Арахин", "Arakhin", 34, 34, 0, false),
        new Tractate("TEMURAH", "Temurah", "תמורה", "Тмура", "Temoura", 34, 34, 0, false),
        new Tractate("KERITOT", "Keritot", "כריתות", "Критот", "Keritot", 28, 28, 0, false),
        new Tractate("MEILAH", "Meilah", "מעילה", "Меила", "Me'ila", 22, 22, 0, true),
        new Tractate("KINNIM", "Kinnim", "קינים", "Киним", "Kinim", 4, 4, 21, true),
        new Tractate("TAMID", "Tamid", "תמיד", "Тамид", "Tamid", 9, 9, 24, true),
        new Tractate("MIDDOT", "Middot", "מדות", "Мидот", "Midot", 5, 5, 32, false),
        new Tractate("NIDDAH", "Niddah", "נדה", "Нида", "Nida", 73, 73, 0, true),
    };
}
