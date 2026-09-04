/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

package net.hebrewcalendar.data;

import java.util.HashMap;
import java.util.Map;

/** Books of the Tanach — 5 Chumash + Prophets — with 4-lang translations. */
public enum TanachBook {
    GENESIS("GENESIS", "Genesis", "בראשית", "Берешит", "Béréchit"),
    EXODUS("EXODUS", "Exodus", "שמות", "Шмот", "Chemot"),
    LEVITICUS("LEVITICUS", "Leviticus", "ויקרא", "Ваикра", "Vayikra"),
    NUMBERS("NUMBERS", "Numbers", "במדבר", "Бемидбар", "Bemidbar"),
    DEUTERONOMY("DEUTERONOMY", "Deuteronomy", "דברים", "Дварим", "Devarim"),
    JOSHUA("JOSHUA", "Joshua", "יהושע", "Йеѓошуа", "Yehochoua"),
    JUDGES("JUDGES", "Judges", "שופטים", "Шофтим", "Choftim"),
    I_SAMUEL("I_SAMUEL", "Samuel I", "שמואל א׳", "Шмуэль I", "Samuel I"),
    II_SAMUEL("II_SAMUEL", "Samuel II", "שמואל ב׳", "Шмуэль II", "Samuel II"),
    I_KINGS("I_KINGS", "Kings I", "מלכים א׳", "Мелахим I", "Melakhim I"),
    II_KINGS("II_KINGS", "Kings II", "מלכים ב׳", "Мелахим II", "Melakhim II"),
    ISAIAH("ISAIAH", "Isaiah", "ישעיהו", "Йешаяѓу", "Yechaya"),
    JEREMIAH("JEREMIAH", "Jeremiah", "ירמיהו", "Йирмияѓу", "Yirmiya"),
    EZEKIEL("EZEKIEL", "Ezekiel", "יחזקאל", "Йехезкель", "Ye'hezkel"),
    HOSEA("HOSEA", "Hosea", "הושע", "Ѓошеа", "Hoché'a"),
    JOEL("JOEL", "Joel", "יואל", "Йоэль", "Yoël"),
    AMOS("AMOS", "Amos", "עמוס", "Амос", "Amos"),
    OBADIAH("OBADIAH", "Obadiah", "עובדיה", "Овадья", "Ovadia"),
    JONAH("JONAH", "Jonah", "יונה", "Йона", "Yona"),
    MICAH("MICAH", "Micah", "מיכה", "Миха", "Mikha"),
    NAHUM("NAHUM", "Nahum", "נחום", "Нахум", "Nahoum"),
    HABAKKUK("HABAKKUK", "Habakkuk", "חבקוק", "Хавакук", "'Havakouk"),
    ZEPHANIAH("ZEPHANIAH", "Zephaniah", "צפניה", "Цфанья", "Tsefania"),
    HAGGAI("HAGGAI", "Haggai", "חגי", "Хагай", "'Haggaï"),
    ZECHARIAH("ZECHARIAH", "Zechariah", "זכריה", "Захарья", "Zekharia"),
    MALACHI("MALACHI", "Malachi", "מלאכי", "Малахи", "Malakhi");

    public final String key, en, he, ru, fr;

    TanachBook(String key, String en, String he, String ru, String fr) {
        this.key = key; this.en = en; this.he = he; this.ru = ru; this.fr = fr;
    }

    private static final Map<String, TanachBook> BY_EN = new HashMap<>();
    static { for (TanachBook b : values()) BY_EN.put(b.en, b); }

    /** Look up by English name ('II Kings', 'Isaiah', ...); null if unknown. */
    public static TanachBook forEnglishName(String en) { return BY_EN.get(en); }
}
