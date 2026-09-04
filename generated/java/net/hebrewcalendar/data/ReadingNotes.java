// GENERATED FILE — DO NOT EDIT.
// Source: hebrewcalendar-data — regenerate with ./generate.sh

package net.hebrewcalendar.data;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

/** Sources and comments recorded against the readings, for display. */
public final class ReadingNotes {
    private ReadingNotes() {}

    /** A work a reading is attested in. */
    public static final class Source {
        public final String id, kind, en, he, ru, fr, where, url;
        Source(String id, String kind, String en, String he, String ru,
               String fr, String where, String url) {
            this.id = id; this.kind = kind; this.en = en; this.he = he;
            this.ru = ru; this.fr = fr; this.where = where; this.url = url;
        }
        public String name(String lang) {
            switch (lang) {
                case "he": return he;
                case "ru": return ru;
                case "fr": return fr;
                default:   return en;
            }
        }
    }

    /** What is recorded beside one custom's reading. */
    public static final class Note {
        public final List<String> sources;   // Source ids
        public final String comment;         // may be null
        /** The customs this note was recorded for, when they are not the
         *  one asking: it inherits the reading, and the note with it. */
        public final List<Custom> recordedFor;
        Note(List<String> sources, String comment, List<Custom> recordedFor) {
            this.sources = sources; this.comment = comment;
            this.recordedFor = recordedFor;
        }
    }

