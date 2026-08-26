/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

package net.hebrewcalendar.data;

/** The 5 aliyot/haftarah customs the consumer UIs expose. Fallback resolution (Chabad → Sefard → Common, etc.) is done at data-gen time; every entry in Haftarot.ALL covers all 5 customs. */
public enum Custom {
    ASHKENAZ("ASHKENAZ", "Ashkenaz", "אשכנז", "Ашкеназ", "Ashkénaze"),
    SEFARD("SEFARD", "Sefard", "ספרד", "Сфарад", "Séfarade"),
    CHABAD("CHABAD", "Chabad", "חב״ד", "Хабад", "Habad"),
    TEIMAN("TEIMAN", "Teiman", "תימן", "Йеменский", "Yéménite"),
    ITALKI("ITALKI", "Italki", "יטלקי", "Итальянский", "Italien");

    public final String key;
    public final String en;
    public final String he;
    public final String ru;
    public final String fr;

    Custom(String key, String en, String he, String ru, String fr) {
        this.key = key;
        this.en = en;
        this.he = he;
        this.ru = ru;
        this.fr = fr;
    }
}
