/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

package net.hebrewcalendar.data;

/** Hebrew months plus Adar I / Adar II leap variants. Use {@link #forMonth}
 *  to resolve from the (month, leap) tuple the calendar layer uses. */
public enum JewishMonth {
    NISAN("NISAN", "Nisan", "ניסן", "Нисан", "Nissan"),
    IYAR("IYAR", "Iyar", "אייר", "Ияр", "Iyar"),
    SIVAN("SIVAN", "Sivan", "סיון", "Сиван", "Sivane"),
    TAMUZ("TAMUZ", "Tamuz", "תמוז", "Тамуз", "Tamouz"),
    AV("AV", "Av", "אב", "Ав", "Av"),
    ELUL("ELUL", "Elul", "אלול", "Элул", "Eloul"),
    TISHREI("TISHREI", "Tishrei", "תשרי", "Тишрей", "Tichri"),
    CHESHVAN("CHESHVAN", "Cheshvan", "חשון", "Хешван", "Hechvan"),
    KISLEV("KISLEV", "Kislev", "כסלו", "Кислев", "Kislev"),
    TEVET("TEVET", "Tevet", "טבת", "Тевет", "Tevet"),
    SHVAT("SHVAT", "Shvat", "שבט", "Шват", "Chevat"),
    ADAR("ADAR", "Adar", "אדר", "Адар", "Adar"),
    ADAR_I("ADAR_I", "Adar I", "אדר א׳", "Адар I", "Adar I"),
    ADAR_II("ADAR_II", "Adar II", "אדר ב׳", "Адар II", "Adar II");

    public final String key;
    public final String en;
    public final String he;
    public final String ru;
    public final String fr;

    JewishMonth(String key, String en, String he, String ru, String fr) {
        this.key = key;
        this.en = en;
        this.he = he;
        this.ru = ru;
        this.fr = fr;
    }

    /** Resolve by 1-based month index. Month 12 in a leap year is Adar I;
     *  month 13 exists only in leap years. Returns null for out-of-range. */
    public static JewishMonth forMonth(int month, boolean leap) {
        switch (month) {
            case 1:  return NISAN;
            case 2:  return IYAR;
            case 3:  return SIVAN;
            case 4:  return TAMUZ;
            case 5:  return AV;
            case 6:  return ELUL;
            case 7:  return TISHREI;
            case 8:  return CHESHVAN;
            case 9:  return KISLEV;
            case 10: return TEVET;
            case 11: return SHVAT;
            case 12: return leap ? ADAR_I : ADAR;
            case 13: return leap ? ADAR_II : null;
            default: return null;
        }
    }
}
