/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

package net.hebrewcalendar.data;

/** The 18 minhagim the haftarah tables distinguish (opentorah's Custom.xml minus the abstract 'Common' root). Fallback resolution (Chabad → Sefard → Common, etc.) is done at data-gen time; every entry in Haftarot.ALL covers all 18 customs. Aliyot expose only a Chabad/Common split — see ChumashAliyot.aliyotFor. */
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
}
