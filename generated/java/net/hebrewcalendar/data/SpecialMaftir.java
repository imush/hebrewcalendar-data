/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

package net.hebrewcalendar.data;

/** The four special Shabbat maftirs read on the Shabbatot before/around Purim & Nisan. */
public enum SpecialMaftir {
    SHEKALIM("SHEKALIM", "Shekalim", "שקלים", "Шкалим", "Chekalim"),
    ZACHOR("ZACHOR", "Zachor", "זכור", "Захор", "Zachor"),
    PARA("PARA", "Para", "פרה", "Пара", "Para"),
    HACHODESH("HACHODESH", "Hachodesh", "החודש", "ѓаХодеш", "Hachodech");

    public final String key;
    public final String en;
    public final String he;
    public final String ru;
    public final String fr;

    SpecialMaftir(String key, String en, String he, String ru, String fr) {
        this.key = key;
        this.en = en;
        this.he = he;
        this.ru = ru;
        this.fr = fr;
    }
}
