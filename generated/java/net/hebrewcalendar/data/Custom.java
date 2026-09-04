/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

package net.hebrewcalendar.data;

import java.util.EnumMap;
import java.util.Map;

/** The minhagim the readings distinguish (opentorah's Custom.xml minus the abstract 'Common' root). Haftarot are resolved per custom at data-gen time; the Torah aliyot are not, and use the tree below. */
public enum Custom {
    ASHKENAZ("ASHKENAZ", "Ashkenaz", "אשכנז", "Ашкеназский", "Ashkénaze"),
    POZNAN("POZNAN", "Poznan", "פוזנא", "Познанский", "Poznanien"),
    ITALKI("ITALKI", "Italki", "יטלקי", "Итальянский", "Italien"),
    FRANKFURT("FRANKFURT", "Frankfurt", "פרנקפורט", "Франкфуртский", "Francfort"),
    LITA("LITA", "Lita", "ליטה", "Литовский", "Lituanien"),
    CHAYEY_ODOM("CHAYEY_ODOM", "Chayey Odom", "חיי אדם", "Хаей адам", "'Hayé Adam"),
    HAGRA("HAGRA", "GR\"A", "הגר״א", "Виленский гаон", "GR\"A"),
    SEFARD("SEFARD", "Sefard", "ספרד", "Сефардский", "Séfarade"),
    CHABAD("CHABAD", "Chabad", "חב״ד", "Хабад", "Habad"),
    PURE_SEPHARDIM("PURE_SEPHARDIM", "Pure Sephardim", "ספרדים טהורים", "Чистые сефарды", "Séfarades purs"),
    PERSIA("PERSIA", "Persia", "פרס ובוכרה", "Персия и Бухара", "Perse et Boukhara"),
    LIBYA("LIBYA", "Libya", "לוב", "Ливийский", "Libyen"),
    MAGREB("MAGREB", "Magreb", "מגרב", "Магреб", "Maghreb"),
    ALGERIA("ALGERIA", "Algeria", "אלגיר", "Алжирский", "Algérien"),
    ALGIERS("ALGIERS", "Algiers", "אלג׳יר", "Алжир (город)", "Alger (ville)"),
    MOROCCO("MOROCCO", "Morocco", "מרוקו", "Марокко", "Marocain"),
    FES("FES", "Fes", "פאס", "Фес", "Fès"),
    MARRAKESH("MARRAKESH", "Marrakesh", "מראכש", "Марракеш", "Marrakech"),
    AGADIR("AGADIR", "Agadir", "אגדיר", "Агадир", "Agadir"),
    TOSHBIM("TOSHBIM", "Toshbim", "תושבים", "Тошбим", "Tochbim"),
    DJERBA("DJERBA", "Djerba", "דגרבה", "Джерба", "Djerba"),
    BAVLIM("BAVLIM", "Bavlim", "בבלים", "Вавилонский", "Babylonien"),
    TEIMAN("TEIMAN", "Teiman", "תימן", "Йеменский", "Yéménite"),
    BALADI("BALADI", "Baladi", "בלדי", "Балади", "Baladi"),
    SHAMI("SHAMI", "Shami", "שאמי", "Шами", "Chami"),
    ROMANIA("ROMANIA", "Romania", "רומניא", "Румыния (нусах романия)", "Romaniote");

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

    private static final Map<Custom, Custom> PARENTS;
    static {
        Map<Custom, Custom> p = new EnumMap<>(Custom.class);
        p.put(POZNAN, ASHKENAZ);
        p.put(ITALKI, ASHKENAZ);
        p.put(FRANKFURT, ASHKENAZ);
        p.put(LITA, ASHKENAZ);
        p.put(CHAYEY_ODOM, LITA);
        p.put(HAGRA, ASHKENAZ);
        p.put(CHABAD, SEFARD);
        p.put(PURE_SEPHARDIM, SEFARD);
        p.put(PERSIA, SEFARD);
        p.put(LIBYA, SEFARD);
        p.put(MAGREB, SEFARD);
        p.put(ALGERIA, MAGREB);
        p.put(ALGIERS, ALGERIA);
        p.put(MOROCCO, MAGREB);
        p.put(FES, MOROCCO);
        p.put(MARRAKESH, MOROCCO);
        p.put(AGADIR, MOROCCO);
        p.put(TOSHBIM, MAGREB);
        p.put(DJERBA, MAGREB);
        p.put(BAVLIM, SEFARD);
        p.put(TEIMAN, SEFARD);
        p.put(BALADI, TEIMAN);
        p.put(SHAMI, TEIMAN);
        PARENTS = java.util.Collections.unmodifiableMap(p);
    }

    /** The custom this one falls back on, or null at the root. */
    public Custom parent() { return PARENTS.get(this); }

    /** Is this that custom, or one that inherits from it? */
    public boolean isUnder(Custom ancestor) {
        for (Custom c = this; c != null; c = c.parent())
            if (c == ancestor) return true;
        return false;
    }
}
