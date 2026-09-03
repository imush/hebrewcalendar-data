/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

package net.hebrewcalendar.data;

import java.util.HashMap;
import java.util.List;
import java.util.Map;

/** Chumash daily-aliyah boundaries. Keyed by the reading id
 *  (single parsha key, doubled JOINED_KEY, or VEZOT_HABRACHA). */
public final class ChumashAliyot {
    private ChumashAliyot() {}

    public static final String[] BOOKS = {
        null, "Genesis", "Exodus", "Leviticus", "Numbers", "Deuteronomy"
    };

    public static final class Reading {
        public final String id;
        public final List<String> parshiyot;   // 1 or 2 Parsha keys
        public final int book;                 // 1..5
        public final String[] aliyot;          // 7 Common (Ashkenaz) aliyot
        /** Chabad aliyot; null when identical to `aliyot`. */
        public final String[] aliyotChabad;
        /** The maftir: from where it begins to the end of the parsha.
         *  Null for combined readings, which take the second parsha's. */
        public final String maftir;
        public Reading(String id, List<String> parshiyot, int book,
                       String[] aliyot, String[] aliyotChabad, String maftir) {
            this.id = id; this.parshiyot = parshiyot;
            this.book = book; this.aliyot = aliyot;
            this.aliyotChabad = aliyotChabad; this.maftir = maftir;
        }
        /** Locale-aware aliyot picker: Chabad → chabad variant if present, else common. */
        public String[] aliyotFor(Custom custom) {
            return (custom == Custom.CHABAD && aliyotChabad != null) ? aliyotChabad : aliyot;
        }
    }