    private static final Map<String, Source> SOURCES;
    private static final Map<Parsha, Map<Custom, Note>> WEEKLY;
    private static final Map<String, Map<Custom, Note>> SPECIAL;
    static {
        Map<String, Source> s = new HashMap<>();
        s.put("michlol", new Source("michlol", "website", "hamichlol", "המכלול", "ѓа-Michlol", "HaMichlol", "הפטרה", "https://www.hamichlol.org.il/הפטרה"));
        s.put("torah-temimah", new Source("torah-temimah", "chumash", "Chumash Torah Temimah", "חומש תורה תמימה", "Хумаш Тора Тмима", "Houmach Torah Temima", "", ""));
        s.put("chabad-org", new Source("chabad-org", "website", "chabad.org", "chabad.org", "chabad.org", "chabad.org", "", "https://www.chabad.org"));
        s.put("chabad-rosh-chodesh-torah", new Source("chabad-rosh-chodesh-torah", "website", "chabad.org", "chabad.org", "chabad.org", "chabad.org", "What Do We Read From the Torah on Rosh Chodesh?", "https://www.chabad.org/parshah/article_cdo/aid/1235854/jewish/What-Do-We-Read-From-the-Torah-on-Rosh-Chodesh.htm"));
        s.put("chabad-haftarot", new Source("chabad-haftarot", "website", "chabad.org", "chabad.org", "chabad.org", "chabad.org", "List of Haftorah Readings where Customs Vary, drawn from the Rebbe's records; its own footnotes cite Shulchan Aruch, Orach Chayim 425", "https://www.chabad.org/library/article_cdo/aid/4158333/jewish/List-of-Haftorah-Readings-where-Customs-Vary.htm"));
        s.put("finkelstein", new Source("finkelstein", "study", "Louis Finkelstein", "לואיס פינקלשטיין", "Луис Финкельштейн", "Louis Finkelstein", "The Prophetic Readings According to the Palestinian, Byzantine, and Karaite Rites, HUCA vol. 17 (1942-1943) p. 423", "https://www.jstor.org/stable/23506442"));
        s.put("opensiddur", new Source("opensiddur", "study", "Sedarim and Hafṭarot according to the nusaḥ Erets Yisrael", "סדרים והפטרות כמנהג ארץ ישראל", "Седарим и ѓафтарот по нусаху Эрец-Исраэль", "Sedarim et haftarot selon le noussah d'Erets Israël", "St. Petersburg Manuscript, NLR Ms. EVR II B 42; ed. Isaac Gantwerk Mayer, CC BY-SA 4.0", "https://opensiddur.org/readings-and-sourcetexts/reading-schedules/sedarim-and-haftarot-according-to-the-nusah-erets-yisrael-as-recorded-in-the-st-petersburg-manuscript-nlr-ms-evr-ii-b-42/"));
        s.put("romania-reconstruction", new Source("romania-reconstruction", "reconstruction", "Romania readings reconstructed from the Erets Yisrael sedarim", "הפטרות רומניא לפי סדרי ארץ ישראל", "Чтения нусаха романия, восстановленные по седарим Эрец-Исраэль", "Lectures romaniotes reconstituées d'après les sedarim d'Erets Israël", "the haftarah of the first complete seder falling within each parsha, per michlol's account of how Romania chose one reading from the three parallel sedarim", ""));
        s.put("chitas", new Source("chitas", "chumash", "Sefer Chitas", "ספר חת\"ת", "Сефер Хитас", "Sefer Hitas", "", ""));
        s.put("torat-chaim", new Source("torat-chaim", "chumash", "Chumash Torat Chaim", "חומש תורת חיים", "Хумаш Торат Хаим", "Houmach Torat Haïm", "", ""));
        s.put("steinsaltz", new Source("steinsaltz", "chumash", "Chumash Steinsaltz", "חומש שטיינזלץ", "Хумаш Штейнзальца", "Houmach Steinsaltz", "", ""));
        s.put("nitei-gavriel", new Source("nitei-gavriel", "halachah", "Nitei Gavriel", "נטעי גבריאל", "Нитей Гавриэль", "Nitei Gavriel", "Hilchot Sukkot", ""));
        s.put("poznan-pinkas", new Source("poznan-pinkas", "study", "Pinkas Beis HaKnesses de-Kehilas Pozna", "פנקס בית הכנסת דק\"ק פוזנא", "Пинкас синагоги общины Познани", "Pinkas de la synagogue de la communauté de Poznań", "", ""));
        s.put("asulin", new Source("asulin", "website", "R. Avraham Asulin", "הרב אברהם אסולין", "рав Авраѓам Асулин", "Rav Avraham Assouline", "Moroccan customs, on moreshet-morocco.com", "https://moreshet-morocco.com/2015/07/12/הלכות-ט-באב-הרב-אברה-אסולין/"));
        s.put("nahagu-haam", new Source("nahagu-haam", "halachah", "Nahagu HaAm", "נהגו העם", "Наѓагу ѓа-Ам", "Nahagou HaAm", "", ""));
        SOURCES = java.util.Collections.unmodifiableMap(s);

        Map<Parsha, Map<Custom, Note>> w = new java.util.EnumMap<>(Parsha.class);
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.FRANKFURT, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.SEFARD, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.CHABAD, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.PURE_SEPHARDIM, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.PERSIA, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.LIBYA, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MAGREB, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.ALGERIA, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.ALGIERS, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MOROCCO, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.FES, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MARRAKESH, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.AGADIR, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.TOSHBIM, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.DJERBA, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.BAVLIM, new Note(List.of(), "Poznan reads with Frankfurt here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.FRANKFURT, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.BEREISHIT, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.NOACH, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.SEFARD, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.PURE_SEPHARDIM, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.PERSIA, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.LIBYA, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MAGREB, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MOROCCO, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.FES, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MARRAKESH, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.AGADIR, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.TOSHBIM, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.DJERBA, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.BAVLIM, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.TEIMAN, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.BALADI, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.SHAMI, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.VAYERA, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ASHKENAZ, new Note(List.of("torah-temimah", "michlol", "torat-chaim", "steinsaltz"), "Torah Temimah ends at Hosea 14:10. hamichlol gives Ashkenaz the same reading followed by Joel 2:26-27; Torat Chaim and Steinsaltz print those two verses only as יש מוסיפים, without saying which communities add them, so they are kept below under Lita rather than given to Ashkenaz.", List.of()));
            m.put(Custom.POZNAN, new Note(List.of("torah-temimah", "michlol", "torat-chaim", "steinsaltz"), "Torah Temimah ends at Hosea 14:10. hamichlol gives Ashkenaz the same reading followed by Joel 2:26-27; Torat Chaim and Steinsaltz print those two verses only as יש מוסיפים, without saying which communities add them, so they are kept below under Lita rather than given to Ashkenaz.", List.of(Custom.ASHKENAZ)));
            m.put(Custom.FRANKFURT, new Note(List.of("torah-temimah", "michlol", "torat-chaim", "steinsaltz"), "Torah Temimah ends at Hosea 14:10. hamichlol gives Ashkenaz the same reading followed by Joel 2:26-27; Torat Chaim and Steinsaltz print those two verses only as יש מוסיפים, without saying which communities add them, so they are kept below under Lita rather than given to Ashkenaz.", List.of(Custom.ASHKENAZ)));
            m.put(Custom.HAGRA, new Note(List.of("torah-temimah", "michlol", "torat-chaim", "steinsaltz"), "Torah Temimah ends at Hosea 14:10. hamichlol gives Ashkenaz the same reading followed by Joel 2:26-27; Torat Chaim and Steinsaltz print those two verses only as יש מוסיפים, without saying which communities add them, so they are kept below under Lita rather than given to Ashkenaz.", List.of(Custom.ASHKENAZ)));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.VAYETZE, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.PURE_SEPHARDIM, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of()));
            m.put(Custom.PERSIA, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of()));
            m.put(Custom.LIBYA, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of()));
            m.put(Custom.MAGREB, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of()));
            m.put(Custom.ALGERIA, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of(Custom.BAVLIM, Custom.LIBYA, Custom.MAGREB, Custom.PERSIA, Custom.PURE_SEPHARDIM, Custom.TEIMAN)));
            m.put(Custom.ALGIERS, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of(Custom.BAVLIM, Custom.LIBYA, Custom.MAGREB, Custom.PERSIA, Custom.PURE_SEPHARDIM, Custom.TEIMAN)));
            m.put(Custom.MOROCCO, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of(Custom.BAVLIM, Custom.LIBYA, Custom.MAGREB, Custom.PERSIA, Custom.PURE_SEPHARDIM, Custom.TEIMAN)));
            m.put(Custom.FES, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of(Custom.BAVLIM, Custom.LIBYA, Custom.MAGREB, Custom.PERSIA, Custom.PURE_SEPHARDIM, Custom.TEIMAN)));
            m.put(Custom.MARRAKESH, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of(Custom.BAVLIM, Custom.LIBYA, Custom.MAGREB, Custom.PERSIA, Custom.PURE_SEPHARDIM, Custom.TEIMAN)));
            m.put(Custom.AGADIR, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of(Custom.BAVLIM, Custom.LIBYA, Custom.MAGREB, Custom.PERSIA, Custom.PURE_SEPHARDIM, Custom.TEIMAN)));
            m.put(Custom.TOSHBIM, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of(Custom.BAVLIM, Custom.LIBYA, Custom.MAGREB, Custom.PERSIA, Custom.PURE_SEPHARDIM, Custom.TEIMAN)));
            m.put(Custom.DJERBA, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of(Custom.BAVLIM, Custom.LIBYA, Custom.MAGREB, Custom.PERSIA, Custom.PURE_SEPHARDIM, Custom.TEIMAN)));
            m.put(Custom.BAVLIM, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of()));
            m.put(Custom.TEIMAN, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of()));
            m.put(Custom.BALADI, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of(Custom.BAVLIM, Custom.LIBYA, Custom.MAGREB, Custom.PERSIA, Custom.PURE_SEPHARDIM, Custom.TEIMAN)));
            m.put(Custom.SHAMI, new Note(List.of(), "hamichlol lists Algeria here too; it already reads this by way of Magreb, so it is not named again. Its rite code סאל is Algerian Jewry as a whole; the city of Algiers is named only in prose, and only for the fast Mincha readings.", List.of(Custom.BAVLIM, Custom.LIBYA, Custom.MAGREB, Custom.PERSIA, Custom.PURE_SEPHARDIM, Custom.TEIMAN)));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.SHEMOT, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of("michlol", "poznan-pinkas"), null, List.of()));
            w.put(Parsha.VAERA, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.BESHALACH, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.SEFARD, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.CHABAD, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.PURE_SEPHARDIM, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.PERSIA, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.LIBYA, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MAGREB, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MOROCCO, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.FES, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MARRAKESH, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.AGADIR, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.TOSHBIM, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.DJERBA, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.BAVLIM, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.YITRO, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.ITALKI, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.SEFARD, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.CHABAD, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.PURE_SEPHARDIM, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.PERSIA, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.LIBYA, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MAGREB, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.ALGERIA, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.ALGIERS, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MOROCCO, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.FES, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MARRAKESH, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.AGADIR, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.TOSHBIM, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.DJERBA, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.BAVLIM, new Note(List.of(), "chabad.org and Chitas are cited for Chabad; hamichlol gives the same reading to Sefard, Italki and Poznan. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.CHABAD, Custom.ITALKI, Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.KI_TISA, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.VAYAKHEL, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of("michlol", "poznan-pinkas"), null, List.of()));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.PEKUDEI, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.SEFARD, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.CHABAD, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.PURE_SEPHARDIM, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.PERSIA, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.LIBYA, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MAGREB, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.ALGERIA, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.ALGIERS, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MOROCCO, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.FES, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.MARRAKESH, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.AGADIR, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.TOSHBIM, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.DJERBA, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.BAVLIM, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of(Custom.POZNAN, Custom.SEFARD)));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.SHEMINI, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ASHKENAZ, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.POZNAN, new Note(List.of("michlol", "poznan-pinkas"), null, List.of()));
            m.put(Custom.ITALKI, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.FRANKFURT, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.LITA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.CHAYEY_ODOM, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.HAGRA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.SEFARD, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.CHABAD, new Note(List.of("chitas"), null, List.of()));
            m.put(Custom.PURE_SEPHARDIM, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.PERSIA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.LIBYA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.MAGREB, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.ALGERIA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.ALGIERS, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.MOROCCO, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.FES, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.MARRAKESH, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.AGADIR, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.TOSHBIM, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.DJERBA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.BAVLIM, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.TEIMAN, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.BALADI, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.SHAMI, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.ROMANIA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            w.put(Parsha.ACHAREI_MOT, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ASHKENAZ, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.POZNAN, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.ASHKENAZ)));
            m.put(Custom.FRANKFURT, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.ASHKENAZ)));
            m.put(Custom.LITA, new Note(List.of(), "Unverified. Torah Temimah does not distinguish the Ashkenazi sub-customs, so it cannot settle this one; hamichlol gives this reading to Frankfurt rather than to Lita. Kept as inherited pending a source that speaks to it.", List.of()));
            m.put(Custom.CHAYEY_ODOM, new Note(List.of(), "Unverified. Torah Temimah does not distinguish the Ashkenazi sub-customs, so it cannot settle this one; hamichlol gives this reading to Frankfurt rather than to Lita. Kept as inherited pending a source that speaks to it.", List.of(Custom.LITA)));
            m.put(Custom.HAGRA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.ASHKENAZ)));
            m.put(Custom.SEFARD, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of()));
            m.put(Custom.CHABAD, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.PURE_SEPHARDIM, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.PERSIA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.LIBYA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.MAGREB, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.ALGERIA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.ALGIERS, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.MOROCCO, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.FES, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.MARRAKESH, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.AGADIR, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.TOSHBIM, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.DJERBA, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.BAVLIM, new Note(List.of("torah-temimah", "steinsaltz"), null, List.of(Custom.SEFARD)));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.KEDOSHIM, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of(), "hamichlol gives Poznan the same ending as Chabad; the two are unrelated, they simply stop at the same verse. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.CHABAD, new Note(List.of(), "hamichlol gives Poznan the same ending as Chabad; the two are unrelated, they simply stop at the same verse. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            w.put(Parsha.BEHAR, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of(), "Poznan per hamichlol, but unsettled: the Poznan minhagim book says they end at 'ne'um Hashem', which could be verse 15, 30 or 31, and the kuntres contradicts itself about whether they read this haftarah at all or the ordinary Ashkenaz one. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.ITALKI, new Note(List.of(), "Poznan per hamichlol, but unsettled: the Poznan minhagim book says they end at 'ne'um Hashem', which could be verse 15, 30 or 31, and the kuntres contradicts itself about whether they read this haftarah at all or the ordinary Ashkenaz one. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            w.put(Parsha.BECHUKOTAI, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of("michlol", "poznan-pinkas"), null, List.of()));
            w.put(Parsha.CHUKAT, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.SEFARD, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of()));
            m.put(Custom.CHABAD, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.PURE_SEPHARDIM, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.PERSIA, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.LIBYA, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.MAGREB, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.ALGERIA, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.ALGIERS, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.MOROCCO, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.FES, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.MARRAKESH, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.AGADIR, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.TOSHBIM, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.DJERBA, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.BAVLIM, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD, Custom.SHAMI)));
            m.put(Custom.SHAMI, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of()));
            m.put(Custom.ROMANIA, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of()));
            w.put(Parsha.MASEI, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ASHKENAZ, new Note(List.of("michlol", "torat-chaim", "steinsaltz"), "Torah Temimah prints Hosea, Joel and Micah together without saying which custom reads which, so it does not settle this; hamichlol and Torat Chaim both give Ashkenaz Joel 2:15. Steinsaltz adds that some Ashkenazim read both the Joel and the Micah passages.", List.of()));
            m.put(Custom.POZNAN, new Note(List.of(), "Poznan per the first practice in kuntres Poznan, which reads Dirshu on Shabbos Shuvah; its second practice reads Shuva like the rest of Ashkenaz. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.ITALKI, new Note(List.of(), "Poznan per the first practice in kuntres Poznan, which reads Dirshu on Shabbos Shuvah; its second practice reads Shuva like the rest of Ashkenaz. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.FRANKFURT, new Note(List.of("michlol", "torat-chaim", "steinsaltz"), "Torah Temimah prints Hosea, Joel and Micah together without saying which custom reads which, so it does not settle this; hamichlol and Torat Chaim both give Ashkenaz Joel 2:15. Steinsaltz adds that some Ashkenazim read both the Joel and the Micah passages.", List.of(Custom.ASHKENAZ)));
            m.put(Custom.LITA, new Note(List.of("michlol", "torat-chaim", "steinsaltz"), "Torah Temimah prints Hosea, Joel and Micah together without saying which custom reads which, so it does not settle this; hamichlol and Torat Chaim both give Ashkenaz Joel 2:15. Steinsaltz adds that some Ashkenazim read both the Joel and the Micah passages.", List.of(Custom.ASHKENAZ)));
            m.put(Custom.CHAYEY_ODOM, new Note(List.of("michlol", "torat-chaim", "steinsaltz"), "Torah Temimah prints Hosea, Joel and Micah together without saying which custom reads which, so it does not settle this; hamichlol and Torat Chaim both give Ashkenaz Joel 2:15. Steinsaltz adds that some Ashkenazim read both the Joel and the Micah passages.", List.of(Custom.ASHKENAZ)));
            m.put(Custom.HAGRA, new Note(List.of("michlol", "torat-chaim", "steinsaltz"), "Torah Temimah prints Hosea, Joel and Micah together without saying which custom reads which, so it does not settle this; hamichlol and Torat Chaim both give Ashkenaz Joel 2:15. Steinsaltz adds that some Ashkenazim read both the Joel and the Micah passages.", List.of(Custom.ASHKENAZ)));
            m.put(Custom.SEFARD, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of()));
            m.put(Custom.CHABAD, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.PURE_SEPHARDIM, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.PERSIA, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.LIBYA, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.MAGREB, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.ALGERIA, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.ALGIERS, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.MOROCCO, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.FES, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.MARRAKESH, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.AGADIR, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.TOSHBIM, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.DJERBA, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.BAVLIM, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of(Custom.ROMANIA, Custom.SEFARD)));
            m.put(Custom.TEIMAN, new Note(List.of("torat-chaim"), null, List.of()));
            m.put(Custom.BALADI, new Note(List.of("torat-chaim"), null, List.of(Custom.TEIMAN)));
            m.put(Custom.SHAMI, new Note(List.of("torat-chaim"), null, List.of(Custom.TEIMAN)));
            m.put(Custom.ROMANIA, new Note(List.of(), "hamichlol gives Romania the same reading as Sefard here.", List.of()));
            w.put(Parsha.VAYEILECH, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of("michlol", "poznan-pinkas"), "Poznan reads Shuva here, on the Shabbos between Yom Kippur and Succos, having read Dirshu on Shabbos Shuvah -- the first of the two practices in kuntres Poznan. Its second practice reads Vaydaber David like the rest of Ashkenaz.", List.of()));
            w.put(Parsha.HAAZINU, java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            w.put(Parsha.VEZOT_HABRACHA, java.util.Collections.unmodifiableMap(m));
        }
        WEEKLY = java.util.Collections.unmodifiableMap(w);

        Map<String, Map<Custom, Note>> p = new HashMap<>();
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.CHABAD, new Note(List.of("chabad-haftarot"), "chabad.org states the rule directly: on a Shabbos that is Rosh Chodesh and also the eve of Rosh Chodesh, the first and last verse of Machar Chodesh follow the haftarah that was read. Fes reads the same two verses, on the older evidence these two customs were recorded together on.", List.of()));
            p.put("ErevRoshChodesh_SHABBAT_ADDITION", java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.CHABAD, new Note(List.of(), "Read after whichever haftarah displaced the Rosh Chodesh one. chabad.org states the pattern for Parshas HaChodesh falling on Rosh Chodesh or its eve, so it is not in doubt as a practice; what is not settled is whether it reaches Rosh Chodesh Av, where that page gives Shim'u and says nothing of an addition. Recorded without a source rather than narrowed on a guess.", List.of()));
            p.put("RoshChodesh_SHABBAT_ADDITION", java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            p.put("ParshasShekalim_MAIN", java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of("michlol", "poznan-pinkas"), null, List.of()));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            p.put("ParshasZachor_MAIN", java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            p.put("ParshasParah_MAIN", java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.SEFARD, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.POZNAN, new Note(List.of(), "Poznan reads with Sefard here, per hamichlol. hamichlol documents the Poznan readings from the community pinkas (poznan-pinkas).", List.of()));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), null, List.of()));
            p.put("ParshasHachodesh_MAIN", java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ASHKENAZ, new Note(List.of("steinsaltz"), null, List.of()));
            m.put(Custom.CHABAD, new Note(List.of("steinsaltz"), null, List.of()));
            m.put(Custom.FRANKFURT, new Note(List.of("michlol"), "hamichlol gives Romania the bare piece 1, the same as Frankfurt and Hagra read.", List.of()));
            m.put(Custom.HAGRA, new Note(List.of("michlol"), "hamichlol gives Romania the bare piece 1, the same as Frankfurt and Hagra read.", List.of()));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), "hamichlol gives Romania the bare piece 1, the same as Frankfurt and Hagra read.", List.of()));
            p.put("Pesach1_MAIN", java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.POZNAN, new Note(List.of("michlol", "poznan-pinkas"), "kuntres Poznan says they finish at 'vayamlichu tachtav'; which verses are skipped in the middle, if any, is not stated.", List.of()));
            p.put("Pesach2_MAIN", java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ASHKENAZ, new Note(List.of("michlol"), "hamichlol groups Romania with Ashkenaz here.", List.of()));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), "hamichlol groups Romania with Ashkenaz here.", List.of()));
            p.put("Shavuos2_MAIN", java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ASHKENAZ, new Note(List.of("michlol"), "On these fasts hamichlol keeps only the city of Algiers with Ashkenaz and Italki on Dirshu, against the rest of the Maghreb below: 'א, איט, קהילת העיר אלג'יר, רומ''. The Fast of Gedalia is the exception -- see there.", List.of()));
            m.put(Custom.CHABAD, new Note(List.of("michlol"), "On these fasts hamichlol keeps only the city of Algiers with Ashkenaz and Italki on Dirshu, against the rest of the Maghreb below: 'א, איט, קהילת העיר אלג'יר, רומ''. The Fast of Gedalia is the exception -- see there.", List.of()));
            m.put(Custom.ALGIERS, new Note(List.of("asulin", "michlol"), "On these fasts hamichlol keeps only the city of Algiers with Ashkenaz and Italki on Dirshu, against the rest of the Maghreb below: 'א, איט, קהילת העיר אלג'יר, רומ''. The Fast of Gedalia is the exception -- see there. The reading above is hamichlol's, which gives the city of Algiers Dirshu on these fasts. R. Avraham Asulin has it as 'Dirshu or Shuva with Micah', so the city may keep either. The two sources agree on the Fast of Gedalia and on Tisha BeAv.", List.of()));
            m.put(Custom.ROMANIA, new Note(List.of("michlol"), "On these fasts hamichlol keeps only the city of Algiers with Ashkenaz and Italki on Dirshu, against the rest of the Maghreb below: 'א, איט, קהילת העיר אלג'יר, רומ''. The Fast of Gedalia is the exception -- see there.", List.of()));
            m.put(Custom.ALGERIA, new Note(List.of("michlol", "asulin"), "Algeria apart from the city of Algiers, and Marrakesh with Bogmaz, on these fasts but not on the Fast of Gedalia. Morocco at large is not here: Asulin has Sefrou, Fes, Meknes and the rest of Morocco reading no haftarah on these fasts at all, so Morocco falls back to Magreb and Sefard, which read none.", List.of()));
            m.put(Custom.MARRAKESH, new Note(List.of("michlol", "asulin"), "Algeria apart from the city of Algiers, and Marrakesh with Bogmaz, on these fasts but not on the Fast of Gedalia. Morocco at large is not here: Asulin has Sefrou, Fes, Meknes and the rest of Morocco reading no haftarah on these fasts at all, so Morocco falls back to Magreb and Sefard, which read none.", List.of()));
            p.put("Fast_AFTERNOON_DEFAULT", java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.MARRAKESH, new Note(List.of("asulin"), "Asulin, reporting R. Meir Asulin and R. D. Tzabach: Marrakesh and Bogmaz read Shuva on the Fast of Gedalia, where the rest of Morocco reads Dirshu.", List.of()));
            m.put(Custom.MOROCCO, new Note(List.of("michlol", "asulin"), "hamichlol gives the Fast of Gedalia its own entry, in which Morocco and Algeria read Dirshu with Ashkenaz and Italki -- 'א, איט, חלק מסמג (בעיקר מרוקו ואלג'יריה)' -- rather than the Hosea reading they have on the other public fasts.", List.of()));
            m.put(Custom.ALGERIA, new Note(List.of("michlol", "asulin"), "hamichlol gives the Fast of Gedalia its own entry, in which Morocco and Algeria read Dirshu with Ashkenaz and Italki -- 'א, איט, חלק מסמג (בעיקר מרוקו ואלג'יריה)' -- rather than the Hosea reading they have on the other public fasts.", List.of()));
            m.put(Custom.AGADIR, new Note(List.of("asulin"), "Agadir and southern Morocco read no haftarah on the fasts, where the rest of Morocco reads Dirshu on this one.", List.of()));
            p.put("FastOfGedalia_AFTERNOON_EXCEPTIONS", java.util.Collections.unmodifiableMap(m));
        }
        {
            Map<Custom, Note> m = new java.util.EnumMap<>(Custom.class);
            m.put(Custom.ASHKENAZ, new Note(List.of("michlol", "chabad-org"), "hamichlol for Ashkenaz; chabad.org for Chabad, which reads Dirshu here rather than following Sefard. hamichlol names no Chabad practice at this occasion, but its rite key nests Chabad under Ashkenaz, so it implies the same. For Romania it says only 'קצת רומ'', some of Romania, on the strength of the Machzor of Romania (Venice 5283): 'יש קהלות שמפטירין דרשו, ורבינו האיי כת' שמפטירין' -- there are communities that read Dirshu, and Rabbeinu Hai wrote that they read. What the rest of Romania reads is not stated.", List.of()));
            m.put(Custom.CHABAD, new Note(List.of("michlol", "chabad-org"), "hamichlol for Ashkenaz; chabad.org for Chabad, which reads Dirshu here rather than following Sefard. hamichlol names no Chabad practice at this occasion, but its rite key nests Chabad under Ashkenaz, so it implies the same. For Romania it says only 'קצת רומ'', some of Romania, on the strength of the Machzor of Romania (Venice 5283): 'יש קהלות שמפטירין דרשו, ורבינו האיי כת' שמפטירין' -- there are communities that read Dirshu, and Rabbeinu Hai wrote that they read. What the rest of Romania reads is not stated.", List.of()));
            m.put(Custom.ROMANIA, new Note(List.of("michlol", "chabad-org"), "hamichlol for Ashkenaz; chabad.org for Chabad, which reads Dirshu here rather than following Sefard. hamichlol names no Chabad practice at this occasion, but its rite key nests Chabad under Ashkenaz, so it implies the same. For Romania it says only 'קצת רומ'', some of Romania, on the strength of the Machzor of Romania (Venice 5283): 'יש קהלות שמפטירין דרשו, ורבינו האיי כת' שמפטירין' -- there are communities that read Dirshu, and Rabbeinu Hai wrote that they read. What the rest of Romania reads is not stated.", List.of()));
            m.put(Custom.SEFARD, new Note(List.of("michlol"), null, List.of()));
            m.put(Custom.ITALKI, new Note(List.of("michlol", "asulin"), "hamichlol cites its own sources for both. For Italki, Machzor Shadal vol. 1, 189b. For Teiman it notes that the old Yemenite siddurim record no Mincha haftarah here at all; the practice was taken up in most communities in recent centuries, the Dor Daim excepted, and R. Yosef Kapach held in Siach Yerushalayim that those who do read it should not say the brachos, which was not accepted in practice.", List.of()));
            m.put(Custom.TEIMAN, new Note(List.of("michlol", "asulin"), "hamichlol cites its own sources for both. For Italki, Machzor Shadal vol. 1, 189b. For Teiman it notes that the old Yemenite siddurim record no Mincha haftarah here at all; the practice was taken up in most communities in recent centuries, the Dor Daim excepted, and R. Yosef Kapach held in Siach Yerushalayim that those who do read it should not say the brachos, which was not accepted in practice.", List.of()));
            m.put(Custom.AGADIR, new Note(List.of("asulin", "michlol"), "hamichlol cites its own sources for both. For Italki, Machzor Shadal vol. 1, 189b. For Teiman it notes that the old Yemenite siddurim record no Mincha haftarah here at all; the practice was taken up in most communities in recent centuries, the Dor Daim excepted, and R. Yosef Kapach held in Siach Yerushalayim that those who do read it should not say the brachos, which was not accepted in practice. Agadir and southern Morocco read Shuva here without the Micah ending that the rest of Sefard adds.", List.of()));
            p.put("TishaBeAv_AFTERNOON", java.util.Collections.unmodifiableMap(m));
        }
        SPECIAL = java.util.Collections.unmodifiableMap(p);
    }

    public static Source source(String id) { return SOURCES.get(id); }

    /** The note against this custom's weekly haftarah, or null. */
    public static Note weekly(Parsha parsha, Custom custom) {
        Map<Custom, Note> m = WEEKLY.get(parsha);
        return m == null ? null : m.get(custom);
    }

    /** The note against this custom's reading on a special day, or null. */
    public static Note special(String occasionAndName, Custom custom) {
        Map<Custom, Note> m = SPECIAL.get(occasionAndName);
        return m == null ? null : m.get(custom);
    }
}
