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
        public final String key, en, he;
        public final int lastDaf, oldLastDaf, dafOffset;
        public final boolean amudAOnly;
        public Tractate(String key, String en, String he, int lastDaf,
                        int oldLastDaf, int dafOffset, boolean amudAOnly) {
            this.key = key; this.en = en; this.he = he;
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
        new Tractate("BERAKHOT", "Berakhot", "ברכות", 64, 64, 0, false),
        new Tractate("SHABBAT", "Shabbat", "שבת", 157, 157, 0, false),
        new Tractate("ERUVIN", "Eruvin", "עירובין", 105, 105, 0, false),
        new Tractate("PESACHIM", "Pesachim", "פסחים", 121, 121, 0, false),
        new Tractate("SHEKALIM", "Shekalim", "שקלים", 22, 13, 0, false),
        new Tractate("YOMA", "Yoma", "יומא", 88, 88, 0, false),
        new Tractate("SUKKAH", "Sukkah", "סוכה", 56, 56, 0, false),
        new Tractate("BEITZAH", "Beitzah", "ביצה", 40, 40, 0, false),
        new Tractate("ROSH_HASHANAH", "Rosh Hashanah", "ראש השנה", 35, 35, 0, false),
        new Tractate("TAANIT", "Taanit", "תענית", 31, 31, 0, false),
        new Tractate("MEGILLAH", "Megillah", "מגילה", 32, 32, 0, false),
        new Tractate("MOED_KATAN", "Moed Katan", "מועד קטן", 29, 29, 0, false),
        new Tractate("CHAGIGAH", "Chagigah", "חגיגה", 27, 27, 0, false),
        new Tractate("YEVAMOT", "Yevamot", "יבמות", 122, 122, 0, false),
        new Tractate("KETUBOT", "Ketubot", "כתובות", 112, 112, 0, false),
        new Tractate("NEDARIM", "Nedarim", "נדרים", 91, 91, 0, false),
        new Tractate("NAZIR", "Nazir", "נזיר", 66, 66, 0, false),
        new Tractate("SOTAH", "Sotah", "סוטה", 49, 49, 0, false),
        new Tractate("GITTIN", "Gittin", "גיטין", 90, 90, 0, false),
        new Tractate("KIDDUSHIN", "Kiddushin", "קידושין", 82, 82, 0, false),
        new Tractate("BAVA_KAMMA", "Bava Kamma", "בבא קמא", 119, 119, 0, false),
        new Tractate("BAVA_METZIA", "Bava Metzia", "בבא מציעא", 119, 119, 0, false),
        new Tractate("BAVA_BATRA", "Bava Batra", "בבא בתרא", 176, 176, 0, false),
        new Tractate("SANHEDRIN", "Sanhedrin", "סנהדרין", 113, 113, 0, false),
        new Tractate("MAKKOT", "Makkot", "מכות", 24, 24, 0, true),
        new Tractate("SHEVUOT", "Shevuot", "שבועות", 49, 49, 0, false),
        new Tractate("AVODAH_ZARAH", "Avodah Zarah", "עבודה זרה", 76, 76, 0, false),
        new Tractate("HORAYOT", "Horayot", "הוריות", 14, 14, 0, false),
        new Tractate("ZEVACHIM", "Zevachim", "זבחים", 120, 120, 0, false),
        new Tractate("MENACHOT", "Menachot", "מנחות", 110, 110, 0, true),
        new Tractate("CHULLIN", "Chullin", "חולין", 142, 142, 0, false),
        new Tractate("BEKHOROT", "Bekhorot", "בכורות", 61, 61, 0, true),
        new Tractate("ARAKHIN", "Arakhin", "ערכין", 34, 34, 0, false),
        new Tractate("TEMURAH", "Temurah", "תמורה", 34, 34, 0, false),
        new Tractate("KERITOT", "Keritot", "כריתות", 28, 28, 0, false),
        new Tractate("MEILAH", "Meilah", "מעילה", 22, 22, 0, true),
        new Tractate("KINNIM", "Kinnim", "קינים", 4, 4, 21, true),
        new Tractate("TAMID", "Tamid", "תמיד", 9, 9, 24, true),
        new Tractate("MIDDOT", "Middot", "מדות", 5, 5, 32, false),
        new Tractate("NIDDAH", "Niddah", "נדה", 73, 73, 0, true),
    };
}
