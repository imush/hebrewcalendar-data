/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

package net.hebrewcalendar.data;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

/** Torah readings of the special days, from opentorah SpecialReadings.xml.
 *  Keyed by "Occasion_readingName", e.g. "RoshChodesh_torah". */
public final class SpecialTorah {
    private SpecialTorah() {}

    /** A span of Chumash: one aliyah fragment, or a whole maftir. */
    public static final class Span {
        public final String book;
        public final int fromCh, fromV, toCh, toV;
        Span(String book, int fromCh, int fromV, int toCh, int toV) {
            this.book = book;
            this.fromCh = fromCh; this.fromV = fromV;
            this.toCh   = toCh;   this.toV   = toV;
        }
    }

    private static final Map<String, List<Span>> ALL;
    static {
        Map<String, List<Span>> all = new HashMap<>();
        all.put("RoshChodesh_torah", List.of(new Span("Numbers", 28, 1, 28, 2), new Span("Numbers", 28, 3, 28, 3), new Span("Numbers", 28, 4, 28, 5), new Span("Numbers", 28, 6, 28, 8), new Span("Numbers", 28, 9, 28, 10), new Span("Numbers", 28, 11, 28, 15)));
        all.put("FestivalEnd_shabbosTorah", List.of(new Span("Deuteronomy", 14, 22, 14, 29), new Span("Deuteronomy", 15, 1, 15, 18), new Span("Deuteronomy", 15, 19, 15, 23), new Span("Deuteronomy", 16, 1, 16, 3), new Span("Deuteronomy", 16, 4, 16, 8), new Span("Deuteronomy", 16, 9, 16, 12), new Span("Deuteronomy", 16, 13, 16, 17)));
        all.put("IntermediateShabbos_torah", List.of(new Span("Exodus", 33, 12, 33, 16), new Span("Exodus", 33, 17, 33, 19), new Span("Exodus", 33, 20, 33, 23), new Span("Exodus", 34, 1, 34, 3), new Span("Exodus", 34, 4, 34, 10), new Span("Exodus", 34, 11, 34, 17), new Span("Exodus", 34, 18, 34, 26)));
        all.put("RoshHashanah1_shabbosTorah", List.of(new Span("Genesis", 21, 1, 21, 4), new Span("Genesis", 21, 5, 21, 8), new Span("Genesis", 21, 9, 21, 12), new Span("Genesis", 21, 13, 21, 17), new Span("Genesis", 21, 18, 21, 21), new Span("Genesis", 21, 22, 21, 27), new Span("Genesis", 21, 28, 21, 34)));
        all.put("RoshHashanah1_maftir", List.of(new Span("Numbers", 29, 1, 29, 6)));
        all.put("RoshHashanah2_torah", List.of(new Span("Genesis", 22, 1, 22, 3), new Span("Genesis", 22, 4, 22, 8), new Span("Genesis", 22, 9, 22, 14), new Span("Genesis", 22, 15, 22, 19), new Span("Genesis", 22, 20, 22, 24)));
        all.put("YomKippur_shabbosTorah", List.of(new Span("Leviticus", 16, 1, 16, 3), new Span("Leviticus", 16, 4, 16, 6), new Span("Leviticus", 16, 7, 16, 11), new Span("Leviticus", 16, 12, 16, 17), new Span("Leviticus", 16, 18, 16, 24), new Span("Leviticus", 16, 25, 16, 30), new Span("Leviticus", 16, 31, 16, 34)));
        all.put("YomKippur_maftir", List.of(new Span("Numbers", 29, 7, 29, 11)));
        all.put("YomKippur_afternoonTorah", List.of(new Span("Leviticus", 18, 1, 18, 5), new Span("Leviticus", 18, 6, 18, 21), new Span("Leviticus", 18, 22, 18, 30)));
        all.put("Succos_korbanot", List.of(new Span("Numbers", 29, 12, 29, 16), new Span("Numbers", 29, 17, 29, 19), new Span("Numbers", 29, 20, 29, 22), new Span("Numbers", 29, 23, 29, 25), new Span("Numbers", 29, 26, 29, 28), new Span("Numbers", 29, 29, 29, 31), new Span("Numbers", 29, 32, 29, 34), new Span("Numbers", 29, 35, 30, 1)));
        all.put("Succos1_shabbosTorah", List.of(new Span("Leviticus", 22, 26, 22, 33), new Span("Leviticus", 23, 1, 23, 3), new Span("Leviticus", 23, 4, 23, 8), new Span("Leviticus", 23, 9, 23, 14), new Span("Leviticus", 23, 15, 23, 22), new Span("Leviticus", 23, 23, 23, 32), new Span("Leviticus", 23, 33, 23, 44)));
        all.put("SimchasTorah_chassanBereishis", List.of(new Span("Genesis", 1, 1, 2, 3)));
        all.put("Chanukah_day1Cohen", List.of(new Span("Numbers", 6, 22, 6, 27), new Span("Numbers", 7, 1, 7, 11)));
        all.put("Chanukah_korbanot", List.of(new Span("Numbers", 7, 12, 7, 14), new Span("Numbers", 7, 15, 7, 17), new Span("Numbers", 7, 18, 7, 20), new Span("Numbers", 7, 21, 7, 23), new Span("Numbers", 7, 24, 7, 26), new Span("Numbers", 7, 27, 7, 29), new Span("Numbers", 7, 30, 7, 32), new Span("Numbers", 7, 33, 7, 35), new Span("Numbers", 7, 36, 7, 38), new Span("Numbers", 7, 39, 7, 41), new Span("Numbers", 7, 42, 7, 44), new Span("Numbers", 7, 45, 7, 47), new Span("Numbers", 7, 48, 7, 50), new Span("Numbers", 7, 51, 7, 53), new Span("Numbers", 7, 54, 7, 56), new Span("Numbers", 7, 57, 7, 59), new Span("Numbers", 7, 60, 8, 4)));
        all.put("ParshasShekalim_maftir", List.of(new Span("Exodus", 30, 11, 30, 16)));
        all.put("ParshasZachor_maftir", List.of(new Span("Deuteronomy", 25, 17, 25, 19)));
        all.put("Purim_torah", List.of(new Span("Exodus", 17, 8, 17, 10), new Span("Exodus", 17, 11, 17, 13), new Span("Exodus", 17, 14, 17, 16)));
        all.put("ParshasParah_maftir", List.of(new Span("Numbers", 19, 1, 19, 22)));
        all.put("ParshasHachodesh_maftir", List.of(new Span("Exodus", 12, 1, 12, 20)));
        all.put("PesachIntermediate_torah3", List.of(new Span("Exodus", 13, 1, 13, 4), new Span("Exodus", 13, 5, 13, 10), new Span("Exodus", 13, 11, 13, 16)));
        all.put("PesachIntermediate_torah4", List.of(new Span("Exodus", 22, 24, 22, 26), new Span("Exodus", 22, 27, 23, 5), new Span("Exodus", 23, 6, 23, 19)));
        all.put("PesachIntermediate_torah6", List.of(new Span("Numbers", 9, 1, 9, 6), new Span("Numbers", 9, 7, 9, 8), new Span("Numbers", 9, 9, 9, 14)));
        all.put("PesachIntermediate_maftirEnd", List.of(new Span("Numbers", 28, 19, 28, 25)));
        all.put("Pesach1_shabbosTorah", List.of(new Span("Exodus", 12, 21, 12, 24), new Span("Exodus", 12, 25, 12, 28), new Span("Exodus", 12, 29, 12, 32), new Span("Exodus", 12, 33, 12, 36), new Span("Exodus", 12, 37, 12, 42), new Span("Exodus", 12, 43, 12, 47), new Span("Exodus", 12, 48, 12, 51)));
        all.put("Pesach1_maftir", List.of(new Span("Numbers", 28, 16, 28, 25)));
        all.put("Pesach7_shabbosTorah", List.of(new Span("Exodus", 13, 17, 13, 19), new Span("Exodus", 13, 20, 13, 22), new Span("Exodus", 14, 1, 14, 4), new Span("Exodus", 14, 5, 14, 8), new Span("Exodus", 14, 9, 14, 14), new Span("Exodus", 14, 15, 14, 25), new Span("Exodus", 14, 26, 15, 26)));
        all.put("Shavuos1_torah", List.of(new Span("Exodus", 19, 1, 19, 6), new Span("Exodus", 19, 7, 19, 13), new Span("Exodus", 19, 14, 19, 19), new Span("Exodus", 19, 20, 20, 14), new Span("Exodus", 20, 15, 20, 22)));
        all.put("Shavuos1_maftir", List.of(new Span("Numbers", 28, 26, 28, 31)));
        all.put("Fast_afternoonTorahPart1", List.of(new Span("Exodus", 32, 11, 32, 14)));
        all.put("TishaBeAv_torah", List.of(new Span("Deuteronomy", 4, 25, 4, 29), new Span("Deuteronomy", 4, 30, 4, 35), new Span("Deuteronomy", 4, 36, 4, 40)));
        ALL = java.util.Collections.unmodifiableMap(all);
    }

    /** The fragments of the named reading, or null if there is none. */
    public static List<Span> forReading(String occasionAndName) {
        return ALL.get(occasionAndName);
    }
}