    public static final Map<String, Reading> READINGS;
    static {
        Map<String, Reading> m = new HashMap<>();
        m.put("BEREISHIT", new Reading("BEREISHIT", List.of("BEREISHIT"), 1, new String[]{ "1:1-2:3", "2:4-2:19", "2:20-3:21", "3:22-4:18", "4:19-4:22", "4:23-5:24", "5:25-6:8" }, null, "6:5-6:8"));
        m.put("NOACH", new Reading("NOACH", List.of("NOACH"), 1, new String[]{ "6:9-6:22", "7:1-7:16", "7:17-8:14", "8:15-9:7", "9:8-9:17", "9:18-10:32", "11:1-11:32" }, null, "11:29-11:32"));
        m.put("LECH_LECHA", new Reading("LECH_LECHA", List.of("LECH_LECHA"), 1, new String[]{ "12:1-12:13", "12:14-13:4", "13:5-13:18", "14:1-14:20", "14:21-15:6", "15:7-17:6", "17:7-17:27" }, null, "17:24-17:27"));
        m.put("VAYERA", new Reading("VAYERA", List.of("VAYERA"), 1, new String[]{ "18:1-18:14", "18:15-18:33", "19:1-19:20", "19:21-21:4", "21:5-21:21", "21:22-21:34", "22:1-22:24" }, null, "22:20-22:24"));
        m.put("CHAYEI_SARAH", new Reading("CHAYEI_SARAH", List.of("CHAYEI_SARAH"), 1, new String[]{ "23:1-23:16", "23:17-24:9", "24:10-24:26", "24:27-24:52", "24:53-24:67", "25:1-25:11", "25:12-25:18" }, null, "25:16-25:18"));
        m.put("TOLDOT", new Reading("TOLDOT", List.of("TOLDOT"), 1, new String[]{ "25:19-26:5", "26:6-26:12", "26:13-26:22", "26:23-26:29", "26:30-27:27", "27:28-28:4", "28:5-28:9" }, null, "28:7-28:9"));
        m.put("VAYETZE", new Reading("VAYETZE", List.of("VAYETZE"), 1, new String[]{ "28:10-28:22", "29:1-29:17", "29:18-30:13", "30:14-30:27", "30:28-31:16", "31:17-31:42", "31:43-32:3" }, null, "32:1-32:3"));
        m.put("VAYISHLACH", new Reading("VAYISHLACH", List.of("VAYISHLACH"), 1, new String[]{ "32:4-32:13", "32:14-32:30", "32:31-33:5", "33:6-33:20", "34:1-35:11", "35:12-36:19", "36:20-36:43" }, null, "36:40-36:43"));
        m.put("VAYESHEV", new Reading("VAYESHEV", List.of("VAYESHEV"), 1, new String[]{ "37:1-37:11", "37:12-37:22", "37:23-37:36", "38:1-38:30", "39:1-39:6", "39:7-39:23", "40:1-40:23" }, null, "40:20-40:23"));
        m.put("MIKETZ", new Reading("MIKETZ", List.of("MIKETZ"), 1, new String[]{ "41:1-41:14", "41:15-41:38", "41:39-41:52", "41:53-42:18", "42:19-43:15", "43:16-43:29", "43:30-44:17" }, null, "44:14-44:17"));
        m.put("VAYIGASH", new Reading("VAYIGASH", List.of("VAYIGASH"), 1, new String[]{ "44:18-44:30", "44:31-45:7", "45:8-45:18", "45:19-45:27", "45:28-46:27", "46:28-47:10", "47:11-47:27" }, new String[]{ "44:18-44:30", "44:31-45:7", "45:8-45:27", "45:28-46:7", "46:8-46:27", "46:28-47:10", "47:11-47:27" }, "47:25-47:27"));
        m.put("VAYECHI", new Reading("VAYECHI", List.of("VAYECHI"), 1, new String[]{ "47:28-48:9", "48:10-48:16", "48:17-48:22", "49:1-49:18", "49:19-49:26", "49:27-50:20", "50:21-50:26" }, null, "50:23-50:26"));
        m.put("SHEMOT", new Reading("SHEMOT", List.of("SHEMOT"), 2, new String[]{ "1:1-1:17", "1:18-2:10", "2:11-2:25", "3:1-3:15", "3:16-4:17", "4:18-4:31", "5:1-6:1" }, null, "5:22-6:1"));
        m.put("VAERA", new Reading("VAERA", List.of("VAERA"), 2, new String[]{ "6:2-6:13", "6:14-6:28", "6:29-7:7", "7:8-8:6", "8:7-8:18", "8:19-9:16", "9:17-9:35" }, null, "9:33-9:35"));
        m.put("BO", new Reading("BO", List.of("BO"), 2, new String[]{ "10:1-10:11", "10:12-10:23", "10:24-11:3", "11:4-12:20", "12:21-12:28", "12:29-12:51", "13:1-13:16" }, null, "13:14-13:16"));
        m.put("BESHALACH", new Reading("BESHALACH", List.of("BESHALACH"), 2, new String[]{ "13:17-14:8", "14:9-14:14", "14:15-14:25", "14:26-15:26", "15:27-16:10", "16:11-16:36", "17:1-17:16" }, null, "17:14-17:16"));
        m.put("YITRO", new Reading("YITRO", List.of("YITRO"), 2, new String[]{ "18:1-18:12", "18:13-18:23", "18:24-18:27", "19:1-19:6", "19:7-19:19", "19:20-20:14", "20:15-20:23" }, null, "20:19-20:23"));
        m.put("MISHPATIM", new Reading("MISHPATIM", List.of("MISHPATIM"), 2, new String[]{ "21:1-21:19", "21:20-22:3", "22:4-22:26", "22:27-23:5", "23:6-23:19", "23:20-23:25", "23:26-24:18" }, null, "24:15-24:18"));
        m.put("TERUMAH", new Reading("TERUMAH", List.of("TERUMAH"), 2, new String[]{ "25:1-25:16", "25:17-25:30", "25:31-26:14", "26:15-26:30", "26:31-26:37", "27:1-27:8", "27:9-27:19" }, null, "27:17-27:19"));
        m.put("TETZAVEH", new Reading("TETZAVEH", List.of("TETZAVEH"), 2, new String[]{ "27:20-28:12", "28:13-28:30", "28:31-28:43", "29:1-29:18", "29:19-29:37", "29:38-29:46", "30:1-30:10" }, null, "30:8-30:10"));
        m.put("KI_TISA", new Reading("KI_TISA", List.of("KI_TISA"), 2, new String[]{ "30:11-31:17", "31:18-33:11", "33:12-33:16", "33:17-33:23", "34:1-34:9", "34:10-34:26", "34:27-34:35" }, null, "34:33-34:35"));
        m.put("VAYAKHEL", new Reading("VAYAKHEL", List.of("VAYAKHEL"), 2, new String[]{ "35:1-35:20", "35:21-35:29", "35:30-36:7", "36:8-36:19", "36:20-37:16", "37:17-37:29", "38:1-38:20" }, null, "38:18-38:20"));
        m.put("PEKUDEI", new Reading("PEKUDEI", List.of("PEKUDEI"), 2, new String[]{ "38:21-39:1", "39:2-39:21", "39:22-39:32", "39:33-39:43", "40:1-40:16", "40:17-40:27", "40:28-40:38" }, null, "40:34-40:38"));
        m.put("VAYIKRA", new Reading("VAYIKRA", List.of("VAYIKRA"), 3, new String[]{ "1:1-1:13", "1:14-2:6", "2:7-2:16", "3:1-3:17", "4:1-4:26", "4:27-5:10", "5:11-5:26" }, null, "5:24-5:26"));
        m.put("TZAV", new Reading("TZAV", List.of("TZAV"), 3, new String[]{ "6:1-6:11", "6:12-7:10", "7:11-7:38", "8:1-8:13", "8:14-8:21", "8:22-8:29", "8:30-8:36" }, null, "8:33-8:36"));
        m.put("SHEMINI", new Reading("SHEMINI", List.of("SHEMINI"), 3, new String[]{ "9:1-9:16", "9:17-9:23", "9:24-10:11", "10:12-10:15", "10:16-10:20", "11:1-11:32", "11:33-11:47" }, null, "11:45-11:47"));
        m.put("TAZRIA", new Reading("TAZRIA", List.of("TAZRIA"), 3, new String[]{ "12:1-13:5", "13:6-13:17", "13:18-13:23", "13:24-13:28", "13:29-13:39", "13:40-13:54", "13:55-13:59" }, null, "13:57-13:59"));
        m.put("METZORA", new Reading("METZORA", List.of("METZORA"), 3, new String[]{ "14:1-14:12", "14:13-14:20", "14:21-14:32", "14:33-14:53", "14:54-15:15", "15:16-15:28", "15:29-15:33" }, null, "15:31-15:33"));
        m.put("ACHAREI_MOT", new Reading("ACHAREI_MOT", List.of("ACHAREI_MOT"), 3, new String[]{ "16:1-16:17", "16:18-16:24", "16:25-16:34", "17:1-17:7", "17:8-18:5", "18:6-18:21", "18:22-18:30" }, null, "18:28-18:30"));
        m.put("KEDOSHIM", new Reading("KEDOSHIM", List.of("KEDOSHIM"), 3, new String[]{ "19:1-19:14", "19:15-19:22", "19:23-19:32", "19:33-19:37", "20:1-20:7", "20:8-20:22", "20:23-20:27" }, null, "20:25-20:27"));
        m.put("EMOR", new Reading("EMOR", List.of("EMOR"), 3, new String[]{ "21:1-21:15", "21:16-22:16", "22:17-22:33", "23:1-23:22", "23:23-23:32", "23:33-23:44", "24:1-24:23" }, null, "24:21-24:23"));
        m.put("BEHAR", new Reading("BEHAR", List.of("BEHAR"), 3, new String[]{ "25:1-25:13", "25:14-25:18", "25:19-25:24", "25:25-25:28", "25:29-25:38", "25:39-25:46", "25:47-26:2" }, null, "25:55-26:2"));
        m.put("BECHUKOTAI", new Reading("BECHUKOTAI", List.of("BECHUKOTAI"), 3, new String[]{ "26:3-26:5", "26:6-26:9", "26:10-26:46", "27:1-27:15", "27:16-27:21", "27:22-27:28", "27:29-27:34" }, null, "27:32-27:34"));
        m.put("BAMIDBAR", new Reading("BAMIDBAR", List.of("BAMIDBAR"), 4, new String[]{ "1:1-1:19", "1:20-1:54", "2:1-2:34", "3:1-3:13", "3:14-3:39", "3:40-3:51", "4:1-4:20" }, null, "4:17-4:20"));
        m.put("NASO", new Reading("NASO", List.of("NASO"), 4, new String[]{ "4:21-4:37", "4:38-4:49", "5:1-5:10", "5:11-6:27", "7:1-7:41", "7:42-7:71", "7:72-7:89" }, new String[]{ "4:21-4:37", "4:38-4:49", "5:1-5:10", "5:11-6:27", "7:1-7:41", "7:42-7:83", "7:84-7:89" }, "7:87-7:89"));
        m.put("BEHAALOTECHA", new Reading("BEHAALOTECHA", List.of("BEHAALOTECHA"), 4, new String[]{ "8:1-8:14", "8:15-8:26", "9:1-9:14", "9:15-10:10", "10:11-10:34", "10:35-11:29", "11:30-12:16" }, null, "12:14-12:16"));
        m.put("SHELACH", new Reading("SHELACH", List.of("SHELACH"), 4, new String[]{ "13:1-13:20", "13:21-14:7", "14:8-14:25", "14:26-15:7", "15:8-15:16", "15:17-15:26", "15:27-15:41" }, null, "15:37-15:41"));
        m.put("KORACH", new Reading("KORACH", List.of("KORACH"), 4, new String[]{ "16:1-16:13", "16:14-16:19", "16:20-17:8", "17:9-17:15", "17:16-17:24", "17:25-18:20", "18:21-18:32" }, null, "18:30-18:32"));
        m.put("CHUKAT", new Reading("CHUKAT", List.of("CHUKAT"), 4, new String[]{ "19:1-19:17", "19:18-20:6", "20:7-20:13", "20:14-20:21", "20:22-21:9", "21:10-21:20", "21:21-22:1" }, null, "21:34-22:1"));
        m.put("BALAK", new Reading("BALAK", List.of("BALAK"), 4, new String[]{ "22:2-22:12", "22:13-22:20", "22:21-22:38", "22:39-23:12", "23:13-23:26", "23:27-24:13", "24:14-25:9" }, null, "25:7-25:9"));
        m.put("PINCHAS", new Reading("PINCHAS", List.of("PINCHAS"), 4, new String[]{ "25:10-26:4", "26:5-26:51", "26:52-27:5", "27:6-27:23", "28:1-28:15", "28:16-29:11", "29:12-30:1" }, null, "29:35-30:1"));
        m.put("MATOT", new Reading("MATOT", List.of("MATOT"), 4, new String[]{ "30:2-30:17", "31:1-31:12", "31:13-31:24", "31:25-31:41", "31:42-31:54", "32:1-32:19", "32:20-32:42" }, null, "32:39-32:42"));
        m.put("MASEI", new Reading("MASEI", List.of("MASEI"), 4, new String[]{ "33:1-33:49", "33:50-33:53", "33:54-34:15", "34:16-34:29", "35:1-35:8", "35:9-35:34", "36:1-36:13" }, null, "36:11-36:13"));
        m.put("DEVARIM", new Reading("DEVARIM", List.of("DEVARIM"), 5, new String[]{ "1:1-1:10", "1:11-1:21", "1:22-1:38", "1:39-2:1", "2:2-2:30", "2:31-3:14", "3:15-3:22" }, new String[]{ "1:1-1:11", "1:12-1:21", "1:22-1:38", "1:39-2:1", "2:2-2:30", "2:31-3:14", "3:15-3:22" }, "3:20-3:22"));
        m.put("VAETCHANAN", new Reading("VAETCHANAN", List.of("VAETCHANAN"), 5, new String[]{ "3:23-4:4", "4:5-4:40", "4:41-4:49", "5:1-5:18", "5:19-6:3", "6:4-6:25", "7:1-7:11" }, null, "7:9-7:11"));
        m.put("EIKEV", new Reading("EIKEV", List.of("EIKEV"), 5, new String[]{ "7:12-8:10", "8:11-9:3", "9:4-9:29", "10:1-10:11", "10:12-11:9", "11:10-11:21", "11:22-11:25" }, null, "11:22-11:25"));
        m.put("REEH", new Reading("REEH", List.of("REEH"), 5, new String[]{ "11:26-12:10", "12:11-12:28", "12:29-13:19", "14:1-14:21", "14:22-14:29", "15:1-15:18", "15:19-16:17" }, null, "16:13-16:17"));
        m.put("SHOFTIM", new Reading("SHOFTIM", List.of("SHOFTIM"), 5, new String[]{ "16:18-17:13", "17:14-17:20", "18:1-18:5", "18:6-18:13", "18:14-19:13", "19:14-20:9", "20:10-21:9" }, null, "21:7-21:9"));
        m.put("KI_TEITZEI", new Reading("KI_TEITZEI", List.of("KI_TEITZEI"), 5, new String[]{ "21:10-21:21", "21:22-22:7", "22:8-23:7", "23:8-23:24", "23:25-24:4", "24:5-24:13", "24:14-25:19" }, null, "25:17-25:19"));
        m.put("KI_TAVO", new Reading("KI_TAVO", List.of("KI_TAVO"), 5, new String[]{ "26:1-26:11", "26:12-26:15", "26:16-26:19", "27:1-27:10", "27:11-28:6", "28:7-28:69", "29:1-29:8" }, null, "29:6-29:8"));
        m.put("NITZAVIM", new Reading("NITZAVIM", List.of("NITZAVIM"), 5, new String[]{ "29:9-29:11", "29:12-29:14", "29:15-29:28", "30:1-30:6", "30:7-30:10", "30:11-30:14", "30:15-30:20" }, null, "30:15-30:20"));
        m.put("VAYEILECH", new Reading("VAYEILECH", List.of("VAYEILECH"), 5, new String[]{ "31:1-31:3", "31:4-31:6", "31:7-31:9", "31:10-31:13", "31:14-31:19", "31:20-31:24", "31:25-31:30" }, null, "31:28-31:30"));
        m.put("HAAZINU", new Reading("HAAZINU", List.of("HAAZINU"), 5, new String[]{ "32:1-32:6", "32:7-32:12", "32:13-32:18", "32:19-32:28", "32:29-32:39", "32:40-32:43", "32:44-32:52" }, null, "32:48-32:52"));
        m.put("VAYAKHEL_PEKUDEI", new Reading("VAYAKHEL_PEKUDEI", List.of("VAYAKHEL", "PEKUDEI"), 2, new String[]{ "35:1-35:29", "35:30-37:16", "37:17-37:29", "38:1-39:1", "39:2-39:21", "39:22-39:43", "40:1-40:38" }, null, null));
        m.put("TAZRIA_METZORA", new Reading("TAZRIA_METZORA", List.of("TAZRIA", "METZORA"), 3, new String[]{ "12:1-13:23", "13:24-13:39", "13:40-13:54", "13:55-14:20", "14:21-14:32", "14:33-15:15", "15:16-15:33" }, null, null));
        m.put("ACHAREI_MOT_KEDOSHIM", new Reading("ACHAREI_MOT_KEDOSHIM", List.of("ACHAREI_MOT", "KEDOSHIM"), 3, new String[]{ "16:1-16:24", "16:25-17:7", "17:8-18:21", "18:22-19:14", "19:15-19:32", "19:33-20:7", "20:8-20:27" }, null, null));
        m.put("BEHAR_BECHUKOTAI", new Reading("BEHAR_BECHUKOTAI", List.of("BEHAR", "BECHUKOTAI"), 3, new String[]{ "25:1-25:18", "25:19-25:28", "25:29-25:38", "25:39-26:9", "26:10-26:46", "27:1-27:15", "27:16-27:34" }, null, null));
        m.put("CHUKAT_BALAK", new Reading("CHUKAT_BALAK", List.of("CHUKAT", "BALAK"), 4, new String[]{ "19:1-20:6", "20:7-20:21", "20:22-21:20", "21:21-22:12", "22:13-22:38", "22:39-23:26", "23:27-25:9" }, null, null));
        m.put("MATOT_MASEI", new Reading("MATOT_MASEI", List.of("MATOT", "MASEI"), 4, new String[]{ "30:2-31:12", "31:13-31:54", "32:1-32:19", "32:20-33:49", "33:50-34:15", "34:16-35:8", "35:9-36:13" }, null, null));
        m.put("NITZAVIM_VAYEILECH", new Reading("NITZAVIM_VAYEILECH", List.of("NITZAVIM", "VAYEILECH"), 5, new String[]{ "29:9-29:28", "30:1-30:6", "30:7-30:14", "30:15-31:6", "31:7-31:13", "31:14-31:19", "31:20-31:30" }, null, null));
        m.put("VEZOT_HABRACHA", new Reading("VEZOT_HABRACHA", List.of("VEZOT_HABRACHA"), 5, new String[]{ "33:1-33:7", "33:8-33:12", "33:13-33:17", "33:18-33:21", "33:22-33:26", "33:27-33:29", "34:1-34:12" }, null, "34:1-34:12"));
        READINGS = java.util.Collections.unmodifiableMap(m);
    }
}
