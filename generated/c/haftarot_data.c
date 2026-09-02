/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

#include "haftarot_data.h"
#include <string.h>

/* ── Tanach book names ──────────────────────────────────────── */
static const char *const HC_TANACH_BOOK_NAMES[HC_BOOK_COUNT] = {
    [HC_BOOK_NONE] = "",
    [HC_BOOK_GENESIS] = "Genesis",
    [HC_BOOK_EXODUS] = "Exodus",
    [HC_BOOK_LEVITICUS] = "Leviticus",
    [HC_BOOK_NUMBERS] = "Numbers",
    [HC_BOOK_DEUTERONOMY] = "Deuteronomy",
    [HC_BOOK_JOSHUA] = "Joshua",
    [HC_BOOK_JUDGES] = "Judges",
    [HC_BOOK_I_SAMUEL] = "Samuel I",
    [HC_BOOK_II_SAMUEL] = "Samuel II",
    [HC_BOOK_I_KINGS] = "Kings I",
    [HC_BOOK_II_KINGS] = "Kings II",
    [HC_BOOK_ISAIAH] = "Isaiah",
    [HC_BOOK_JEREMIAH] = "Jeremiah",
    [HC_BOOK_EZEKIEL] = "Ezekiel",
    [HC_BOOK_HOSEA] = "Hosea",
    [HC_BOOK_JOEL] = "Joel",
    [HC_BOOK_AMOS] = "Amos",
    [HC_BOOK_OBADIAH] = "Obadiah",
    [HC_BOOK_JONAH] = "Jonah",
    [HC_BOOK_MICAH] = "Micah",
    [HC_BOOK_NAHUM] = "Nahum",
    [HC_BOOK_HABAKKUK] = "Habakkuk",
    [HC_BOOK_ZEPHANIAH] = "Zephaniah",
    [HC_BOOK_HAGGAI] = "Haggai",
    [HC_BOOK_ZECHARIAH] = "Zechariah",
    [HC_BOOK_MALACHI] = "Malachi",
};

const char *hc_tanach_book_name(hc_tanach_book b) {
    if (b <= HC_BOOK_NONE || b >= HC_BOOK_COUNT) return NULL;
    return HC_TANACH_BOOK_NAMES[b];
}

/* ── Weekly parsha haftarot ──────────────────────────────────── */
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 42, 5, 43, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_POZNAN[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_ITALKI[] = {
    { HC_BOOK_ISAIAH, 42, 1, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_LITA[] = {
    { HC_BOOK_ISAIAH, 42, 5, 43, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 42, 5, 43, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_HAGRA[] = {
    { HC_BOOK_ISAIAH, 42, 5, 43, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_SEFARD[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_CHABAD[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_PERSIA[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_LIBYA[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_MAGREB[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_FES[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_AGADIR[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_DJERBA[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 42, 5, 42, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 42, 1, 42, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_BALADI[] = {
    { HC_BOOK_ISAIAH, 42, 1, 42, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_SHAMI[] = {
    { HC_BOOK_ISAIAH, 42, 1, 42, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_BEREISHIT_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 65, 16, 66, 11 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_POZNAN[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_ITALKI[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_LITA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_HAGRA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_SEFARD[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_CHABAD[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_PERSIA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_LIBYA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_MAGREB[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_FES[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_AGADIR[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_DJERBA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_BALADI[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_SHAMI[] = {
    { HC_BOOK_ISAIAH, 54, 1, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_NOACH_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 54, 9, 55, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_POZNAN[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_ITALKI[] = {
    { HC_BOOK_ISAIAH, 40, 25, 41, 17 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_LITA[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_HAGRA[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_SEFARD[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_CHABAD[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_PERSIA[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_LIBYA[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_MAGREB[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_FES[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_AGADIR[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_DJERBA[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 40, 25, 41, 17 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_BALADI[] = {
    { HC_BOOK_ISAIAH, 40, 25, 41, 17 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_SHAMI[] = {
    { HC_BOOK_ISAIAH, 40, 25, 41, 17 },
};
static const hc_haftarah_ref HC_HAFT_W_LECH_LECHA_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 40, 27, 41, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_ASHKENAZ[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 37 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_POZNAN[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_ITALKI[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 37 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_FRANKFURT[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 37 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_LITA[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 37 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_CHAYEY_ODOM[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 37 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_HAGRA[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 37 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_SEFARD[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_CHABAD[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 37 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_PURE_SEPHARDIM[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_PERSIA[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_LIBYA[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_MAGREB[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_ALGERIA[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 37 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_ALGIERS[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 37 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_MOROCCO[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_FES[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_MARRAKESH[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_AGADIR[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_TOSHBIM[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_DJERBA[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_BAVLIM[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_TEIMAN[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_BALADI[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_SHAMI[] = {
    { HC_BOOK_II_KINGS, 4, 1, 4, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYERA_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 33, 17, 34, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_ASHKENAZ[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_POZNAN[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_ITALKI[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 34 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_FRANKFURT[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_LITA[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_CHAYEY_ODOM[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_HAGRA[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_SEFARD[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_CHABAD[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_PERSIA[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_LIBYA[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_MAGREB[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_ALGERIA[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_ALGIERS[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_MOROCCO[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_FES[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_MARRAKESH[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_AGADIR[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_TOSHBIM[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_DJERBA[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_BAVLIM[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_TEIMAN[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_BALADI[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_SHAMI[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_CHAYEI_SARAH_ROMANIA[] = {
    { HC_BOOK_I_KINGS, 1, 1, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_ASHKENAZ[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_POZNAN[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_ITALKI[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_FRANKFURT[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_LITA[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_CHAYEY_ODOM[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_HAGRA[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_SEFARD[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_CHABAD[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_PURE_SEPHARDIM[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_PERSIA[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_LIBYA[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_MAGREB[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_ALGERIA[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_ALGIERS[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_MOROCCO[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_FES[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_MARRAKESH[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_AGADIR[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_TOSHBIM[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_DJERBA[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_BAVLIM[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_TEIMAN[] = {
    { HC_BOOK_MALACHI, 1, 1, 3, 4 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_BALADI[] = {
    { HC_BOOK_MALACHI, 1, 1, 3, 4 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_SHAMI[] = {
    { HC_BOOK_MALACHI, 1, 1, 3, 4 },
};
static const hc_haftarah_ref HC_HAFT_W_TOLDOT_ROMANIA[] = {
    { HC_BOOK_MALACHI, 1, 1, 2, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_ASHKENAZ[] = {
    { HC_BOOK_HOSEA, 12, 13, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_POZNAN[] = {
    { HC_BOOK_HOSEA, 12, 13, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_ITALKI[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_FRANKFURT[] = {
    { HC_BOOK_HOSEA, 12, 13, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_LITA[] = {
    { HC_BOOK_HOSEA, 12, 13, 14, 10 },
    { HC_BOOK_JOEL, 2, 26, 2, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_CHAYEY_ODOM[] = {
    { HC_BOOK_HOSEA, 12, 13, 14, 10 },
    { HC_BOOK_JOEL, 2, 26, 2, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_HAGRA[] = {
    { HC_BOOK_HOSEA, 12, 13, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_SEFARD[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_CHABAD[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_PURE_SEPHARDIM[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_PERSIA[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_LIBYA[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_MAGREB[] = {
    { HC_BOOK_HOSEA, 11, 7, 13, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_ALGERIA[] = {
    { HC_BOOK_HOSEA, 11, 7, 13, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_ALGIERS[] = {
    { HC_BOOK_HOSEA, 11, 7, 13, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_MOROCCO[] = {
    { HC_BOOK_HOSEA, 11, 7, 13, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_FES[] = {
    { HC_BOOK_HOSEA, 11, 7, 13, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_MARRAKESH[] = {
    { HC_BOOK_HOSEA, 11, 7, 13, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_AGADIR[] = {
    { HC_BOOK_HOSEA, 11, 7, 13, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_TOSHBIM[] = {
    { HC_BOOK_HOSEA, 11, 7, 13, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_DJERBA[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_BAVLIM[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_TEIMAN[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_BALADI[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_SHAMI[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYETZE_ROMANIA[] = {
    { HC_BOOK_HOSEA, 12, 13, 14, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_ASHKENAZ[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_POZNAN[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_ITALKI[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_FRANKFURT[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_LITA[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_CHAYEY_ODOM[] = {
    { HC_BOOK_HOSEA, 11, 7, 12, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_HAGRA[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_SEFARD[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_CHABAD[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_PURE_SEPHARDIM[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_PERSIA[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_LIBYA[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_MAGREB[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_ALGERIA[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_ALGIERS[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_MOROCCO[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_FES[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_MARRAKESH[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_AGADIR[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_TOSHBIM[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_DJERBA[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_BAVLIM[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_TEIMAN[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_BALADI[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_SHAMI[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYISHLACH_ROMANIA[] = {
    { HC_BOOK_OBADIAH, 1, 1, 1, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_ASHKENAZ[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_POZNAN[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_ITALKI[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_FRANKFURT[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_LITA[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_CHAYEY_ODOM[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_HAGRA[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_SEFARD[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_CHABAD[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_PURE_SEPHARDIM[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_PERSIA[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_LIBYA[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_MAGREB[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_ALGERIA[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_ALGIERS[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_MOROCCO[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_FES[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_MARRAKESH[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_AGADIR[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_TOSHBIM[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_DJERBA[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_BAVLIM[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_TEIMAN[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_BALADI[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_SHAMI[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYESHEV_ROMANIA[] = {
    { HC_BOOK_AMOS, 2, 6, 3, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_ASHKENAZ[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_POZNAN[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_ITALKI[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_FRANKFURT[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_LITA[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_CHAYEY_ODOM[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_HAGRA[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_SEFARD[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_CHABAD[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_PERSIA[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_LIBYA[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_MAGREB[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_ALGERIA[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_ALGIERS[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_MOROCCO[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_FES[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_MARRAKESH[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_AGADIR[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_TOSHBIM[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_DJERBA[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_BAVLIM[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_TEIMAN[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_BALADI[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_SHAMI[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_MIKETZ_ROMANIA[] = {
    { HC_BOOK_I_KINGS, 3, 15, 4, 1 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_ASHKENAZ[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_POZNAN[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_FRANKFURT[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_LITA[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_CHAYEY_ODOM[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_HAGRA[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_SEFARD[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_CHABAD[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_PURE_SEPHARDIM[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_FES[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_BALADI[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIGASH_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 37, 15, 37, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_ASHKENAZ[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_POZNAN[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_ITALKI[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_FRANKFURT[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_LITA[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_CHAYEY_ODOM[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_HAGRA[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_SEFARD[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_CHABAD[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_PERSIA[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_LIBYA[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_MAGREB[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_ALGERIA[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_ALGIERS[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_MOROCCO[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_FES[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_MARRAKESH[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_AGADIR[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_TOSHBIM[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_DJERBA[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_BAVLIM[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_TEIMAN[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_BALADI[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_SHAMI[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYECHI_ROMANIA[] = {
    { HC_BOOK_I_KINGS, 2, 1, 2, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 27, 6, 28, 13 },
    { HC_BOOK_ISAIAH, 29, 22, 29, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_POZNAN[] = {
    { HC_BOOK_ISAIAH, 27, 6, 28, 13 },
    { HC_BOOK_ISAIAH, 29, 22, 29, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_ITALKI[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 1, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 27, 6, 28, 13 },
    { HC_BOOK_ISAIAH, 29, 22, 29, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_LITA[] = {
    { HC_BOOK_ISAIAH, 27, 6, 28, 13 },
    { HC_BOOK_ISAIAH, 29, 22, 29, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 27, 6, 28, 13 },
    { HC_BOOK_ISAIAH, 29, 22, 29, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_HAGRA[] = {
    { HC_BOOK_ISAIAH, 27, 6, 28, 13 },
    { HC_BOOK_ISAIAH, 29, 22, 29, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_SEFARD[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_CHABAD[] = {
    { HC_BOOK_ISAIAH, 27, 6, 28, 13 },
    { HC_BOOK_ISAIAH, 29, 22, 29, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_PURE_SEPHARDIM[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_FES[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_BALADI[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 16, 1, 16, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMOT_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 27, 6, 28, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_ASHKENAZ[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_POZNAN[] = {
    { HC_BOOK_EZEKIEL, 29, 1, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_FRANKFURT[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_LITA[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_CHAYEY_ODOM[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_HAGRA[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_SEFARD[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_CHABAD[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_PURE_SEPHARDIM[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_FES[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 28, 24, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_BALADI[] = {
    { HC_BOOK_EZEKIEL, 28, 24, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 28, 24, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_VAERA_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 28, 25, 29, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_ASHKENAZ[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_POZNAN[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_ITALKI[] = {
    { HC_BOOK_ISAIAH, 18, 7, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_FRANKFURT[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_LITA[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_CHAYEY_ODOM[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_HAGRA[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_SEFARD[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_CHABAD[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_PURE_SEPHARDIM[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_PERSIA[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_LIBYA[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_MAGREB[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_FES[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_AGADIR[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_DJERBA[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 18, 7, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_BALADI[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_SHAMI[] = {
    { HC_BOOK_ISAIAH, 19, 1, 19, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BO_ROMANIA[] = {
    { HC_BOOK_JEREMIAH, 46, 13, 46, 28 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_ASHKENAZ[] = {
    { HC_BOOK_JUDGES, 4, 4, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_POZNAN[] = {
    { HC_BOOK_JUDGES, 4, 4, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_ITALKI[] = {
    { HC_BOOK_JUDGES, 4, 4, 5, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_FRANKFURT[] = {
    { HC_BOOK_JUDGES, 4, 4, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_LITA[] = {
    { HC_BOOK_JUDGES, 4, 4, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_CHAYEY_ODOM[] = {
    { HC_BOOK_JUDGES, 4, 4, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_HAGRA[] = {
    { HC_BOOK_JUDGES, 4, 4, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_SEFARD[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_CHABAD[] = {
    { HC_BOOK_JUDGES, 4, 4, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_PURE_SEPHARDIM[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_PERSIA[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_LIBYA[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_MAGREB[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_ALGERIA[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_ALGIERS[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_MOROCCO[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_FES[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_MARRAKESH[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_AGADIR[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_TOSHBIM[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_DJERBA[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_BAVLIM[] = {
    { HC_BOOK_JUDGES, 5, 1, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_TEIMAN[] = {
    { HC_BOOK_JUDGES, 4, 23, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_BALADI[] = {
    { HC_BOOK_JUDGES, 4, 23, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_SHAMI[] = {
    { HC_BOOK_JUDGES, 4, 23, 5, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BESHALACH_ROMANIA[] = {
    { HC_BOOK_JOSHUA, 24, 7, 24, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 6, 1, 7, 6 },
    { HC_BOOK_ISAIAH, 9, 5, 9, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_POZNAN[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_ITALKI[] = {
    { HC_BOOK_ISAIAH, 6, 1, 7, 6 },
    { HC_BOOK_ISAIAH, 9, 5, 9, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 6, 1, 7, 6 },
    { HC_BOOK_ISAIAH, 9, 5, 9, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_LITA[] = {
    { HC_BOOK_ISAIAH, 6, 1, 7, 6 },
    { HC_BOOK_ISAIAH, 9, 5, 9, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 6, 1, 7, 6 },
    { HC_BOOK_ISAIAH, 9, 5, 9, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_HAGRA[] = {
    { HC_BOOK_ISAIAH, 6, 1, 7, 6 },
    { HC_BOOK_ISAIAH, 9, 5, 9, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_SEFARD[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_CHABAD[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_PERSIA[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_LIBYA[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_MAGREB[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 6, 1, 7, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 6, 1, 7, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_FES[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_AGADIR[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_DJERBA[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
    { HC_BOOK_ISAIAH, 9, 5, 9, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_BALADI[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
    { HC_BOOK_ISAIAH, 9, 5, 9, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_SHAMI[] = {
    { HC_BOOK_ISAIAH, 6, 1, 6, 13 },
    { HC_BOOK_ISAIAH, 9, 5, 9, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_YITRO_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 33, 13, 34, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_ASHKENAZ[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_POZNAN[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_ITALKI[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 35, 11 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_FRANKFURT[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_LITA[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_CHAYEY_ODOM[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_HAGRA[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_SEFARD[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_CHABAD[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_PURE_SEPHARDIM[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_PERSIA[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_LIBYA[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_MAGREB[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_ALGERIA[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_ALGIERS[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_MOROCCO[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_FES[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_MARRAKESH[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_AGADIR[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_TOSHBIM[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_DJERBA[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_BAVLIM[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_TEIMAN[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 35, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_BALADI[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 35, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_SHAMI[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 35, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_MISHPATIM_ROMANIA[] = {
    { HC_BOOK_JEREMIAH, 34, 8, 34, 22 },
    { HC_BOOK_JEREMIAH, 33, 25, 33, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_ASHKENAZ[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_POZNAN[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_ITALKI[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_FRANKFURT[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_LITA[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_CHAYEY_ODOM[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_HAGRA[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_SEFARD[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_CHABAD[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_PERSIA[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_LIBYA[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_MAGREB[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_ALGERIA[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_ALGIERS[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_MOROCCO[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_FES[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_MARRAKESH[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_AGADIR[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_TOSHBIM[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_DJERBA[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_BAVLIM[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_TEIMAN[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_BALADI[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_SHAMI[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TERUMAH_ROMANIA[] = {
    { HC_BOOK_I_KINGS, 5, 26, 6, 13 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_ASHKENAZ[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_POZNAN[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_FRANKFURT[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_LITA[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_CHAYEY_ODOM[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_HAGRA[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_SEFARD[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_CHABAD[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_PURE_SEPHARDIM[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_FES[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_BALADI[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_TETZAVEH_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 43, 10, 43, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_ASHKENAZ[] = {
    { HC_BOOK_I_KINGS, 18, 1, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_POZNAN[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_ITALKI[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_FRANKFURT[] = {
    { HC_BOOK_I_KINGS, 18, 1, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_LITA[] = {
    { HC_BOOK_I_KINGS, 18, 1, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_CHAYEY_ODOM[] = {
    { HC_BOOK_I_KINGS, 18, 1, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_HAGRA[] = {
    { HC_BOOK_I_KINGS, 18, 1, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_SEFARD[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_CHABAD[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_PERSIA[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_LIBYA[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_MAGREB[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_ALGERIA[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_ALGIERS[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_MOROCCO[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_FES[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_MARRAKESH[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_AGADIR[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_TOSHBIM[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_DJERBA[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_BAVLIM[] = {
    { HC_BOOK_I_KINGS, 18, 20, 18, 39 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_TEIMAN[] = {
    { HC_BOOK_I_KINGS, 18, 1, 18, 45 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_BALADI[] = {
    { HC_BOOK_I_KINGS, 18, 1, 18, 45 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_SHAMI[] = {
    { HC_BOOK_I_KINGS, 18, 1, 18, 45 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TISA_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 43, 7, 44, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_ASHKENAZ[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_POZNAN[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_ITALKI[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_FRANKFURT[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_LITA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_CHAYEY_ODOM[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_HAGRA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_SEFARD[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_CHABAD[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_PERSIA[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_LIBYA[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_MAGREB[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_ALGERIA[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_ALGIERS[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_MOROCCO[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_FES[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_MARRAKESH[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_AGADIR[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_TOSHBIM[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_DJERBA[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_BAVLIM[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_TEIMAN[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_BALADI[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_SHAMI[] = {
    { HC_BOOK_I_KINGS, 7, 13, 7, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYAKHEL_ROMANIA[] = {
    { HC_BOOK_I_KINGS, 8, 1, 8, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_ASHKENAZ[] = {
    { HC_BOOK_I_KINGS, 7, 51, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_POZNAN[] = {
    { HC_BOOK_I_KINGS, 8, 1, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_ITALKI[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_FRANKFURT[] = {
    { HC_BOOK_I_KINGS, 7, 51, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_LITA[] = {
    { HC_BOOK_I_KINGS, 7, 51, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_CHAYEY_ODOM[] = {
    { HC_BOOK_I_KINGS, 7, 51, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_HAGRA[] = {
    { HC_BOOK_I_KINGS, 7, 51, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_SEFARD[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_CHABAD[] = {
    { HC_BOOK_I_KINGS, 7, 51, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_PERSIA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_LIBYA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_MAGREB[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_ALGERIA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_ALGIERS[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_MOROCCO[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_FES[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_MARRAKESH[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_AGADIR[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_TOSHBIM[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_DJERBA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_BAVLIM[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_TEIMAN[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_BALADI[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_SHAMI[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_W_PEKUDEI_ROMANIA[] = {
    { HC_BOOK_I_KINGS, 7, 27, 7, 47 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_POZNAN[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_ITALKI[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_LITA[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_HAGRA[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_SEFARD[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_CHABAD[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_PERSIA[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_LIBYA[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_MAGREB[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_FES[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_AGADIR[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
    { HC_BOOK_ISAIAH, 44, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_DJERBA[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_BALADI[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_SHAMI[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 6 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYIKRA_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 43, 21, 44, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_ASHKENAZ[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_POZNAN[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_ITALKI[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 7, 28 },
    { HC_BOOK_JEREMIAH, 10, 6, 10, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_FRANKFURT[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_LITA[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_CHAYEY_ODOM[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_HAGRA[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_SEFARD[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_CHABAD[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 7, 28 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_PURE_SEPHARDIM[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_PERSIA[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_LIBYA[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_MAGREB[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_ALGERIA[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_ALGIERS[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_MOROCCO[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_FES[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_MARRAKESH[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_AGADIR[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_TOSHBIM[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 7, 28 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_DJERBA[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_BAVLIM[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_TEIMAN[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 7, 28 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_BALADI[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 7, 28 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_SHAMI[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 7, 28 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_TZAV_ROMANIA[] = {
    { HC_BOOK_JEREMIAH, 7, 21, 8, 3 },
    { HC_BOOK_JEREMIAH, 9, 22, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_ASHKENAZ[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 7, 17 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_POZNAN[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_ITALKI[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 7, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_FRANKFURT[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 7, 17 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_LITA[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 7, 17 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_CHAYEY_ODOM[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 7, 17 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_HAGRA[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 7, 17 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_SEFARD[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_CHABAD[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_PURE_SEPHARDIM[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_PERSIA[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_LIBYA[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_MAGREB[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_ALGERIA[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_ALGIERS[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_MOROCCO[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_FES[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_MARRAKESH[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_AGADIR[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_TOSHBIM[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_DJERBA[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_BAVLIM[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 6, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_TEIMAN[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 7, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_BALADI[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 7, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_SHAMI[] = {
    { HC_BOOK_II_SAMUEL, 6, 1, 7, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_SHEMINI_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 43, 27, 44, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_ASHKENAZ[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_POZNAN[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_ITALKI[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_FRANKFURT[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_LITA[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_CHAYEY_ODOM[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_HAGRA[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_SEFARD[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_CHABAD[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_PURE_SEPHARDIM[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_PERSIA[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_LIBYA[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_MAGREB[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_ALGERIA[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_ALGIERS[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_MOROCCO[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_FES[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_MARRAKESH[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_AGADIR[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_TOSHBIM[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_DJERBA[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_BAVLIM[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_TEIMAN[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_BALADI[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_SHAMI[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_TAZRIA_ROMANIA[] = {
    { HC_BOOK_II_KINGS, 4, 42, 5, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_ASHKENAZ[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_POZNAN[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_ITALKI[] = {
    { HC_BOOK_II_KINGS, 7, 1, 7, 20 },
    { HC_BOOK_II_KINGS, 13, 23, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_FRANKFURT[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_LITA[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_CHAYEY_ODOM[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_HAGRA[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_SEFARD[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_CHABAD[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_PURE_SEPHARDIM[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_PERSIA[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_LIBYA[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_MAGREB[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_ALGERIA[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_ALGIERS[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_MOROCCO[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_FES[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_MARRAKESH[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_AGADIR[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_TOSHBIM[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_DJERBA[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_BAVLIM[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_TEIMAN[] = {
    { HC_BOOK_II_KINGS, 7, 1, 7, 20 },
    { HC_BOOK_II_KINGS, 13, 23, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_BALADI[] = {
    { HC_BOOK_II_KINGS, 7, 1, 7, 20 },
    { HC_BOOK_II_KINGS, 13, 23, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_SHAMI[] = {
    { HC_BOOK_II_KINGS, 7, 1, 7, 20 },
    { HC_BOOK_II_KINGS, 13, 23, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_METZORA_ROMANIA[] = {
    { HC_BOOK_II_KINGS, 7, 3, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_ASHKENAZ[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_POZNAN[] = {
    { HC_BOOK_EZEKIEL, 22, 2, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_FRANKFURT[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_LITA[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_CHAYEY_ODOM[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_HAGRA[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_SEFARD[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_CHABAD[] = {
    { HC_BOOK_AMOS, 9, 7, 9, 15 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_PURE_SEPHARDIM[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_FES[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_BALADI[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_ACHAREI_MOT_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_ASHKENAZ[] = {
    { HC_BOOK_AMOS, 9, 7, 9, 15 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_POZNAN[] = {
    { HC_BOOK_AMOS, 9, 7, 9, 15 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 20, 1, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_FRANKFURT[] = {
    { HC_BOOK_AMOS, 9, 7, 9, 15 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_LITA[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_CHAYEY_ODOM[] = {
    { HC_BOOK_EZEKIEL, 22, 1, 22, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_HAGRA[] = {
    { HC_BOOK_AMOS, 9, 7, 9, 15 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_SEFARD[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_CHABAD[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_PURE_SEPHARDIM[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_FES[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 20, 2, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 20, 1, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_BALADI[] = {
    { HC_BOOK_EZEKIEL, 20, 1, 20, 15 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 20, 1, 20, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_KEDOSHIM_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 3, 4, 5, 17 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_ASHKENAZ[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_POZNAN[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_FRANKFURT[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_LITA[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_CHAYEY_ODOM[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_HAGRA[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_SEFARD[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_CHABAD[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_PURE_SEPHARDIM[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_FES[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_BALADI[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_EMOR_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 44, 15, 44, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_ASHKENAZ[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_POZNAN[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_ITALKI[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_FRANKFURT[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_LITA[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_CHAYEY_ODOM[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_HAGRA[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_SEFARD[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_CHABAD[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_PURE_SEPHARDIM[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_PERSIA[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_LIBYA[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_MAGREB[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_ALGERIA[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_ALGIERS[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_MOROCCO[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_FES[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_MARRAKESH[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_AGADIR[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_TOSHBIM[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_DJERBA[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_BAVLIM[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_TEIMAN[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_BALADI[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_SHAMI[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAR_ROMANIA[] = {
    { HC_BOOK_JEREMIAH, 32, 6, 32, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_ASHKENAZ[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_POZNAN[] = {
    { HC_BOOK_EZEKIEL, 34, 1, 34, 15 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 34, 1, 34, 15 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_FRANKFURT[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_LITA[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_CHAYEY_ODOM[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_HAGRA[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_SEFARD[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_CHABAD[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_PURE_SEPHARDIM[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_PERSIA[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_LIBYA[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_MAGREB[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_ALGERIA[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_ALGIERS[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_MOROCCO[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_FES[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_MARRAKESH[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_AGADIR[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_TOSHBIM[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_DJERBA[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_BAVLIM[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 34, 1, 34, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_BALADI[] = {
    { HC_BOOK_EZEKIEL, 34, 1, 34, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 34, 1, 34, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_BECHUKOTAI_ROMANIA[] = {
    { HC_BOOK_JEREMIAH, 16, 19, 17, 14 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_ASHKENAZ[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_POZNAN[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_ITALKI[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_FRANKFURT[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_LITA[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_CHAYEY_ODOM[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_HAGRA[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_SEFARD[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_CHABAD[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_PURE_SEPHARDIM[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_PERSIA[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_LIBYA[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_MAGREB[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_ALGERIA[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_ALGIERS[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_MOROCCO[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_FES[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_MARRAKESH[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_AGADIR[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_TOSHBIM[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_DJERBA[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_BAVLIM[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_TEIMAN[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_BALADI[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_SHAMI[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_BAMIDBAR_ROMANIA[] = {
    { HC_BOOK_HOSEA, 2, 1, 2, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_ASHKENAZ[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_POZNAN[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_ITALKI[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_FRANKFURT[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_LITA[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_CHAYEY_ODOM[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_HAGRA[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_SEFARD[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_CHABAD[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_PURE_SEPHARDIM[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_PERSIA[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_LIBYA[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_MAGREB[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_ALGERIA[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_ALGIERS[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_MOROCCO[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_FES[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_MARRAKESH[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_AGADIR[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_TOSHBIM[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_DJERBA[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_BAVLIM[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_TEIMAN[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_BALADI[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_SHAMI[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_NASO_ROMANIA[] = {
    { HC_BOOK_JUDGES, 13, 2, 13, 25 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_ASHKENAZ[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_POZNAN[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_ITALKI[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_FRANKFURT[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_LITA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_CHAYEY_ODOM[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_HAGRA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_SEFARD[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_CHABAD[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_PURE_SEPHARDIM[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_PERSIA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_LIBYA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_MAGREB[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_ALGERIA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_ALGIERS[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_MOROCCO[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_FES[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_MARRAKESH[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_AGADIR[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_TOSHBIM[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_DJERBA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_BAVLIM[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_TEIMAN[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_BALADI[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_SHAMI[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_BEHAALOTECHA_ROMANIA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_ASHKENAZ[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_POZNAN[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_ITALKI[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_FRANKFURT[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_LITA[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_CHAYEY_ODOM[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_HAGRA[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_SEFARD[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_CHABAD[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_PURE_SEPHARDIM[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_PERSIA[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_LIBYA[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_MAGREB[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_ALGERIA[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_ALGIERS[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_MOROCCO[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_FES[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_MARRAKESH[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_AGADIR[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_TOSHBIM[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_DJERBA[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_BAVLIM[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_TEIMAN[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_BALADI[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_SHAMI[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_SHELACH_ROMANIA[] = {
    { HC_BOOK_JOSHUA, 2, 1, 2, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_ASHKENAZ[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_POZNAN[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_ITALKI[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_FRANKFURT[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_LITA[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_CHAYEY_ODOM[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_HAGRA[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_SEFARD[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_CHABAD[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_PERSIA[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_LIBYA[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_MAGREB[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_ALGERIA[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_ALGIERS[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_MOROCCO[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_FES[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_MARRAKESH[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_AGADIR[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_TOSHBIM[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_DJERBA[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_BAVLIM[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_TEIMAN[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_BALADI[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_SHAMI[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KORACH_ROMANIA[] = {
    { HC_BOOK_I_SAMUEL, 11, 14, 12, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_ASHKENAZ[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_POZNAN[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 24 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_ITALKI[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_FRANKFURT[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_LITA[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_CHAYEY_ODOM[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_HAGRA[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_SEFARD[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_CHABAD[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_PURE_SEPHARDIM[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_PERSIA[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_LIBYA[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_MAGREB[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_ALGERIA[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_ALGIERS[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_MOROCCO[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_FES[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_MARRAKESH[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_AGADIR[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_TOSHBIM[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_DJERBA[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_BAVLIM[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_TEIMAN[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 40 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_BALADI[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 40 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_SHAMI[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 40 },
};
static const hc_haftarah_ref HC_HAFT_W_CHUKAT_ROMANIA[] = {
    { HC_BOOK_JUDGES, 11, 1, 11, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_ASHKENAZ[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_POZNAN[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_ITALKI[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_FRANKFURT[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_LITA[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_CHAYEY_ODOM[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_HAGRA[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_SEFARD[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_CHABAD[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_PURE_SEPHARDIM[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_PERSIA[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_LIBYA[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_MAGREB[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_ALGERIA[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_ALGIERS[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_MOROCCO[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_FES[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_MARRAKESH[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_AGADIR[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_TOSHBIM[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_DJERBA[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_BAVLIM[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_TEIMAN[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_BALADI[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_SHAMI[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_BALAK_ROMANIA[] = {
    { HC_BOOK_MICAH, 5, 6, 6, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_ASHKENAZ[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_POZNAN[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_ITALKI[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_FRANKFURT[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_LITA[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_CHAYEY_ODOM[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_HAGRA[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_SEFARD[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_CHABAD[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_PERSIA[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_LIBYA[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_MAGREB[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_ALGERIA[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_ALGIERS[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_MOROCCO[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_FES[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_MARRAKESH[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_AGADIR[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_TOSHBIM[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_DJERBA[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_BAVLIM[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_TEIMAN[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_BALADI[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_SHAMI[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_PINCHAS_ROMANIA[] = {
    { HC_BOOK_I_KINGS, 18, 46, 19, 21 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_ASHKENAZ[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_POZNAN[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_ITALKI[] = {
    { HC_BOOK_JOSHUA, 13, 15, 13, 33 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_FRANKFURT[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_LITA[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_CHAYEY_ODOM[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_HAGRA[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_SEFARD[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_CHABAD[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_PURE_SEPHARDIM[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_PERSIA[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_LIBYA[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_MAGREB[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_ALGERIA[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_ALGIERS[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_MOROCCO[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_FES[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_MARRAKESH[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_AGADIR[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_TOSHBIM[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_DJERBA[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_BAVLIM[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_TEIMAN[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 1, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_BALADI[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 1, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_SHAMI[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 1, 19 },
};
static const hc_haftarah_ref HC_HAFT_W_MATOT_ROMANIA[] = {
    { HC_BOOK_JEREMIAH, 1, 1, 2, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_ASHKENAZ[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 3, 4, 3, 4 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_POZNAN[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 3, 4, 3, 4 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_ITALKI[] = {
    { HC_BOOK_JOSHUA, 19, 21, 21, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_FRANKFURT[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 3, 4, 3, 4 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_LITA[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 3, 4, 3, 4 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_CHAYEY_ODOM[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 3, 4, 3, 4 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_HAGRA[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 3, 4, 3, 4 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_SEFARD[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_CHABAD[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_PURE_SEPHARDIM[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_PERSIA[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_LIBYA[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_MAGREB[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_ALGERIA[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_ALGIERS[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_MOROCCO[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_FES[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_MARRAKESH[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_AGADIR[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_TOSHBIM[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_DJERBA[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_BAVLIM[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_BALADI[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_SHAMI[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_MASEI_ROMANIA[] = {
    { HC_BOOK_JEREMIAH, 2, 4, 2, 28 },
    { HC_BOOK_JEREMIAH, 4, 1, 4, 2 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_POZNAN[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_ITALKI[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_LITA[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_HAGRA[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_SEFARD[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_CHABAD[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_PERSIA[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_LIBYA[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_MAGREB[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_FES[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_AGADIR[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_DJERBA[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 1, 21, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_BALADI[] = {
    { HC_BOOK_ISAIAH, 1, 21, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_SHAMI[] = {
    { HC_BOOK_ISAIAH, 1, 21, 1, 31 },
};
static const hc_haftarah_ref HC_HAFT_W_DEVARIM_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 1, 1, 1, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_POZNAN[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_ITALKI[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 16 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_LITA[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_HAGRA[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_SEFARD[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_CHABAD[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_PERSIA[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_LIBYA[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_MAGREB[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_FES[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_AGADIR[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_DJERBA[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 27 },
    { HC_BOOK_ISAIAH, 41, 17, 41, 29 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_BALADI[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 27 },
    { HC_BOOK_ISAIAH, 41, 17, 41, 29 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_SHAMI[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 27 },
    { HC_BOOK_ISAIAH, 41, 17, 41, 29 },
};
static const hc_haftarah_ref HC_HAFT_W_VAETCHANAN_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 40, 1, 40, 26 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_POZNAN[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_ITALKI[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_LITA[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_HAGRA[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_SEFARD[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_CHABAD[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_PERSIA[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_LIBYA[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_MAGREB[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_FES[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_AGADIR[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_DJERBA[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_BALADI[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_SHAMI[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_EIKEV_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 49, 14, 51, 3 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_POZNAN[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_ITALKI[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_LITA[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_HAGRA[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_SEFARD[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_CHABAD[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_PERSIA[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_LIBYA[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_MAGREB[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_FES[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_AGADIR[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_DJERBA[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_BALADI[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_SHAMI[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_REEH_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 54, 11, 55, 5 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_POZNAN[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_ITALKI[] = {
    { HC_BOOK_I_SAMUEL, 17, 1, 17, 37 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_LITA[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_HAGRA[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_SEFARD[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_CHABAD[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_PERSIA[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_LIBYA[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_MAGREB[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_FES[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_AGADIR[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_DJERBA[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_BALADI[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_SHAMI[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_SHOFTIM_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 51, 12, 52, 12 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_POZNAN[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_ITALKI[] = {
    { HC_BOOK_I_SAMUEL, 8, 1, 8, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_LITA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_HAGRA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_SEFARD[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_CHABAD[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_PERSIA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_LIBYA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_MAGREB[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_FES[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_AGADIR[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_DJERBA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_BALADI[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_SHAMI[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TEITZEI_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 54, 1, 54, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_POZNAN[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_ITALKI[] = {
    { HC_BOOK_JOSHUA, 8, 30, 9, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_LITA[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_HAGRA[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_SEFARD[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_CHABAD[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_PERSIA[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_LIBYA[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_MAGREB[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_FES[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_AGADIR[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_DJERBA[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_BALADI[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_SHAMI[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_KI_TAVO_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 60, 1, 60, 22 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_POZNAN[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_ITALKI[] = {
    { HC_BOOK_JOSHUA, 24, 1, 24, 18 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_LITA[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_HAGRA[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_SEFARD[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_CHABAD[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_PERSIA[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_LIBYA[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_MAGREB[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_FES[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_AGADIR[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_DJERBA[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 61, 9, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_BALADI[] = {
    { HC_BOOK_ISAIAH, 61, 9, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_SHAMI[] = {
    { HC_BOOK_ISAIAH, 61, 9, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_NITZAVIM_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 61, 10, 63, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_ASHKENAZ[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_JOEL, 2, 15, 2, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_POZNAN[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_ITALKI[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_FRANKFURT[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_JOEL, 2, 15, 2, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_LITA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_JOEL, 2, 15, 2, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_CHAYEY_ODOM[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_JOEL, 2, 15, 2, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_HAGRA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_JOEL, 2, 15, 2, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_SEFARD[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_CHABAD[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_PURE_SEPHARDIM[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_PERSIA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_LIBYA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_MAGREB[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_ALGERIA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_ALGIERS[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_MOROCCO[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_FES[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_MARRAKESH[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_AGADIR[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_TOSHBIM[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_DJERBA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_BAVLIM[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_TEIMAN[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_BALADI[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_SHAMI[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_W_VAYEILECH_ROMANIA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_ASHKENAZ[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_POZNAN[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_JOEL, 2, 15, 2, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 17, 22, 18, 32 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_FRANKFURT[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_LITA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_CHAYEY_ODOM[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_HAGRA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_SEFARD[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_CHABAD[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_PURE_SEPHARDIM[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_PERSIA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_LIBYA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_MAGREB[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_ALGERIA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_ALGIERS[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_MOROCCO[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_FES[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_MARRAKESH[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_AGADIR[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_TOSHBIM[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_DJERBA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_BAVLIM[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 17, 22, 18, 32 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_BALADI[] = {
    { HC_BOOK_EZEKIEL, 17, 22, 18, 32 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 17, 22, 18, 32 },
};
static const hc_haftarah_ref HC_HAFT_W_HAAZINU_ROMANIA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_ASHKENAZ[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 18 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_POZNAN[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 18 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_ITALKI[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 18 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_FRANKFURT[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 18 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_LITA[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 18 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_CHAYEY_ODOM[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 18 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_HAGRA[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 18 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_SEFARD[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_CHABAD[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 18 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_PURE_SEPHARDIM[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_PERSIA[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_LIBYA[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_MAGREB[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_ALGERIA[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_ALGIERS[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_MOROCCO[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_FES[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_MARRAKESH[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_AGADIR[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_TOSHBIM[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_DJERBA[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_BAVLIM[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_TEIMAN[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_BALADI[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_SHAMI[] = {
    { HC_BOOK_JOSHUA, 1, 1, 1, 9 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_W_VEZOT_HABRACHA_ROMANIA[] = {
    { HC_BOOK_I_KINGS, 8, 22, 8, 34 },
};

const hc_haftarah_spans HC_HAFTAROT_WEEKLY[HC_PARSHA_COUNT][HC_CUSTOM_COUNT] = {
    [HC_BEREISHIT] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_BEREISHIT_ASHKENAZ, (int)(sizeof(HC_HAFT_W_BEREISHIT_ASHKENAZ)/sizeof(HC_HAFT_W_BEREISHIT_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_BEREISHIT_ITALKI, (int)(sizeof(HC_HAFT_W_BEREISHIT_ITALKI)/sizeof(HC_HAFT_W_BEREISHIT_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_BEREISHIT_FRANKFURT, (int)(sizeof(HC_HAFT_W_BEREISHIT_FRANKFURT)/sizeof(HC_HAFT_W_BEREISHIT_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_BEREISHIT_LITA, (int)(sizeof(HC_HAFT_W_BEREISHIT_LITA)/sizeof(HC_HAFT_W_BEREISHIT_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_BEREISHIT_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_BEREISHIT_CHAYEY_ODOM)/sizeof(HC_HAFT_W_BEREISHIT_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_BEREISHIT_HAGRA, (int)(sizeof(HC_HAFT_W_BEREISHIT_HAGRA)/sizeof(HC_HAFT_W_BEREISHIT_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_BEREISHIT_SEFARD, (int)(sizeof(HC_HAFT_W_BEREISHIT_SEFARD)/sizeof(HC_HAFT_W_BEREISHIT_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_BEREISHIT_CHABAD, (int)(sizeof(HC_HAFT_W_BEREISHIT_CHABAD)/sizeof(HC_HAFT_W_BEREISHIT_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_BEREISHIT_MAGREB, (int)(sizeof(HC_HAFT_W_BEREISHIT_MAGREB)/sizeof(HC_HAFT_W_BEREISHIT_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_BEREISHIT_ALGERIA, (int)(sizeof(HC_HAFT_W_BEREISHIT_ALGERIA)/sizeof(HC_HAFT_W_BEREISHIT_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_BEREISHIT_MOROCCO, (int)(sizeof(HC_HAFT_W_BEREISHIT_MOROCCO)/sizeof(HC_HAFT_W_BEREISHIT_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_BEREISHIT_FES, (int)(sizeof(HC_HAFT_W_BEREISHIT_FES)/sizeof(HC_HAFT_W_BEREISHIT_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_BEREISHIT_MARRAKESH, (int)(sizeof(HC_HAFT_W_BEREISHIT_MARRAKESH)/sizeof(HC_HAFT_W_BEREISHIT_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_BEREISHIT_TOSHBIM, (int)(sizeof(HC_HAFT_W_BEREISHIT_TOSHBIM)/sizeof(HC_HAFT_W_BEREISHIT_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_BEREISHIT_DJERBA, (int)(sizeof(HC_HAFT_W_BEREISHIT_DJERBA)/sizeof(HC_HAFT_W_BEREISHIT_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_BEREISHIT_BAVLIM, (int)(sizeof(HC_HAFT_W_BEREISHIT_BAVLIM)/sizeof(HC_HAFT_W_BEREISHIT_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_BEREISHIT_TEIMAN, (int)(sizeof(HC_HAFT_W_BEREISHIT_TEIMAN)/sizeof(HC_HAFT_W_BEREISHIT_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_BEREISHIT_BALADI, (int)(sizeof(HC_HAFT_W_BEREISHIT_BALADI)/sizeof(HC_HAFT_W_BEREISHIT_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_BEREISHIT_SHAMI, (int)(sizeof(HC_HAFT_W_BEREISHIT_SHAMI)/sizeof(HC_HAFT_W_BEREISHIT_SHAMI[0])) } },
    [HC_NOACH] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_NOACH_ASHKENAZ, (int)(sizeof(HC_HAFT_W_NOACH_ASHKENAZ)/sizeof(HC_HAFT_W_NOACH_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_NOACH_ITALKI, (int)(sizeof(HC_HAFT_W_NOACH_ITALKI)/sizeof(HC_HAFT_W_NOACH_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_NOACH_FRANKFURT, (int)(sizeof(HC_HAFT_W_NOACH_FRANKFURT)/sizeof(HC_HAFT_W_NOACH_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_NOACH_LITA, (int)(sizeof(HC_HAFT_W_NOACH_LITA)/sizeof(HC_HAFT_W_NOACH_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_NOACH_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_NOACH_CHAYEY_ODOM)/sizeof(HC_HAFT_W_NOACH_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_NOACH_HAGRA, (int)(sizeof(HC_HAFT_W_NOACH_HAGRA)/sizeof(HC_HAFT_W_NOACH_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_NOACH_SEFARD, (int)(sizeof(HC_HAFT_W_NOACH_SEFARD)/sizeof(HC_HAFT_W_NOACH_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_NOACH_CHABAD, (int)(sizeof(HC_HAFT_W_NOACH_CHABAD)/sizeof(HC_HAFT_W_NOACH_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_NOACH_MAGREB, (int)(sizeof(HC_HAFT_W_NOACH_MAGREB)/sizeof(HC_HAFT_W_NOACH_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_NOACH_ALGERIA, (int)(sizeof(HC_HAFT_W_NOACH_ALGERIA)/sizeof(HC_HAFT_W_NOACH_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_NOACH_MOROCCO, (int)(sizeof(HC_HAFT_W_NOACH_MOROCCO)/sizeof(HC_HAFT_W_NOACH_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_NOACH_FES, (int)(sizeof(HC_HAFT_W_NOACH_FES)/sizeof(HC_HAFT_W_NOACH_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_NOACH_MARRAKESH, (int)(sizeof(HC_HAFT_W_NOACH_MARRAKESH)/sizeof(HC_HAFT_W_NOACH_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_NOACH_TOSHBIM, (int)(sizeof(HC_HAFT_W_NOACH_TOSHBIM)/sizeof(HC_HAFT_W_NOACH_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_NOACH_DJERBA, (int)(sizeof(HC_HAFT_W_NOACH_DJERBA)/sizeof(HC_HAFT_W_NOACH_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_NOACH_BAVLIM, (int)(sizeof(HC_HAFT_W_NOACH_BAVLIM)/sizeof(HC_HAFT_W_NOACH_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_NOACH_TEIMAN, (int)(sizeof(HC_HAFT_W_NOACH_TEIMAN)/sizeof(HC_HAFT_W_NOACH_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_NOACH_BALADI, (int)(sizeof(HC_HAFT_W_NOACH_BALADI)/sizeof(HC_HAFT_W_NOACH_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_NOACH_SHAMI, (int)(sizeof(HC_HAFT_W_NOACH_SHAMI)/sizeof(HC_HAFT_W_NOACH_SHAMI[0])) } },
    [HC_LECH_LECHA] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_LECH_LECHA_ASHKENAZ, (int)(sizeof(HC_HAFT_W_LECH_LECHA_ASHKENAZ)/sizeof(HC_HAFT_W_LECH_LECHA_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_LECH_LECHA_ITALKI, (int)(sizeof(HC_HAFT_W_LECH_LECHA_ITALKI)/sizeof(HC_HAFT_W_LECH_LECHA_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_LECH_LECHA_FRANKFURT, (int)(sizeof(HC_HAFT_W_LECH_LECHA_FRANKFURT)/sizeof(HC_HAFT_W_LECH_LECHA_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_LECH_LECHA_LITA, (int)(sizeof(HC_HAFT_W_LECH_LECHA_LITA)/sizeof(HC_HAFT_W_LECH_LECHA_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_LECH_LECHA_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_LECH_LECHA_CHAYEY_ODOM)/sizeof(HC_HAFT_W_LECH_LECHA_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_LECH_LECHA_HAGRA, (int)(sizeof(HC_HAFT_W_LECH_LECHA_HAGRA)/sizeof(HC_HAFT_W_LECH_LECHA_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_LECH_LECHA_SEFARD, (int)(sizeof(HC_HAFT_W_LECH_LECHA_SEFARD)/sizeof(HC_HAFT_W_LECH_LECHA_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_LECH_LECHA_CHABAD, (int)(sizeof(HC_HAFT_W_LECH_LECHA_CHABAD)/sizeof(HC_HAFT_W_LECH_LECHA_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_LECH_LECHA_MAGREB, (int)(sizeof(HC_HAFT_W_LECH_LECHA_MAGREB)/sizeof(HC_HAFT_W_LECH_LECHA_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_LECH_LECHA_ALGERIA, (int)(sizeof(HC_HAFT_W_LECH_LECHA_ALGERIA)/sizeof(HC_HAFT_W_LECH_LECHA_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_LECH_LECHA_MOROCCO, (int)(sizeof(HC_HAFT_W_LECH_LECHA_MOROCCO)/sizeof(HC_HAFT_W_LECH_LECHA_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_LECH_LECHA_FES, (int)(sizeof(HC_HAFT_W_LECH_LECHA_FES)/sizeof(HC_HAFT_W_LECH_LECHA_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_LECH_LECHA_MARRAKESH, (int)(sizeof(HC_HAFT_W_LECH_LECHA_MARRAKESH)/sizeof(HC_HAFT_W_LECH_LECHA_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_LECH_LECHA_TOSHBIM, (int)(sizeof(HC_HAFT_W_LECH_LECHA_TOSHBIM)/sizeof(HC_HAFT_W_LECH_LECHA_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_LECH_LECHA_DJERBA, (int)(sizeof(HC_HAFT_W_LECH_LECHA_DJERBA)/sizeof(HC_HAFT_W_LECH_LECHA_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_LECH_LECHA_BAVLIM, (int)(sizeof(HC_HAFT_W_LECH_LECHA_BAVLIM)/sizeof(HC_HAFT_W_LECH_LECHA_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_LECH_LECHA_TEIMAN, (int)(sizeof(HC_HAFT_W_LECH_LECHA_TEIMAN)/sizeof(HC_HAFT_W_LECH_LECHA_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_LECH_LECHA_BALADI, (int)(sizeof(HC_HAFT_W_LECH_LECHA_BALADI)/sizeof(HC_HAFT_W_LECH_LECHA_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_LECH_LECHA_SHAMI, (int)(sizeof(HC_HAFT_W_LECH_LECHA_SHAMI)/sizeof(HC_HAFT_W_LECH_LECHA_SHAMI[0])) } },
    [HC_VAYERA] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VAYERA_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VAYERA_ASHKENAZ)/sizeof(HC_HAFT_W_VAYERA_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VAYERA_ITALKI, (int)(sizeof(HC_HAFT_W_VAYERA_ITALKI)/sizeof(HC_HAFT_W_VAYERA_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VAYERA_FRANKFURT, (int)(sizeof(HC_HAFT_W_VAYERA_FRANKFURT)/sizeof(HC_HAFT_W_VAYERA_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VAYERA_LITA, (int)(sizeof(HC_HAFT_W_VAYERA_LITA)/sizeof(HC_HAFT_W_VAYERA_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VAYERA_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VAYERA_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VAYERA_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VAYERA_HAGRA, (int)(sizeof(HC_HAFT_W_VAYERA_HAGRA)/sizeof(HC_HAFT_W_VAYERA_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VAYERA_SEFARD, (int)(sizeof(HC_HAFT_W_VAYERA_SEFARD)/sizeof(HC_HAFT_W_VAYERA_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VAYERA_CHABAD, (int)(sizeof(HC_HAFT_W_VAYERA_CHABAD)/sizeof(HC_HAFT_W_VAYERA_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VAYERA_MAGREB, (int)(sizeof(HC_HAFT_W_VAYERA_MAGREB)/sizeof(HC_HAFT_W_VAYERA_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VAYERA_ALGERIA, (int)(sizeof(HC_HAFT_W_VAYERA_ALGERIA)/sizeof(HC_HAFT_W_VAYERA_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VAYERA_MOROCCO, (int)(sizeof(HC_HAFT_W_VAYERA_MOROCCO)/sizeof(HC_HAFT_W_VAYERA_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VAYERA_FES, (int)(sizeof(HC_HAFT_W_VAYERA_FES)/sizeof(HC_HAFT_W_VAYERA_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VAYERA_MARRAKESH, (int)(sizeof(HC_HAFT_W_VAYERA_MARRAKESH)/sizeof(HC_HAFT_W_VAYERA_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VAYERA_TOSHBIM, (int)(sizeof(HC_HAFT_W_VAYERA_TOSHBIM)/sizeof(HC_HAFT_W_VAYERA_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VAYERA_DJERBA, (int)(sizeof(HC_HAFT_W_VAYERA_DJERBA)/sizeof(HC_HAFT_W_VAYERA_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VAYERA_BAVLIM, (int)(sizeof(HC_HAFT_W_VAYERA_BAVLIM)/sizeof(HC_HAFT_W_VAYERA_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VAYERA_TEIMAN, (int)(sizeof(HC_HAFT_W_VAYERA_TEIMAN)/sizeof(HC_HAFT_W_VAYERA_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VAYERA_BALADI, (int)(sizeof(HC_HAFT_W_VAYERA_BALADI)/sizeof(HC_HAFT_W_VAYERA_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VAYERA_SHAMI, (int)(sizeof(HC_HAFT_W_VAYERA_SHAMI)/sizeof(HC_HAFT_W_VAYERA_SHAMI[0])) } },
    [HC_CHAYEI_SARAH] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_CHAYEI_SARAH_ASHKENAZ, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_ASHKENAZ)/sizeof(HC_HAFT_W_CHAYEI_SARAH_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_CHAYEI_SARAH_ITALKI, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_ITALKI)/sizeof(HC_HAFT_W_CHAYEI_SARAH_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_CHAYEI_SARAH_FRANKFURT, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_FRANKFURT)/sizeof(HC_HAFT_W_CHAYEI_SARAH_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_CHAYEI_SARAH_LITA, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_LITA)/sizeof(HC_HAFT_W_CHAYEI_SARAH_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_CHAYEI_SARAH_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_CHAYEY_ODOM)/sizeof(HC_HAFT_W_CHAYEI_SARAH_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_CHAYEI_SARAH_HAGRA, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_HAGRA)/sizeof(HC_HAFT_W_CHAYEI_SARAH_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_CHAYEI_SARAH_SEFARD, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_SEFARD)/sizeof(HC_HAFT_W_CHAYEI_SARAH_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_CHAYEI_SARAH_CHABAD, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_CHABAD)/sizeof(HC_HAFT_W_CHAYEI_SARAH_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_CHAYEI_SARAH_MAGREB, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_MAGREB)/sizeof(HC_HAFT_W_CHAYEI_SARAH_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_CHAYEI_SARAH_ALGERIA, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_ALGERIA)/sizeof(HC_HAFT_W_CHAYEI_SARAH_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_CHAYEI_SARAH_MOROCCO, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_MOROCCO)/sizeof(HC_HAFT_W_CHAYEI_SARAH_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_CHAYEI_SARAH_FES, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_FES)/sizeof(HC_HAFT_W_CHAYEI_SARAH_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_CHAYEI_SARAH_MARRAKESH, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_MARRAKESH)/sizeof(HC_HAFT_W_CHAYEI_SARAH_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_CHAYEI_SARAH_TOSHBIM, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_TOSHBIM)/sizeof(HC_HAFT_W_CHAYEI_SARAH_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_CHAYEI_SARAH_DJERBA, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_DJERBA)/sizeof(HC_HAFT_W_CHAYEI_SARAH_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_CHAYEI_SARAH_BAVLIM, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_BAVLIM)/sizeof(HC_HAFT_W_CHAYEI_SARAH_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_CHAYEI_SARAH_TEIMAN, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_TEIMAN)/sizeof(HC_HAFT_W_CHAYEI_SARAH_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_CHAYEI_SARAH_BALADI, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_BALADI)/sizeof(HC_HAFT_W_CHAYEI_SARAH_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_CHAYEI_SARAH_SHAMI, (int)(sizeof(HC_HAFT_W_CHAYEI_SARAH_SHAMI)/sizeof(HC_HAFT_W_CHAYEI_SARAH_SHAMI[0])) } },
    [HC_TOLDOT] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_TOLDOT_ASHKENAZ, (int)(sizeof(HC_HAFT_W_TOLDOT_ASHKENAZ)/sizeof(HC_HAFT_W_TOLDOT_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_TOLDOT_ITALKI, (int)(sizeof(HC_HAFT_W_TOLDOT_ITALKI)/sizeof(HC_HAFT_W_TOLDOT_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_TOLDOT_FRANKFURT, (int)(sizeof(HC_HAFT_W_TOLDOT_FRANKFURT)/sizeof(HC_HAFT_W_TOLDOT_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_TOLDOT_LITA, (int)(sizeof(HC_HAFT_W_TOLDOT_LITA)/sizeof(HC_HAFT_W_TOLDOT_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_TOLDOT_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_TOLDOT_CHAYEY_ODOM)/sizeof(HC_HAFT_W_TOLDOT_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_TOLDOT_HAGRA, (int)(sizeof(HC_HAFT_W_TOLDOT_HAGRA)/sizeof(HC_HAFT_W_TOLDOT_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_TOLDOT_SEFARD, (int)(sizeof(HC_HAFT_W_TOLDOT_SEFARD)/sizeof(HC_HAFT_W_TOLDOT_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_TOLDOT_CHABAD, (int)(sizeof(HC_HAFT_W_TOLDOT_CHABAD)/sizeof(HC_HAFT_W_TOLDOT_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_TOLDOT_MAGREB, (int)(sizeof(HC_HAFT_W_TOLDOT_MAGREB)/sizeof(HC_HAFT_W_TOLDOT_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_TOLDOT_ALGERIA, (int)(sizeof(HC_HAFT_W_TOLDOT_ALGERIA)/sizeof(HC_HAFT_W_TOLDOT_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_TOLDOT_MOROCCO, (int)(sizeof(HC_HAFT_W_TOLDOT_MOROCCO)/sizeof(HC_HAFT_W_TOLDOT_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_TOLDOT_FES, (int)(sizeof(HC_HAFT_W_TOLDOT_FES)/sizeof(HC_HAFT_W_TOLDOT_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_TOLDOT_MARRAKESH, (int)(sizeof(HC_HAFT_W_TOLDOT_MARRAKESH)/sizeof(HC_HAFT_W_TOLDOT_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_TOLDOT_TOSHBIM, (int)(sizeof(HC_HAFT_W_TOLDOT_TOSHBIM)/sizeof(HC_HAFT_W_TOLDOT_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_TOLDOT_DJERBA, (int)(sizeof(HC_HAFT_W_TOLDOT_DJERBA)/sizeof(HC_HAFT_W_TOLDOT_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_TOLDOT_BAVLIM, (int)(sizeof(HC_HAFT_W_TOLDOT_BAVLIM)/sizeof(HC_HAFT_W_TOLDOT_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_TOLDOT_TEIMAN, (int)(sizeof(HC_HAFT_W_TOLDOT_TEIMAN)/sizeof(HC_HAFT_W_TOLDOT_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_TOLDOT_BALADI, (int)(sizeof(HC_HAFT_W_TOLDOT_BALADI)/sizeof(HC_HAFT_W_TOLDOT_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_TOLDOT_SHAMI, (int)(sizeof(HC_HAFT_W_TOLDOT_SHAMI)/sizeof(HC_HAFT_W_TOLDOT_SHAMI[0])) } },
    [HC_VAYETZE] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VAYETZE_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VAYETZE_ASHKENAZ)/sizeof(HC_HAFT_W_VAYETZE_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VAYETZE_ITALKI, (int)(sizeof(HC_HAFT_W_VAYETZE_ITALKI)/sizeof(HC_HAFT_W_VAYETZE_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VAYETZE_FRANKFURT, (int)(sizeof(HC_HAFT_W_VAYETZE_FRANKFURT)/sizeof(HC_HAFT_W_VAYETZE_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VAYETZE_LITA, (int)(sizeof(HC_HAFT_W_VAYETZE_LITA)/sizeof(HC_HAFT_W_VAYETZE_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VAYETZE_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VAYETZE_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VAYETZE_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VAYETZE_HAGRA, (int)(sizeof(HC_HAFT_W_VAYETZE_HAGRA)/sizeof(HC_HAFT_W_VAYETZE_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VAYETZE_SEFARD, (int)(sizeof(HC_HAFT_W_VAYETZE_SEFARD)/sizeof(HC_HAFT_W_VAYETZE_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VAYETZE_CHABAD, (int)(sizeof(HC_HAFT_W_VAYETZE_CHABAD)/sizeof(HC_HAFT_W_VAYETZE_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VAYETZE_MAGREB, (int)(sizeof(HC_HAFT_W_VAYETZE_MAGREB)/sizeof(HC_HAFT_W_VAYETZE_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VAYETZE_ALGERIA, (int)(sizeof(HC_HAFT_W_VAYETZE_ALGERIA)/sizeof(HC_HAFT_W_VAYETZE_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VAYETZE_MOROCCO, (int)(sizeof(HC_HAFT_W_VAYETZE_MOROCCO)/sizeof(HC_HAFT_W_VAYETZE_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VAYETZE_FES, (int)(sizeof(HC_HAFT_W_VAYETZE_FES)/sizeof(HC_HAFT_W_VAYETZE_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VAYETZE_MARRAKESH, (int)(sizeof(HC_HAFT_W_VAYETZE_MARRAKESH)/sizeof(HC_HAFT_W_VAYETZE_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VAYETZE_TOSHBIM, (int)(sizeof(HC_HAFT_W_VAYETZE_TOSHBIM)/sizeof(HC_HAFT_W_VAYETZE_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VAYETZE_DJERBA, (int)(sizeof(HC_HAFT_W_VAYETZE_DJERBA)/sizeof(HC_HAFT_W_VAYETZE_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VAYETZE_BAVLIM, (int)(sizeof(HC_HAFT_W_VAYETZE_BAVLIM)/sizeof(HC_HAFT_W_VAYETZE_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VAYETZE_TEIMAN, (int)(sizeof(HC_HAFT_W_VAYETZE_TEIMAN)/sizeof(HC_HAFT_W_VAYETZE_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VAYETZE_BALADI, (int)(sizeof(HC_HAFT_W_VAYETZE_BALADI)/sizeof(HC_HAFT_W_VAYETZE_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VAYETZE_SHAMI, (int)(sizeof(HC_HAFT_W_VAYETZE_SHAMI)/sizeof(HC_HAFT_W_VAYETZE_SHAMI[0])) } },
    [HC_VAYISHLACH] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VAYISHLACH_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VAYISHLACH_ASHKENAZ)/sizeof(HC_HAFT_W_VAYISHLACH_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VAYISHLACH_ITALKI, (int)(sizeof(HC_HAFT_W_VAYISHLACH_ITALKI)/sizeof(HC_HAFT_W_VAYISHLACH_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VAYISHLACH_FRANKFURT, (int)(sizeof(HC_HAFT_W_VAYISHLACH_FRANKFURT)/sizeof(HC_HAFT_W_VAYISHLACH_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VAYISHLACH_LITA, (int)(sizeof(HC_HAFT_W_VAYISHLACH_LITA)/sizeof(HC_HAFT_W_VAYISHLACH_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VAYISHLACH_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VAYISHLACH_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VAYISHLACH_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VAYISHLACH_HAGRA, (int)(sizeof(HC_HAFT_W_VAYISHLACH_HAGRA)/sizeof(HC_HAFT_W_VAYISHLACH_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VAYISHLACH_SEFARD, (int)(sizeof(HC_HAFT_W_VAYISHLACH_SEFARD)/sizeof(HC_HAFT_W_VAYISHLACH_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VAYISHLACH_CHABAD, (int)(sizeof(HC_HAFT_W_VAYISHLACH_CHABAD)/sizeof(HC_HAFT_W_VAYISHLACH_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VAYISHLACH_MAGREB, (int)(sizeof(HC_HAFT_W_VAYISHLACH_MAGREB)/sizeof(HC_HAFT_W_VAYISHLACH_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VAYISHLACH_ALGERIA, (int)(sizeof(HC_HAFT_W_VAYISHLACH_ALGERIA)/sizeof(HC_HAFT_W_VAYISHLACH_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VAYISHLACH_MOROCCO, (int)(sizeof(HC_HAFT_W_VAYISHLACH_MOROCCO)/sizeof(HC_HAFT_W_VAYISHLACH_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VAYISHLACH_FES, (int)(sizeof(HC_HAFT_W_VAYISHLACH_FES)/sizeof(HC_HAFT_W_VAYISHLACH_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VAYISHLACH_MARRAKESH, (int)(sizeof(HC_HAFT_W_VAYISHLACH_MARRAKESH)/sizeof(HC_HAFT_W_VAYISHLACH_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VAYISHLACH_TOSHBIM, (int)(sizeof(HC_HAFT_W_VAYISHLACH_TOSHBIM)/sizeof(HC_HAFT_W_VAYISHLACH_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VAYISHLACH_DJERBA, (int)(sizeof(HC_HAFT_W_VAYISHLACH_DJERBA)/sizeof(HC_HAFT_W_VAYISHLACH_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VAYISHLACH_BAVLIM, (int)(sizeof(HC_HAFT_W_VAYISHLACH_BAVLIM)/sizeof(HC_HAFT_W_VAYISHLACH_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VAYISHLACH_TEIMAN, (int)(sizeof(HC_HAFT_W_VAYISHLACH_TEIMAN)/sizeof(HC_HAFT_W_VAYISHLACH_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VAYISHLACH_BALADI, (int)(sizeof(HC_HAFT_W_VAYISHLACH_BALADI)/sizeof(HC_HAFT_W_VAYISHLACH_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VAYISHLACH_SHAMI, (int)(sizeof(HC_HAFT_W_VAYISHLACH_SHAMI)/sizeof(HC_HAFT_W_VAYISHLACH_SHAMI[0])) } },
    [HC_VAYESHEV] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VAYESHEV_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VAYESHEV_ASHKENAZ)/sizeof(HC_HAFT_W_VAYESHEV_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VAYESHEV_ITALKI, (int)(sizeof(HC_HAFT_W_VAYESHEV_ITALKI)/sizeof(HC_HAFT_W_VAYESHEV_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VAYESHEV_FRANKFURT, (int)(sizeof(HC_HAFT_W_VAYESHEV_FRANKFURT)/sizeof(HC_HAFT_W_VAYESHEV_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VAYESHEV_LITA, (int)(sizeof(HC_HAFT_W_VAYESHEV_LITA)/sizeof(HC_HAFT_W_VAYESHEV_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VAYESHEV_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VAYESHEV_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VAYESHEV_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VAYESHEV_HAGRA, (int)(sizeof(HC_HAFT_W_VAYESHEV_HAGRA)/sizeof(HC_HAFT_W_VAYESHEV_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VAYESHEV_SEFARD, (int)(sizeof(HC_HAFT_W_VAYESHEV_SEFARD)/sizeof(HC_HAFT_W_VAYESHEV_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VAYESHEV_CHABAD, (int)(sizeof(HC_HAFT_W_VAYESHEV_CHABAD)/sizeof(HC_HAFT_W_VAYESHEV_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VAYESHEV_MAGREB, (int)(sizeof(HC_HAFT_W_VAYESHEV_MAGREB)/sizeof(HC_HAFT_W_VAYESHEV_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VAYESHEV_ALGERIA, (int)(sizeof(HC_HAFT_W_VAYESHEV_ALGERIA)/sizeof(HC_HAFT_W_VAYESHEV_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VAYESHEV_MOROCCO, (int)(sizeof(HC_HAFT_W_VAYESHEV_MOROCCO)/sizeof(HC_HAFT_W_VAYESHEV_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VAYESHEV_FES, (int)(sizeof(HC_HAFT_W_VAYESHEV_FES)/sizeof(HC_HAFT_W_VAYESHEV_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VAYESHEV_MARRAKESH, (int)(sizeof(HC_HAFT_W_VAYESHEV_MARRAKESH)/sizeof(HC_HAFT_W_VAYESHEV_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VAYESHEV_TOSHBIM, (int)(sizeof(HC_HAFT_W_VAYESHEV_TOSHBIM)/sizeof(HC_HAFT_W_VAYESHEV_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VAYESHEV_DJERBA, (int)(sizeof(HC_HAFT_W_VAYESHEV_DJERBA)/sizeof(HC_HAFT_W_VAYESHEV_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VAYESHEV_BAVLIM, (int)(sizeof(HC_HAFT_W_VAYESHEV_BAVLIM)/sizeof(HC_HAFT_W_VAYESHEV_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VAYESHEV_TEIMAN, (int)(sizeof(HC_HAFT_W_VAYESHEV_TEIMAN)/sizeof(HC_HAFT_W_VAYESHEV_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VAYESHEV_BALADI, (int)(sizeof(HC_HAFT_W_VAYESHEV_BALADI)/sizeof(HC_HAFT_W_VAYESHEV_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VAYESHEV_SHAMI, (int)(sizeof(HC_HAFT_W_VAYESHEV_SHAMI)/sizeof(HC_HAFT_W_VAYESHEV_SHAMI[0])) } },
    [HC_MIKETZ] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_MIKETZ_ASHKENAZ, (int)(sizeof(HC_HAFT_W_MIKETZ_ASHKENAZ)/sizeof(HC_HAFT_W_MIKETZ_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_MIKETZ_ITALKI, (int)(sizeof(HC_HAFT_W_MIKETZ_ITALKI)/sizeof(HC_HAFT_W_MIKETZ_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_MIKETZ_FRANKFURT, (int)(sizeof(HC_HAFT_W_MIKETZ_FRANKFURT)/sizeof(HC_HAFT_W_MIKETZ_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_MIKETZ_LITA, (int)(sizeof(HC_HAFT_W_MIKETZ_LITA)/sizeof(HC_HAFT_W_MIKETZ_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_MIKETZ_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_MIKETZ_CHAYEY_ODOM)/sizeof(HC_HAFT_W_MIKETZ_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_MIKETZ_HAGRA, (int)(sizeof(HC_HAFT_W_MIKETZ_HAGRA)/sizeof(HC_HAFT_W_MIKETZ_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_MIKETZ_SEFARD, (int)(sizeof(HC_HAFT_W_MIKETZ_SEFARD)/sizeof(HC_HAFT_W_MIKETZ_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_MIKETZ_CHABAD, (int)(sizeof(HC_HAFT_W_MIKETZ_CHABAD)/sizeof(HC_HAFT_W_MIKETZ_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_MIKETZ_MAGREB, (int)(sizeof(HC_HAFT_W_MIKETZ_MAGREB)/sizeof(HC_HAFT_W_MIKETZ_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_MIKETZ_ALGERIA, (int)(sizeof(HC_HAFT_W_MIKETZ_ALGERIA)/sizeof(HC_HAFT_W_MIKETZ_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_MIKETZ_MOROCCO, (int)(sizeof(HC_HAFT_W_MIKETZ_MOROCCO)/sizeof(HC_HAFT_W_MIKETZ_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_MIKETZ_FES, (int)(sizeof(HC_HAFT_W_MIKETZ_FES)/sizeof(HC_HAFT_W_MIKETZ_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_MIKETZ_MARRAKESH, (int)(sizeof(HC_HAFT_W_MIKETZ_MARRAKESH)/sizeof(HC_HAFT_W_MIKETZ_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_MIKETZ_TOSHBIM, (int)(sizeof(HC_HAFT_W_MIKETZ_TOSHBIM)/sizeof(HC_HAFT_W_MIKETZ_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_MIKETZ_DJERBA, (int)(sizeof(HC_HAFT_W_MIKETZ_DJERBA)/sizeof(HC_HAFT_W_MIKETZ_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_MIKETZ_BAVLIM, (int)(sizeof(HC_HAFT_W_MIKETZ_BAVLIM)/sizeof(HC_HAFT_W_MIKETZ_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_MIKETZ_TEIMAN, (int)(sizeof(HC_HAFT_W_MIKETZ_TEIMAN)/sizeof(HC_HAFT_W_MIKETZ_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_MIKETZ_BALADI, (int)(sizeof(HC_HAFT_W_MIKETZ_BALADI)/sizeof(HC_HAFT_W_MIKETZ_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_MIKETZ_SHAMI, (int)(sizeof(HC_HAFT_W_MIKETZ_SHAMI)/sizeof(HC_HAFT_W_MIKETZ_SHAMI[0])) } },
    [HC_VAYIGASH] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VAYIGASH_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VAYIGASH_ASHKENAZ)/sizeof(HC_HAFT_W_VAYIGASH_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VAYIGASH_ITALKI, (int)(sizeof(HC_HAFT_W_VAYIGASH_ITALKI)/sizeof(HC_HAFT_W_VAYIGASH_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VAYIGASH_FRANKFURT, (int)(sizeof(HC_HAFT_W_VAYIGASH_FRANKFURT)/sizeof(HC_HAFT_W_VAYIGASH_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VAYIGASH_LITA, (int)(sizeof(HC_HAFT_W_VAYIGASH_LITA)/sizeof(HC_HAFT_W_VAYIGASH_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VAYIGASH_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VAYIGASH_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VAYIGASH_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VAYIGASH_HAGRA, (int)(sizeof(HC_HAFT_W_VAYIGASH_HAGRA)/sizeof(HC_HAFT_W_VAYIGASH_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VAYIGASH_SEFARD, (int)(sizeof(HC_HAFT_W_VAYIGASH_SEFARD)/sizeof(HC_HAFT_W_VAYIGASH_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VAYIGASH_CHABAD, (int)(sizeof(HC_HAFT_W_VAYIGASH_CHABAD)/sizeof(HC_HAFT_W_VAYIGASH_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VAYIGASH_MAGREB, (int)(sizeof(HC_HAFT_W_VAYIGASH_MAGREB)/sizeof(HC_HAFT_W_VAYIGASH_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VAYIGASH_ALGERIA, (int)(sizeof(HC_HAFT_W_VAYIGASH_ALGERIA)/sizeof(HC_HAFT_W_VAYIGASH_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VAYIGASH_MOROCCO, (int)(sizeof(HC_HAFT_W_VAYIGASH_MOROCCO)/sizeof(HC_HAFT_W_VAYIGASH_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VAYIGASH_FES, (int)(sizeof(HC_HAFT_W_VAYIGASH_FES)/sizeof(HC_HAFT_W_VAYIGASH_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VAYIGASH_MARRAKESH, (int)(sizeof(HC_HAFT_W_VAYIGASH_MARRAKESH)/sizeof(HC_HAFT_W_VAYIGASH_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VAYIGASH_TOSHBIM, (int)(sizeof(HC_HAFT_W_VAYIGASH_TOSHBIM)/sizeof(HC_HAFT_W_VAYIGASH_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VAYIGASH_DJERBA, (int)(sizeof(HC_HAFT_W_VAYIGASH_DJERBA)/sizeof(HC_HAFT_W_VAYIGASH_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VAYIGASH_BAVLIM, (int)(sizeof(HC_HAFT_W_VAYIGASH_BAVLIM)/sizeof(HC_HAFT_W_VAYIGASH_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VAYIGASH_TEIMAN, (int)(sizeof(HC_HAFT_W_VAYIGASH_TEIMAN)/sizeof(HC_HAFT_W_VAYIGASH_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VAYIGASH_BALADI, (int)(sizeof(HC_HAFT_W_VAYIGASH_BALADI)/sizeof(HC_HAFT_W_VAYIGASH_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VAYIGASH_SHAMI, (int)(sizeof(HC_HAFT_W_VAYIGASH_SHAMI)/sizeof(HC_HAFT_W_VAYIGASH_SHAMI[0])) } },
    [HC_VAYECHI] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VAYECHI_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VAYECHI_ASHKENAZ)/sizeof(HC_HAFT_W_VAYECHI_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VAYECHI_ITALKI, (int)(sizeof(HC_HAFT_W_VAYECHI_ITALKI)/sizeof(HC_HAFT_W_VAYECHI_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VAYECHI_FRANKFURT, (int)(sizeof(HC_HAFT_W_VAYECHI_FRANKFURT)/sizeof(HC_HAFT_W_VAYECHI_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VAYECHI_LITA, (int)(sizeof(HC_HAFT_W_VAYECHI_LITA)/sizeof(HC_HAFT_W_VAYECHI_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VAYECHI_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VAYECHI_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VAYECHI_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VAYECHI_HAGRA, (int)(sizeof(HC_HAFT_W_VAYECHI_HAGRA)/sizeof(HC_HAFT_W_VAYECHI_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VAYECHI_SEFARD, (int)(sizeof(HC_HAFT_W_VAYECHI_SEFARD)/sizeof(HC_HAFT_W_VAYECHI_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VAYECHI_CHABAD, (int)(sizeof(HC_HAFT_W_VAYECHI_CHABAD)/sizeof(HC_HAFT_W_VAYECHI_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VAYECHI_MAGREB, (int)(sizeof(HC_HAFT_W_VAYECHI_MAGREB)/sizeof(HC_HAFT_W_VAYECHI_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VAYECHI_ALGERIA, (int)(sizeof(HC_HAFT_W_VAYECHI_ALGERIA)/sizeof(HC_HAFT_W_VAYECHI_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VAYECHI_MOROCCO, (int)(sizeof(HC_HAFT_W_VAYECHI_MOROCCO)/sizeof(HC_HAFT_W_VAYECHI_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VAYECHI_FES, (int)(sizeof(HC_HAFT_W_VAYECHI_FES)/sizeof(HC_HAFT_W_VAYECHI_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VAYECHI_MARRAKESH, (int)(sizeof(HC_HAFT_W_VAYECHI_MARRAKESH)/sizeof(HC_HAFT_W_VAYECHI_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VAYECHI_TOSHBIM, (int)(sizeof(HC_HAFT_W_VAYECHI_TOSHBIM)/sizeof(HC_HAFT_W_VAYECHI_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VAYECHI_DJERBA, (int)(sizeof(HC_HAFT_W_VAYECHI_DJERBA)/sizeof(HC_HAFT_W_VAYECHI_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VAYECHI_BAVLIM, (int)(sizeof(HC_HAFT_W_VAYECHI_BAVLIM)/sizeof(HC_HAFT_W_VAYECHI_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VAYECHI_TEIMAN, (int)(sizeof(HC_HAFT_W_VAYECHI_TEIMAN)/sizeof(HC_HAFT_W_VAYECHI_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VAYECHI_BALADI, (int)(sizeof(HC_HAFT_W_VAYECHI_BALADI)/sizeof(HC_HAFT_W_VAYECHI_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VAYECHI_SHAMI, (int)(sizeof(HC_HAFT_W_VAYECHI_SHAMI)/sizeof(HC_HAFT_W_VAYECHI_SHAMI[0])) } },
    [HC_SHEMOT] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_SHEMOT_ASHKENAZ, (int)(sizeof(HC_HAFT_W_SHEMOT_ASHKENAZ)/sizeof(HC_HAFT_W_SHEMOT_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_SHEMOT_ITALKI, (int)(sizeof(HC_HAFT_W_SHEMOT_ITALKI)/sizeof(HC_HAFT_W_SHEMOT_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_SHEMOT_FRANKFURT, (int)(sizeof(HC_HAFT_W_SHEMOT_FRANKFURT)/sizeof(HC_HAFT_W_SHEMOT_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_SHEMOT_LITA, (int)(sizeof(HC_HAFT_W_SHEMOT_LITA)/sizeof(HC_HAFT_W_SHEMOT_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_SHEMOT_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_SHEMOT_CHAYEY_ODOM)/sizeof(HC_HAFT_W_SHEMOT_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_SHEMOT_HAGRA, (int)(sizeof(HC_HAFT_W_SHEMOT_HAGRA)/sizeof(HC_HAFT_W_SHEMOT_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_SHEMOT_SEFARD, (int)(sizeof(HC_HAFT_W_SHEMOT_SEFARD)/sizeof(HC_HAFT_W_SHEMOT_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_SHEMOT_CHABAD, (int)(sizeof(HC_HAFT_W_SHEMOT_CHABAD)/sizeof(HC_HAFT_W_SHEMOT_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_SHEMOT_MAGREB, (int)(sizeof(HC_HAFT_W_SHEMOT_MAGREB)/sizeof(HC_HAFT_W_SHEMOT_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_SHEMOT_ALGERIA, (int)(sizeof(HC_HAFT_W_SHEMOT_ALGERIA)/sizeof(HC_HAFT_W_SHEMOT_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_SHEMOT_MOROCCO, (int)(sizeof(HC_HAFT_W_SHEMOT_MOROCCO)/sizeof(HC_HAFT_W_SHEMOT_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_SHEMOT_FES, (int)(sizeof(HC_HAFT_W_SHEMOT_FES)/sizeof(HC_HAFT_W_SHEMOT_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_SHEMOT_MARRAKESH, (int)(sizeof(HC_HAFT_W_SHEMOT_MARRAKESH)/sizeof(HC_HAFT_W_SHEMOT_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_SHEMOT_TOSHBIM, (int)(sizeof(HC_HAFT_W_SHEMOT_TOSHBIM)/sizeof(HC_HAFT_W_SHEMOT_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_SHEMOT_DJERBA, (int)(sizeof(HC_HAFT_W_SHEMOT_DJERBA)/sizeof(HC_HAFT_W_SHEMOT_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_SHEMOT_BAVLIM, (int)(sizeof(HC_HAFT_W_SHEMOT_BAVLIM)/sizeof(HC_HAFT_W_SHEMOT_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_SHEMOT_TEIMAN, (int)(sizeof(HC_HAFT_W_SHEMOT_TEIMAN)/sizeof(HC_HAFT_W_SHEMOT_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_SHEMOT_BALADI, (int)(sizeof(HC_HAFT_W_SHEMOT_BALADI)/sizeof(HC_HAFT_W_SHEMOT_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_SHEMOT_SHAMI, (int)(sizeof(HC_HAFT_W_SHEMOT_SHAMI)/sizeof(HC_HAFT_W_SHEMOT_SHAMI[0])) } },
    [HC_VAERA] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VAERA_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VAERA_ASHKENAZ)/sizeof(HC_HAFT_W_VAERA_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VAERA_ITALKI, (int)(sizeof(HC_HAFT_W_VAERA_ITALKI)/sizeof(HC_HAFT_W_VAERA_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VAERA_FRANKFURT, (int)(sizeof(HC_HAFT_W_VAERA_FRANKFURT)/sizeof(HC_HAFT_W_VAERA_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VAERA_LITA, (int)(sizeof(HC_HAFT_W_VAERA_LITA)/sizeof(HC_HAFT_W_VAERA_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VAERA_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VAERA_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VAERA_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VAERA_HAGRA, (int)(sizeof(HC_HAFT_W_VAERA_HAGRA)/sizeof(HC_HAFT_W_VAERA_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VAERA_SEFARD, (int)(sizeof(HC_HAFT_W_VAERA_SEFARD)/sizeof(HC_HAFT_W_VAERA_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VAERA_CHABAD, (int)(sizeof(HC_HAFT_W_VAERA_CHABAD)/sizeof(HC_HAFT_W_VAERA_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VAERA_MAGREB, (int)(sizeof(HC_HAFT_W_VAERA_MAGREB)/sizeof(HC_HAFT_W_VAERA_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VAERA_ALGERIA, (int)(sizeof(HC_HAFT_W_VAERA_ALGERIA)/sizeof(HC_HAFT_W_VAERA_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VAERA_MOROCCO, (int)(sizeof(HC_HAFT_W_VAERA_MOROCCO)/sizeof(HC_HAFT_W_VAERA_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VAERA_FES, (int)(sizeof(HC_HAFT_W_VAERA_FES)/sizeof(HC_HAFT_W_VAERA_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VAERA_MARRAKESH, (int)(sizeof(HC_HAFT_W_VAERA_MARRAKESH)/sizeof(HC_HAFT_W_VAERA_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VAERA_TOSHBIM, (int)(sizeof(HC_HAFT_W_VAERA_TOSHBIM)/sizeof(HC_HAFT_W_VAERA_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VAERA_DJERBA, (int)(sizeof(HC_HAFT_W_VAERA_DJERBA)/sizeof(HC_HAFT_W_VAERA_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VAERA_BAVLIM, (int)(sizeof(HC_HAFT_W_VAERA_BAVLIM)/sizeof(HC_HAFT_W_VAERA_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VAERA_TEIMAN, (int)(sizeof(HC_HAFT_W_VAERA_TEIMAN)/sizeof(HC_HAFT_W_VAERA_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VAERA_BALADI, (int)(sizeof(HC_HAFT_W_VAERA_BALADI)/sizeof(HC_HAFT_W_VAERA_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VAERA_SHAMI, (int)(sizeof(HC_HAFT_W_VAERA_SHAMI)/sizeof(HC_HAFT_W_VAERA_SHAMI[0])) } },
    [HC_BO] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_BO_ASHKENAZ, (int)(sizeof(HC_HAFT_W_BO_ASHKENAZ)/sizeof(HC_HAFT_W_BO_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_BO_ITALKI, (int)(sizeof(HC_HAFT_W_BO_ITALKI)/sizeof(HC_HAFT_W_BO_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_BO_FRANKFURT, (int)(sizeof(HC_HAFT_W_BO_FRANKFURT)/sizeof(HC_HAFT_W_BO_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_BO_LITA, (int)(sizeof(HC_HAFT_W_BO_LITA)/sizeof(HC_HAFT_W_BO_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_BO_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_BO_CHAYEY_ODOM)/sizeof(HC_HAFT_W_BO_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_BO_HAGRA, (int)(sizeof(HC_HAFT_W_BO_HAGRA)/sizeof(HC_HAFT_W_BO_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_BO_SEFARD, (int)(sizeof(HC_HAFT_W_BO_SEFARD)/sizeof(HC_HAFT_W_BO_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_BO_CHABAD, (int)(sizeof(HC_HAFT_W_BO_CHABAD)/sizeof(HC_HAFT_W_BO_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_BO_MAGREB, (int)(sizeof(HC_HAFT_W_BO_MAGREB)/sizeof(HC_HAFT_W_BO_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_BO_ALGERIA, (int)(sizeof(HC_HAFT_W_BO_ALGERIA)/sizeof(HC_HAFT_W_BO_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_BO_MOROCCO, (int)(sizeof(HC_HAFT_W_BO_MOROCCO)/sizeof(HC_HAFT_W_BO_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_BO_FES, (int)(sizeof(HC_HAFT_W_BO_FES)/sizeof(HC_HAFT_W_BO_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_BO_MARRAKESH, (int)(sizeof(HC_HAFT_W_BO_MARRAKESH)/sizeof(HC_HAFT_W_BO_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_BO_TOSHBIM, (int)(sizeof(HC_HAFT_W_BO_TOSHBIM)/sizeof(HC_HAFT_W_BO_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_BO_DJERBA, (int)(sizeof(HC_HAFT_W_BO_DJERBA)/sizeof(HC_HAFT_W_BO_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_BO_BAVLIM, (int)(sizeof(HC_HAFT_W_BO_BAVLIM)/sizeof(HC_HAFT_W_BO_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_BO_TEIMAN, (int)(sizeof(HC_HAFT_W_BO_TEIMAN)/sizeof(HC_HAFT_W_BO_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_BO_BALADI, (int)(sizeof(HC_HAFT_W_BO_BALADI)/sizeof(HC_HAFT_W_BO_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_BO_SHAMI, (int)(sizeof(HC_HAFT_W_BO_SHAMI)/sizeof(HC_HAFT_W_BO_SHAMI[0])) } },
    [HC_BESHALACH] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_BESHALACH_ASHKENAZ, (int)(sizeof(HC_HAFT_W_BESHALACH_ASHKENAZ)/sizeof(HC_HAFT_W_BESHALACH_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_BESHALACH_ITALKI, (int)(sizeof(HC_HAFT_W_BESHALACH_ITALKI)/sizeof(HC_HAFT_W_BESHALACH_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_BESHALACH_FRANKFURT, (int)(sizeof(HC_HAFT_W_BESHALACH_FRANKFURT)/sizeof(HC_HAFT_W_BESHALACH_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_BESHALACH_LITA, (int)(sizeof(HC_HAFT_W_BESHALACH_LITA)/sizeof(HC_HAFT_W_BESHALACH_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_BESHALACH_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_BESHALACH_CHAYEY_ODOM)/sizeof(HC_HAFT_W_BESHALACH_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_BESHALACH_HAGRA, (int)(sizeof(HC_HAFT_W_BESHALACH_HAGRA)/sizeof(HC_HAFT_W_BESHALACH_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_BESHALACH_SEFARD, (int)(sizeof(HC_HAFT_W_BESHALACH_SEFARD)/sizeof(HC_HAFT_W_BESHALACH_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_BESHALACH_CHABAD, (int)(sizeof(HC_HAFT_W_BESHALACH_CHABAD)/sizeof(HC_HAFT_W_BESHALACH_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_BESHALACH_MAGREB, (int)(sizeof(HC_HAFT_W_BESHALACH_MAGREB)/sizeof(HC_HAFT_W_BESHALACH_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_BESHALACH_ALGERIA, (int)(sizeof(HC_HAFT_W_BESHALACH_ALGERIA)/sizeof(HC_HAFT_W_BESHALACH_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_BESHALACH_MOROCCO, (int)(sizeof(HC_HAFT_W_BESHALACH_MOROCCO)/sizeof(HC_HAFT_W_BESHALACH_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_BESHALACH_FES, (int)(sizeof(HC_HAFT_W_BESHALACH_FES)/sizeof(HC_HAFT_W_BESHALACH_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_BESHALACH_MARRAKESH, (int)(sizeof(HC_HAFT_W_BESHALACH_MARRAKESH)/sizeof(HC_HAFT_W_BESHALACH_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_BESHALACH_TOSHBIM, (int)(sizeof(HC_HAFT_W_BESHALACH_TOSHBIM)/sizeof(HC_HAFT_W_BESHALACH_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_BESHALACH_DJERBA, (int)(sizeof(HC_HAFT_W_BESHALACH_DJERBA)/sizeof(HC_HAFT_W_BESHALACH_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_BESHALACH_BAVLIM, (int)(sizeof(HC_HAFT_W_BESHALACH_BAVLIM)/sizeof(HC_HAFT_W_BESHALACH_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_BESHALACH_TEIMAN, (int)(sizeof(HC_HAFT_W_BESHALACH_TEIMAN)/sizeof(HC_HAFT_W_BESHALACH_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_BESHALACH_BALADI, (int)(sizeof(HC_HAFT_W_BESHALACH_BALADI)/sizeof(HC_HAFT_W_BESHALACH_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_BESHALACH_SHAMI, (int)(sizeof(HC_HAFT_W_BESHALACH_SHAMI)/sizeof(HC_HAFT_W_BESHALACH_SHAMI[0])) } },
    [HC_YITRO] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_YITRO_ASHKENAZ, (int)(sizeof(HC_HAFT_W_YITRO_ASHKENAZ)/sizeof(HC_HAFT_W_YITRO_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_YITRO_ITALKI, (int)(sizeof(HC_HAFT_W_YITRO_ITALKI)/sizeof(HC_HAFT_W_YITRO_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_YITRO_FRANKFURT, (int)(sizeof(HC_HAFT_W_YITRO_FRANKFURT)/sizeof(HC_HAFT_W_YITRO_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_YITRO_LITA, (int)(sizeof(HC_HAFT_W_YITRO_LITA)/sizeof(HC_HAFT_W_YITRO_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_YITRO_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_YITRO_CHAYEY_ODOM)/sizeof(HC_HAFT_W_YITRO_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_YITRO_HAGRA, (int)(sizeof(HC_HAFT_W_YITRO_HAGRA)/sizeof(HC_HAFT_W_YITRO_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_YITRO_SEFARD, (int)(sizeof(HC_HAFT_W_YITRO_SEFARD)/sizeof(HC_HAFT_W_YITRO_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_YITRO_CHABAD, (int)(sizeof(HC_HAFT_W_YITRO_CHABAD)/sizeof(HC_HAFT_W_YITRO_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_YITRO_MAGREB, (int)(sizeof(HC_HAFT_W_YITRO_MAGREB)/sizeof(HC_HAFT_W_YITRO_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_YITRO_ALGERIA, (int)(sizeof(HC_HAFT_W_YITRO_ALGERIA)/sizeof(HC_HAFT_W_YITRO_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_YITRO_MOROCCO, (int)(sizeof(HC_HAFT_W_YITRO_MOROCCO)/sizeof(HC_HAFT_W_YITRO_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_YITRO_FES, (int)(sizeof(HC_HAFT_W_YITRO_FES)/sizeof(HC_HAFT_W_YITRO_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_YITRO_MARRAKESH, (int)(sizeof(HC_HAFT_W_YITRO_MARRAKESH)/sizeof(HC_HAFT_W_YITRO_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_YITRO_TOSHBIM, (int)(sizeof(HC_HAFT_W_YITRO_TOSHBIM)/sizeof(HC_HAFT_W_YITRO_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_YITRO_DJERBA, (int)(sizeof(HC_HAFT_W_YITRO_DJERBA)/sizeof(HC_HAFT_W_YITRO_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_YITRO_BAVLIM, (int)(sizeof(HC_HAFT_W_YITRO_BAVLIM)/sizeof(HC_HAFT_W_YITRO_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_YITRO_TEIMAN, (int)(sizeof(HC_HAFT_W_YITRO_TEIMAN)/sizeof(HC_HAFT_W_YITRO_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_YITRO_BALADI, (int)(sizeof(HC_HAFT_W_YITRO_BALADI)/sizeof(HC_HAFT_W_YITRO_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_YITRO_SHAMI, (int)(sizeof(HC_HAFT_W_YITRO_SHAMI)/sizeof(HC_HAFT_W_YITRO_SHAMI[0])) } },
    [HC_MISHPATIM] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_MISHPATIM_ASHKENAZ, (int)(sizeof(HC_HAFT_W_MISHPATIM_ASHKENAZ)/sizeof(HC_HAFT_W_MISHPATIM_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_MISHPATIM_ITALKI, (int)(sizeof(HC_HAFT_W_MISHPATIM_ITALKI)/sizeof(HC_HAFT_W_MISHPATIM_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_MISHPATIM_FRANKFURT, (int)(sizeof(HC_HAFT_W_MISHPATIM_FRANKFURT)/sizeof(HC_HAFT_W_MISHPATIM_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_MISHPATIM_LITA, (int)(sizeof(HC_HAFT_W_MISHPATIM_LITA)/sizeof(HC_HAFT_W_MISHPATIM_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_MISHPATIM_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_MISHPATIM_CHAYEY_ODOM)/sizeof(HC_HAFT_W_MISHPATIM_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_MISHPATIM_HAGRA, (int)(sizeof(HC_HAFT_W_MISHPATIM_HAGRA)/sizeof(HC_HAFT_W_MISHPATIM_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_MISHPATIM_SEFARD, (int)(sizeof(HC_HAFT_W_MISHPATIM_SEFARD)/sizeof(HC_HAFT_W_MISHPATIM_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_MISHPATIM_CHABAD, (int)(sizeof(HC_HAFT_W_MISHPATIM_CHABAD)/sizeof(HC_HAFT_W_MISHPATIM_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_MISHPATIM_MAGREB, (int)(sizeof(HC_HAFT_W_MISHPATIM_MAGREB)/sizeof(HC_HAFT_W_MISHPATIM_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_MISHPATIM_ALGERIA, (int)(sizeof(HC_HAFT_W_MISHPATIM_ALGERIA)/sizeof(HC_HAFT_W_MISHPATIM_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_MISHPATIM_MOROCCO, (int)(sizeof(HC_HAFT_W_MISHPATIM_MOROCCO)/sizeof(HC_HAFT_W_MISHPATIM_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_MISHPATIM_FES, (int)(sizeof(HC_HAFT_W_MISHPATIM_FES)/sizeof(HC_HAFT_W_MISHPATIM_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_MISHPATIM_MARRAKESH, (int)(sizeof(HC_HAFT_W_MISHPATIM_MARRAKESH)/sizeof(HC_HAFT_W_MISHPATIM_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_MISHPATIM_TOSHBIM, (int)(sizeof(HC_HAFT_W_MISHPATIM_TOSHBIM)/sizeof(HC_HAFT_W_MISHPATIM_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_MISHPATIM_DJERBA, (int)(sizeof(HC_HAFT_W_MISHPATIM_DJERBA)/sizeof(HC_HAFT_W_MISHPATIM_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_MISHPATIM_BAVLIM, (int)(sizeof(HC_HAFT_W_MISHPATIM_BAVLIM)/sizeof(HC_HAFT_W_MISHPATIM_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_MISHPATIM_TEIMAN, (int)(sizeof(HC_HAFT_W_MISHPATIM_TEIMAN)/sizeof(HC_HAFT_W_MISHPATIM_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_MISHPATIM_BALADI, (int)(sizeof(HC_HAFT_W_MISHPATIM_BALADI)/sizeof(HC_HAFT_W_MISHPATIM_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_MISHPATIM_SHAMI, (int)(sizeof(HC_HAFT_W_MISHPATIM_SHAMI)/sizeof(HC_HAFT_W_MISHPATIM_SHAMI[0])) } },
    [HC_TERUMAH] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_TERUMAH_ASHKENAZ, (int)(sizeof(HC_HAFT_W_TERUMAH_ASHKENAZ)/sizeof(HC_HAFT_W_TERUMAH_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_TERUMAH_ITALKI, (int)(sizeof(HC_HAFT_W_TERUMAH_ITALKI)/sizeof(HC_HAFT_W_TERUMAH_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_TERUMAH_FRANKFURT, (int)(sizeof(HC_HAFT_W_TERUMAH_FRANKFURT)/sizeof(HC_HAFT_W_TERUMAH_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_TERUMAH_LITA, (int)(sizeof(HC_HAFT_W_TERUMAH_LITA)/sizeof(HC_HAFT_W_TERUMAH_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_TERUMAH_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_TERUMAH_CHAYEY_ODOM)/sizeof(HC_HAFT_W_TERUMAH_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_TERUMAH_HAGRA, (int)(sizeof(HC_HAFT_W_TERUMAH_HAGRA)/sizeof(HC_HAFT_W_TERUMAH_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_TERUMAH_SEFARD, (int)(sizeof(HC_HAFT_W_TERUMAH_SEFARD)/sizeof(HC_HAFT_W_TERUMAH_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_TERUMAH_CHABAD, (int)(sizeof(HC_HAFT_W_TERUMAH_CHABAD)/sizeof(HC_HAFT_W_TERUMAH_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_TERUMAH_MAGREB, (int)(sizeof(HC_HAFT_W_TERUMAH_MAGREB)/sizeof(HC_HAFT_W_TERUMAH_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_TERUMAH_ALGERIA, (int)(sizeof(HC_HAFT_W_TERUMAH_ALGERIA)/sizeof(HC_HAFT_W_TERUMAH_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_TERUMAH_MOROCCO, (int)(sizeof(HC_HAFT_W_TERUMAH_MOROCCO)/sizeof(HC_HAFT_W_TERUMAH_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_TERUMAH_FES, (int)(sizeof(HC_HAFT_W_TERUMAH_FES)/sizeof(HC_HAFT_W_TERUMAH_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_TERUMAH_MARRAKESH, (int)(sizeof(HC_HAFT_W_TERUMAH_MARRAKESH)/sizeof(HC_HAFT_W_TERUMAH_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_TERUMAH_TOSHBIM, (int)(sizeof(HC_HAFT_W_TERUMAH_TOSHBIM)/sizeof(HC_HAFT_W_TERUMAH_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_TERUMAH_DJERBA, (int)(sizeof(HC_HAFT_W_TERUMAH_DJERBA)/sizeof(HC_HAFT_W_TERUMAH_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_TERUMAH_BAVLIM, (int)(sizeof(HC_HAFT_W_TERUMAH_BAVLIM)/sizeof(HC_HAFT_W_TERUMAH_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_TERUMAH_TEIMAN, (int)(sizeof(HC_HAFT_W_TERUMAH_TEIMAN)/sizeof(HC_HAFT_W_TERUMAH_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_TERUMAH_BALADI, (int)(sizeof(HC_HAFT_W_TERUMAH_BALADI)/sizeof(HC_HAFT_W_TERUMAH_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_TERUMAH_SHAMI, (int)(sizeof(HC_HAFT_W_TERUMAH_SHAMI)/sizeof(HC_HAFT_W_TERUMAH_SHAMI[0])) } },
    [HC_TETZAVEH] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_TETZAVEH_ASHKENAZ, (int)(sizeof(HC_HAFT_W_TETZAVEH_ASHKENAZ)/sizeof(HC_HAFT_W_TETZAVEH_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_TETZAVEH_ITALKI, (int)(sizeof(HC_HAFT_W_TETZAVEH_ITALKI)/sizeof(HC_HAFT_W_TETZAVEH_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_TETZAVEH_FRANKFURT, (int)(sizeof(HC_HAFT_W_TETZAVEH_FRANKFURT)/sizeof(HC_HAFT_W_TETZAVEH_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_TETZAVEH_LITA, (int)(sizeof(HC_HAFT_W_TETZAVEH_LITA)/sizeof(HC_HAFT_W_TETZAVEH_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_TETZAVEH_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_TETZAVEH_CHAYEY_ODOM)/sizeof(HC_HAFT_W_TETZAVEH_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_TETZAVEH_HAGRA, (int)(sizeof(HC_HAFT_W_TETZAVEH_HAGRA)/sizeof(HC_HAFT_W_TETZAVEH_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_TETZAVEH_SEFARD, (int)(sizeof(HC_HAFT_W_TETZAVEH_SEFARD)/sizeof(HC_HAFT_W_TETZAVEH_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_TETZAVEH_CHABAD, (int)(sizeof(HC_HAFT_W_TETZAVEH_CHABAD)/sizeof(HC_HAFT_W_TETZAVEH_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_TETZAVEH_MAGREB, (int)(sizeof(HC_HAFT_W_TETZAVEH_MAGREB)/sizeof(HC_HAFT_W_TETZAVEH_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_TETZAVEH_ALGERIA, (int)(sizeof(HC_HAFT_W_TETZAVEH_ALGERIA)/sizeof(HC_HAFT_W_TETZAVEH_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_TETZAVEH_MOROCCO, (int)(sizeof(HC_HAFT_W_TETZAVEH_MOROCCO)/sizeof(HC_HAFT_W_TETZAVEH_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_TETZAVEH_FES, (int)(sizeof(HC_HAFT_W_TETZAVEH_FES)/sizeof(HC_HAFT_W_TETZAVEH_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_TETZAVEH_MARRAKESH, (int)(sizeof(HC_HAFT_W_TETZAVEH_MARRAKESH)/sizeof(HC_HAFT_W_TETZAVEH_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_TETZAVEH_TOSHBIM, (int)(sizeof(HC_HAFT_W_TETZAVEH_TOSHBIM)/sizeof(HC_HAFT_W_TETZAVEH_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_TETZAVEH_DJERBA, (int)(sizeof(HC_HAFT_W_TETZAVEH_DJERBA)/sizeof(HC_HAFT_W_TETZAVEH_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_TETZAVEH_BAVLIM, (int)(sizeof(HC_HAFT_W_TETZAVEH_BAVLIM)/sizeof(HC_HAFT_W_TETZAVEH_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_TETZAVEH_TEIMAN, (int)(sizeof(HC_HAFT_W_TETZAVEH_TEIMAN)/sizeof(HC_HAFT_W_TETZAVEH_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_TETZAVEH_BALADI, (int)(sizeof(HC_HAFT_W_TETZAVEH_BALADI)/sizeof(HC_HAFT_W_TETZAVEH_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_TETZAVEH_SHAMI, (int)(sizeof(HC_HAFT_W_TETZAVEH_SHAMI)/sizeof(HC_HAFT_W_TETZAVEH_SHAMI[0])) } },
    [HC_KI_TISA] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_KI_TISA_ASHKENAZ, (int)(sizeof(HC_HAFT_W_KI_TISA_ASHKENAZ)/sizeof(HC_HAFT_W_KI_TISA_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_KI_TISA_ITALKI, (int)(sizeof(HC_HAFT_W_KI_TISA_ITALKI)/sizeof(HC_HAFT_W_KI_TISA_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_KI_TISA_FRANKFURT, (int)(sizeof(HC_HAFT_W_KI_TISA_FRANKFURT)/sizeof(HC_HAFT_W_KI_TISA_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_KI_TISA_LITA, (int)(sizeof(HC_HAFT_W_KI_TISA_LITA)/sizeof(HC_HAFT_W_KI_TISA_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_KI_TISA_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_KI_TISA_CHAYEY_ODOM)/sizeof(HC_HAFT_W_KI_TISA_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_KI_TISA_HAGRA, (int)(sizeof(HC_HAFT_W_KI_TISA_HAGRA)/sizeof(HC_HAFT_W_KI_TISA_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_KI_TISA_SEFARD, (int)(sizeof(HC_HAFT_W_KI_TISA_SEFARD)/sizeof(HC_HAFT_W_KI_TISA_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_KI_TISA_CHABAD, (int)(sizeof(HC_HAFT_W_KI_TISA_CHABAD)/sizeof(HC_HAFT_W_KI_TISA_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_KI_TISA_MAGREB, (int)(sizeof(HC_HAFT_W_KI_TISA_MAGREB)/sizeof(HC_HAFT_W_KI_TISA_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_KI_TISA_ALGERIA, (int)(sizeof(HC_HAFT_W_KI_TISA_ALGERIA)/sizeof(HC_HAFT_W_KI_TISA_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_KI_TISA_MOROCCO, (int)(sizeof(HC_HAFT_W_KI_TISA_MOROCCO)/sizeof(HC_HAFT_W_KI_TISA_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_KI_TISA_FES, (int)(sizeof(HC_HAFT_W_KI_TISA_FES)/sizeof(HC_HAFT_W_KI_TISA_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_KI_TISA_MARRAKESH, (int)(sizeof(HC_HAFT_W_KI_TISA_MARRAKESH)/sizeof(HC_HAFT_W_KI_TISA_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_KI_TISA_TOSHBIM, (int)(sizeof(HC_HAFT_W_KI_TISA_TOSHBIM)/sizeof(HC_HAFT_W_KI_TISA_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_KI_TISA_DJERBA, (int)(sizeof(HC_HAFT_W_KI_TISA_DJERBA)/sizeof(HC_HAFT_W_KI_TISA_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_KI_TISA_BAVLIM, (int)(sizeof(HC_HAFT_W_KI_TISA_BAVLIM)/sizeof(HC_HAFT_W_KI_TISA_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_KI_TISA_TEIMAN, (int)(sizeof(HC_HAFT_W_KI_TISA_TEIMAN)/sizeof(HC_HAFT_W_KI_TISA_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_KI_TISA_BALADI, (int)(sizeof(HC_HAFT_W_KI_TISA_BALADI)/sizeof(HC_HAFT_W_KI_TISA_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_KI_TISA_SHAMI, (int)(sizeof(HC_HAFT_W_KI_TISA_SHAMI)/sizeof(HC_HAFT_W_KI_TISA_SHAMI[0])) } },
    [HC_VAYAKHEL] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VAYAKHEL_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VAYAKHEL_ASHKENAZ)/sizeof(HC_HAFT_W_VAYAKHEL_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VAYAKHEL_ITALKI, (int)(sizeof(HC_HAFT_W_VAYAKHEL_ITALKI)/sizeof(HC_HAFT_W_VAYAKHEL_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VAYAKHEL_FRANKFURT, (int)(sizeof(HC_HAFT_W_VAYAKHEL_FRANKFURT)/sizeof(HC_HAFT_W_VAYAKHEL_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VAYAKHEL_LITA, (int)(sizeof(HC_HAFT_W_VAYAKHEL_LITA)/sizeof(HC_HAFT_W_VAYAKHEL_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VAYAKHEL_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VAYAKHEL_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VAYAKHEL_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VAYAKHEL_HAGRA, (int)(sizeof(HC_HAFT_W_VAYAKHEL_HAGRA)/sizeof(HC_HAFT_W_VAYAKHEL_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VAYAKHEL_SEFARD, (int)(sizeof(HC_HAFT_W_VAYAKHEL_SEFARD)/sizeof(HC_HAFT_W_VAYAKHEL_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VAYAKHEL_CHABAD, (int)(sizeof(HC_HAFT_W_VAYAKHEL_CHABAD)/sizeof(HC_HAFT_W_VAYAKHEL_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VAYAKHEL_MAGREB, (int)(sizeof(HC_HAFT_W_VAYAKHEL_MAGREB)/sizeof(HC_HAFT_W_VAYAKHEL_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VAYAKHEL_ALGERIA, (int)(sizeof(HC_HAFT_W_VAYAKHEL_ALGERIA)/sizeof(HC_HAFT_W_VAYAKHEL_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VAYAKHEL_MOROCCO, (int)(sizeof(HC_HAFT_W_VAYAKHEL_MOROCCO)/sizeof(HC_HAFT_W_VAYAKHEL_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VAYAKHEL_FES, (int)(sizeof(HC_HAFT_W_VAYAKHEL_FES)/sizeof(HC_HAFT_W_VAYAKHEL_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VAYAKHEL_MARRAKESH, (int)(sizeof(HC_HAFT_W_VAYAKHEL_MARRAKESH)/sizeof(HC_HAFT_W_VAYAKHEL_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VAYAKHEL_TOSHBIM, (int)(sizeof(HC_HAFT_W_VAYAKHEL_TOSHBIM)/sizeof(HC_HAFT_W_VAYAKHEL_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VAYAKHEL_DJERBA, (int)(sizeof(HC_HAFT_W_VAYAKHEL_DJERBA)/sizeof(HC_HAFT_W_VAYAKHEL_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VAYAKHEL_BAVLIM, (int)(sizeof(HC_HAFT_W_VAYAKHEL_BAVLIM)/sizeof(HC_HAFT_W_VAYAKHEL_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VAYAKHEL_TEIMAN, (int)(sizeof(HC_HAFT_W_VAYAKHEL_TEIMAN)/sizeof(HC_HAFT_W_VAYAKHEL_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VAYAKHEL_BALADI, (int)(sizeof(HC_HAFT_W_VAYAKHEL_BALADI)/sizeof(HC_HAFT_W_VAYAKHEL_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VAYAKHEL_SHAMI, (int)(sizeof(HC_HAFT_W_VAYAKHEL_SHAMI)/sizeof(HC_HAFT_W_VAYAKHEL_SHAMI[0])) } },
    [HC_PEKUDEI] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_PEKUDEI_ASHKENAZ, (int)(sizeof(HC_HAFT_W_PEKUDEI_ASHKENAZ)/sizeof(HC_HAFT_W_PEKUDEI_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_PEKUDEI_ITALKI, (int)(sizeof(HC_HAFT_W_PEKUDEI_ITALKI)/sizeof(HC_HAFT_W_PEKUDEI_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_PEKUDEI_FRANKFURT, (int)(sizeof(HC_HAFT_W_PEKUDEI_FRANKFURT)/sizeof(HC_HAFT_W_PEKUDEI_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_PEKUDEI_LITA, (int)(sizeof(HC_HAFT_W_PEKUDEI_LITA)/sizeof(HC_HAFT_W_PEKUDEI_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_PEKUDEI_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_PEKUDEI_CHAYEY_ODOM)/sizeof(HC_HAFT_W_PEKUDEI_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_PEKUDEI_HAGRA, (int)(sizeof(HC_HAFT_W_PEKUDEI_HAGRA)/sizeof(HC_HAFT_W_PEKUDEI_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_PEKUDEI_SEFARD, (int)(sizeof(HC_HAFT_W_PEKUDEI_SEFARD)/sizeof(HC_HAFT_W_PEKUDEI_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_PEKUDEI_CHABAD, (int)(sizeof(HC_HAFT_W_PEKUDEI_CHABAD)/sizeof(HC_HAFT_W_PEKUDEI_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_PEKUDEI_MAGREB, (int)(sizeof(HC_HAFT_W_PEKUDEI_MAGREB)/sizeof(HC_HAFT_W_PEKUDEI_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_PEKUDEI_ALGERIA, (int)(sizeof(HC_HAFT_W_PEKUDEI_ALGERIA)/sizeof(HC_HAFT_W_PEKUDEI_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_PEKUDEI_MOROCCO, (int)(sizeof(HC_HAFT_W_PEKUDEI_MOROCCO)/sizeof(HC_HAFT_W_PEKUDEI_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_PEKUDEI_FES, (int)(sizeof(HC_HAFT_W_PEKUDEI_FES)/sizeof(HC_HAFT_W_PEKUDEI_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_PEKUDEI_MARRAKESH, (int)(sizeof(HC_HAFT_W_PEKUDEI_MARRAKESH)/sizeof(HC_HAFT_W_PEKUDEI_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_PEKUDEI_TOSHBIM, (int)(sizeof(HC_HAFT_W_PEKUDEI_TOSHBIM)/sizeof(HC_HAFT_W_PEKUDEI_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_PEKUDEI_DJERBA, (int)(sizeof(HC_HAFT_W_PEKUDEI_DJERBA)/sizeof(HC_HAFT_W_PEKUDEI_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_PEKUDEI_BAVLIM, (int)(sizeof(HC_HAFT_W_PEKUDEI_BAVLIM)/sizeof(HC_HAFT_W_PEKUDEI_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_PEKUDEI_TEIMAN, (int)(sizeof(HC_HAFT_W_PEKUDEI_TEIMAN)/sizeof(HC_HAFT_W_PEKUDEI_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_PEKUDEI_BALADI, (int)(sizeof(HC_HAFT_W_PEKUDEI_BALADI)/sizeof(HC_HAFT_W_PEKUDEI_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_PEKUDEI_SHAMI, (int)(sizeof(HC_HAFT_W_PEKUDEI_SHAMI)/sizeof(HC_HAFT_W_PEKUDEI_SHAMI[0])) } },
    [HC_VAYIKRA] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VAYIKRA_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VAYIKRA_ASHKENAZ)/sizeof(HC_HAFT_W_VAYIKRA_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VAYIKRA_ITALKI, (int)(sizeof(HC_HAFT_W_VAYIKRA_ITALKI)/sizeof(HC_HAFT_W_VAYIKRA_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VAYIKRA_FRANKFURT, (int)(sizeof(HC_HAFT_W_VAYIKRA_FRANKFURT)/sizeof(HC_HAFT_W_VAYIKRA_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VAYIKRA_LITA, (int)(sizeof(HC_HAFT_W_VAYIKRA_LITA)/sizeof(HC_HAFT_W_VAYIKRA_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VAYIKRA_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VAYIKRA_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VAYIKRA_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VAYIKRA_HAGRA, (int)(sizeof(HC_HAFT_W_VAYIKRA_HAGRA)/sizeof(HC_HAFT_W_VAYIKRA_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VAYIKRA_SEFARD, (int)(sizeof(HC_HAFT_W_VAYIKRA_SEFARD)/sizeof(HC_HAFT_W_VAYIKRA_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VAYIKRA_CHABAD, (int)(sizeof(HC_HAFT_W_VAYIKRA_CHABAD)/sizeof(HC_HAFT_W_VAYIKRA_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VAYIKRA_MAGREB, (int)(sizeof(HC_HAFT_W_VAYIKRA_MAGREB)/sizeof(HC_HAFT_W_VAYIKRA_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VAYIKRA_ALGERIA, (int)(sizeof(HC_HAFT_W_VAYIKRA_ALGERIA)/sizeof(HC_HAFT_W_VAYIKRA_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VAYIKRA_MOROCCO, (int)(sizeof(HC_HAFT_W_VAYIKRA_MOROCCO)/sizeof(HC_HAFT_W_VAYIKRA_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VAYIKRA_FES, (int)(sizeof(HC_HAFT_W_VAYIKRA_FES)/sizeof(HC_HAFT_W_VAYIKRA_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VAYIKRA_MARRAKESH, (int)(sizeof(HC_HAFT_W_VAYIKRA_MARRAKESH)/sizeof(HC_HAFT_W_VAYIKRA_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VAYIKRA_TOSHBIM, (int)(sizeof(HC_HAFT_W_VAYIKRA_TOSHBIM)/sizeof(HC_HAFT_W_VAYIKRA_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VAYIKRA_DJERBA, (int)(sizeof(HC_HAFT_W_VAYIKRA_DJERBA)/sizeof(HC_HAFT_W_VAYIKRA_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VAYIKRA_BAVLIM, (int)(sizeof(HC_HAFT_W_VAYIKRA_BAVLIM)/sizeof(HC_HAFT_W_VAYIKRA_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VAYIKRA_TEIMAN, (int)(sizeof(HC_HAFT_W_VAYIKRA_TEIMAN)/sizeof(HC_HAFT_W_VAYIKRA_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VAYIKRA_BALADI, (int)(sizeof(HC_HAFT_W_VAYIKRA_BALADI)/sizeof(HC_HAFT_W_VAYIKRA_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VAYIKRA_SHAMI, (int)(sizeof(HC_HAFT_W_VAYIKRA_SHAMI)/sizeof(HC_HAFT_W_VAYIKRA_SHAMI[0])) } },
    [HC_TZAV] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_TZAV_ASHKENAZ, (int)(sizeof(HC_HAFT_W_TZAV_ASHKENAZ)/sizeof(HC_HAFT_W_TZAV_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_TZAV_ITALKI, (int)(sizeof(HC_HAFT_W_TZAV_ITALKI)/sizeof(HC_HAFT_W_TZAV_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_TZAV_FRANKFURT, (int)(sizeof(HC_HAFT_W_TZAV_FRANKFURT)/sizeof(HC_HAFT_W_TZAV_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_TZAV_LITA, (int)(sizeof(HC_HAFT_W_TZAV_LITA)/sizeof(HC_HAFT_W_TZAV_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_TZAV_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_TZAV_CHAYEY_ODOM)/sizeof(HC_HAFT_W_TZAV_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_TZAV_HAGRA, (int)(sizeof(HC_HAFT_W_TZAV_HAGRA)/sizeof(HC_HAFT_W_TZAV_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_TZAV_SEFARD, (int)(sizeof(HC_HAFT_W_TZAV_SEFARD)/sizeof(HC_HAFT_W_TZAV_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_TZAV_CHABAD, (int)(sizeof(HC_HAFT_W_TZAV_CHABAD)/sizeof(HC_HAFT_W_TZAV_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_TZAV_MAGREB, (int)(sizeof(HC_HAFT_W_TZAV_MAGREB)/sizeof(HC_HAFT_W_TZAV_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_TZAV_ALGERIA, (int)(sizeof(HC_HAFT_W_TZAV_ALGERIA)/sizeof(HC_HAFT_W_TZAV_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_TZAV_MOROCCO, (int)(sizeof(HC_HAFT_W_TZAV_MOROCCO)/sizeof(HC_HAFT_W_TZAV_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_TZAV_FES, (int)(sizeof(HC_HAFT_W_TZAV_FES)/sizeof(HC_HAFT_W_TZAV_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_TZAV_MARRAKESH, (int)(sizeof(HC_HAFT_W_TZAV_MARRAKESH)/sizeof(HC_HAFT_W_TZAV_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_TZAV_TOSHBIM, (int)(sizeof(HC_HAFT_W_TZAV_TOSHBIM)/sizeof(HC_HAFT_W_TZAV_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_TZAV_DJERBA, (int)(sizeof(HC_HAFT_W_TZAV_DJERBA)/sizeof(HC_HAFT_W_TZAV_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_TZAV_BAVLIM, (int)(sizeof(HC_HAFT_W_TZAV_BAVLIM)/sizeof(HC_HAFT_W_TZAV_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_TZAV_TEIMAN, (int)(sizeof(HC_HAFT_W_TZAV_TEIMAN)/sizeof(HC_HAFT_W_TZAV_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_TZAV_BALADI, (int)(sizeof(HC_HAFT_W_TZAV_BALADI)/sizeof(HC_HAFT_W_TZAV_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_TZAV_SHAMI, (int)(sizeof(HC_HAFT_W_TZAV_SHAMI)/sizeof(HC_HAFT_W_TZAV_SHAMI[0])) } },
    [HC_SHEMINI] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_SHEMINI_ASHKENAZ, (int)(sizeof(HC_HAFT_W_SHEMINI_ASHKENAZ)/sizeof(HC_HAFT_W_SHEMINI_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_SHEMINI_ITALKI, (int)(sizeof(HC_HAFT_W_SHEMINI_ITALKI)/sizeof(HC_HAFT_W_SHEMINI_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_SHEMINI_FRANKFURT, (int)(sizeof(HC_HAFT_W_SHEMINI_FRANKFURT)/sizeof(HC_HAFT_W_SHEMINI_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_SHEMINI_LITA, (int)(sizeof(HC_HAFT_W_SHEMINI_LITA)/sizeof(HC_HAFT_W_SHEMINI_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_SHEMINI_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_SHEMINI_CHAYEY_ODOM)/sizeof(HC_HAFT_W_SHEMINI_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_SHEMINI_HAGRA, (int)(sizeof(HC_HAFT_W_SHEMINI_HAGRA)/sizeof(HC_HAFT_W_SHEMINI_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_SHEMINI_SEFARD, (int)(sizeof(HC_HAFT_W_SHEMINI_SEFARD)/sizeof(HC_HAFT_W_SHEMINI_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_SHEMINI_CHABAD, (int)(sizeof(HC_HAFT_W_SHEMINI_CHABAD)/sizeof(HC_HAFT_W_SHEMINI_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_SHEMINI_MAGREB, (int)(sizeof(HC_HAFT_W_SHEMINI_MAGREB)/sizeof(HC_HAFT_W_SHEMINI_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_SHEMINI_ALGERIA, (int)(sizeof(HC_HAFT_W_SHEMINI_ALGERIA)/sizeof(HC_HAFT_W_SHEMINI_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_SHEMINI_MOROCCO, (int)(sizeof(HC_HAFT_W_SHEMINI_MOROCCO)/sizeof(HC_HAFT_W_SHEMINI_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_SHEMINI_FES, (int)(sizeof(HC_HAFT_W_SHEMINI_FES)/sizeof(HC_HAFT_W_SHEMINI_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_SHEMINI_MARRAKESH, (int)(sizeof(HC_HAFT_W_SHEMINI_MARRAKESH)/sizeof(HC_HAFT_W_SHEMINI_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_SHEMINI_TOSHBIM, (int)(sizeof(HC_HAFT_W_SHEMINI_TOSHBIM)/sizeof(HC_HAFT_W_SHEMINI_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_SHEMINI_DJERBA, (int)(sizeof(HC_HAFT_W_SHEMINI_DJERBA)/sizeof(HC_HAFT_W_SHEMINI_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_SHEMINI_BAVLIM, (int)(sizeof(HC_HAFT_W_SHEMINI_BAVLIM)/sizeof(HC_HAFT_W_SHEMINI_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_SHEMINI_TEIMAN, (int)(sizeof(HC_HAFT_W_SHEMINI_TEIMAN)/sizeof(HC_HAFT_W_SHEMINI_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_SHEMINI_BALADI, (int)(sizeof(HC_HAFT_W_SHEMINI_BALADI)/sizeof(HC_HAFT_W_SHEMINI_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_SHEMINI_SHAMI, (int)(sizeof(HC_HAFT_W_SHEMINI_SHAMI)/sizeof(HC_HAFT_W_SHEMINI_SHAMI[0])) } },
    [HC_TAZRIA] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_TAZRIA_ASHKENAZ, (int)(sizeof(HC_HAFT_W_TAZRIA_ASHKENAZ)/sizeof(HC_HAFT_W_TAZRIA_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_TAZRIA_ITALKI, (int)(sizeof(HC_HAFT_W_TAZRIA_ITALKI)/sizeof(HC_HAFT_W_TAZRIA_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_TAZRIA_FRANKFURT, (int)(sizeof(HC_HAFT_W_TAZRIA_FRANKFURT)/sizeof(HC_HAFT_W_TAZRIA_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_TAZRIA_LITA, (int)(sizeof(HC_HAFT_W_TAZRIA_LITA)/sizeof(HC_HAFT_W_TAZRIA_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_TAZRIA_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_TAZRIA_CHAYEY_ODOM)/sizeof(HC_HAFT_W_TAZRIA_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_TAZRIA_HAGRA, (int)(sizeof(HC_HAFT_W_TAZRIA_HAGRA)/sizeof(HC_HAFT_W_TAZRIA_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_TAZRIA_SEFARD, (int)(sizeof(HC_HAFT_W_TAZRIA_SEFARD)/sizeof(HC_HAFT_W_TAZRIA_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_TAZRIA_CHABAD, (int)(sizeof(HC_HAFT_W_TAZRIA_CHABAD)/sizeof(HC_HAFT_W_TAZRIA_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_TAZRIA_MAGREB, (int)(sizeof(HC_HAFT_W_TAZRIA_MAGREB)/sizeof(HC_HAFT_W_TAZRIA_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_TAZRIA_ALGERIA, (int)(sizeof(HC_HAFT_W_TAZRIA_ALGERIA)/sizeof(HC_HAFT_W_TAZRIA_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_TAZRIA_MOROCCO, (int)(sizeof(HC_HAFT_W_TAZRIA_MOROCCO)/sizeof(HC_HAFT_W_TAZRIA_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_TAZRIA_FES, (int)(sizeof(HC_HAFT_W_TAZRIA_FES)/sizeof(HC_HAFT_W_TAZRIA_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_TAZRIA_MARRAKESH, (int)(sizeof(HC_HAFT_W_TAZRIA_MARRAKESH)/sizeof(HC_HAFT_W_TAZRIA_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_TAZRIA_TOSHBIM, (int)(sizeof(HC_HAFT_W_TAZRIA_TOSHBIM)/sizeof(HC_HAFT_W_TAZRIA_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_TAZRIA_DJERBA, (int)(sizeof(HC_HAFT_W_TAZRIA_DJERBA)/sizeof(HC_HAFT_W_TAZRIA_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_TAZRIA_BAVLIM, (int)(sizeof(HC_HAFT_W_TAZRIA_BAVLIM)/sizeof(HC_HAFT_W_TAZRIA_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_TAZRIA_TEIMAN, (int)(sizeof(HC_HAFT_W_TAZRIA_TEIMAN)/sizeof(HC_HAFT_W_TAZRIA_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_TAZRIA_BALADI, (int)(sizeof(HC_HAFT_W_TAZRIA_BALADI)/sizeof(HC_HAFT_W_TAZRIA_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_TAZRIA_SHAMI, (int)(sizeof(HC_HAFT_W_TAZRIA_SHAMI)/sizeof(HC_HAFT_W_TAZRIA_SHAMI[0])) } },
    [HC_METZORA] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_METZORA_ASHKENAZ, (int)(sizeof(HC_HAFT_W_METZORA_ASHKENAZ)/sizeof(HC_HAFT_W_METZORA_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_METZORA_ITALKI, (int)(sizeof(HC_HAFT_W_METZORA_ITALKI)/sizeof(HC_HAFT_W_METZORA_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_METZORA_FRANKFURT, (int)(sizeof(HC_HAFT_W_METZORA_FRANKFURT)/sizeof(HC_HAFT_W_METZORA_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_METZORA_LITA, (int)(sizeof(HC_HAFT_W_METZORA_LITA)/sizeof(HC_HAFT_W_METZORA_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_METZORA_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_METZORA_CHAYEY_ODOM)/sizeof(HC_HAFT_W_METZORA_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_METZORA_HAGRA, (int)(sizeof(HC_HAFT_W_METZORA_HAGRA)/sizeof(HC_HAFT_W_METZORA_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_METZORA_SEFARD, (int)(sizeof(HC_HAFT_W_METZORA_SEFARD)/sizeof(HC_HAFT_W_METZORA_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_METZORA_CHABAD, (int)(sizeof(HC_HAFT_W_METZORA_CHABAD)/sizeof(HC_HAFT_W_METZORA_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_METZORA_MAGREB, (int)(sizeof(HC_HAFT_W_METZORA_MAGREB)/sizeof(HC_HAFT_W_METZORA_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_METZORA_ALGERIA, (int)(sizeof(HC_HAFT_W_METZORA_ALGERIA)/sizeof(HC_HAFT_W_METZORA_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_METZORA_MOROCCO, (int)(sizeof(HC_HAFT_W_METZORA_MOROCCO)/sizeof(HC_HAFT_W_METZORA_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_METZORA_FES, (int)(sizeof(HC_HAFT_W_METZORA_FES)/sizeof(HC_HAFT_W_METZORA_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_METZORA_MARRAKESH, (int)(sizeof(HC_HAFT_W_METZORA_MARRAKESH)/sizeof(HC_HAFT_W_METZORA_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_METZORA_TOSHBIM, (int)(sizeof(HC_HAFT_W_METZORA_TOSHBIM)/sizeof(HC_HAFT_W_METZORA_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_METZORA_DJERBA, (int)(sizeof(HC_HAFT_W_METZORA_DJERBA)/sizeof(HC_HAFT_W_METZORA_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_METZORA_BAVLIM, (int)(sizeof(HC_HAFT_W_METZORA_BAVLIM)/sizeof(HC_HAFT_W_METZORA_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_METZORA_TEIMAN, (int)(sizeof(HC_HAFT_W_METZORA_TEIMAN)/sizeof(HC_HAFT_W_METZORA_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_METZORA_BALADI, (int)(sizeof(HC_HAFT_W_METZORA_BALADI)/sizeof(HC_HAFT_W_METZORA_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_METZORA_SHAMI, (int)(sizeof(HC_HAFT_W_METZORA_SHAMI)/sizeof(HC_HAFT_W_METZORA_SHAMI[0])) } },
    [HC_ACHAREI_MOT] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_ACHAREI_MOT_ASHKENAZ, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_ASHKENAZ)/sizeof(HC_HAFT_W_ACHAREI_MOT_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_ACHAREI_MOT_ITALKI, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_ITALKI)/sizeof(HC_HAFT_W_ACHAREI_MOT_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_ACHAREI_MOT_FRANKFURT, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_FRANKFURT)/sizeof(HC_HAFT_W_ACHAREI_MOT_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_ACHAREI_MOT_LITA, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_LITA)/sizeof(HC_HAFT_W_ACHAREI_MOT_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_ACHAREI_MOT_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_CHAYEY_ODOM)/sizeof(HC_HAFT_W_ACHAREI_MOT_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_ACHAREI_MOT_HAGRA, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_HAGRA)/sizeof(HC_HAFT_W_ACHAREI_MOT_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_ACHAREI_MOT_SEFARD, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_SEFARD)/sizeof(HC_HAFT_W_ACHAREI_MOT_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_ACHAREI_MOT_CHABAD, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_CHABAD)/sizeof(HC_HAFT_W_ACHAREI_MOT_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_ACHAREI_MOT_MAGREB, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_MAGREB)/sizeof(HC_HAFT_W_ACHAREI_MOT_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_ACHAREI_MOT_ALGERIA, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_ALGERIA)/sizeof(HC_HAFT_W_ACHAREI_MOT_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_ACHAREI_MOT_MOROCCO, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_MOROCCO)/sizeof(HC_HAFT_W_ACHAREI_MOT_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_ACHAREI_MOT_FES, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_FES)/sizeof(HC_HAFT_W_ACHAREI_MOT_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_ACHAREI_MOT_MARRAKESH, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_MARRAKESH)/sizeof(HC_HAFT_W_ACHAREI_MOT_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_ACHAREI_MOT_TOSHBIM, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_TOSHBIM)/sizeof(HC_HAFT_W_ACHAREI_MOT_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_ACHAREI_MOT_DJERBA, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_DJERBA)/sizeof(HC_HAFT_W_ACHAREI_MOT_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_ACHAREI_MOT_BAVLIM, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_BAVLIM)/sizeof(HC_HAFT_W_ACHAREI_MOT_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_ACHAREI_MOT_TEIMAN, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_TEIMAN)/sizeof(HC_HAFT_W_ACHAREI_MOT_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_ACHAREI_MOT_BALADI, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_BALADI)/sizeof(HC_HAFT_W_ACHAREI_MOT_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_ACHAREI_MOT_SHAMI, (int)(sizeof(HC_HAFT_W_ACHAREI_MOT_SHAMI)/sizeof(HC_HAFT_W_ACHAREI_MOT_SHAMI[0])) } },
    [HC_KEDOSHIM] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_KEDOSHIM_ASHKENAZ, (int)(sizeof(HC_HAFT_W_KEDOSHIM_ASHKENAZ)/sizeof(HC_HAFT_W_KEDOSHIM_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_KEDOSHIM_ITALKI, (int)(sizeof(HC_HAFT_W_KEDOSHIM_ITALKI)/sizeof(HC_HAFT_W_KEDOSHIM_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_KEDOSHIM_FRANKFURT, (int)(sizeof(HC_HAFT_W_KEDOSHIM_FRANKFURT)/sizeof(HC_HAFT_W_KEDOSHIM_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_KEDOSHIM_LITA, (int)(sizeof(HC_HAFT_W_KEDOSHIM_LITA)/sizeof(HC_HAFT_W_KEDOSHIM_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_KEDOSHIM_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_KEDOSHIM_CHAYEY_ODOM)/sizeof(HC_HAFT_W_KEDOSHIM_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_KEDOSHIM_HAGRA, (int)(sizeof(HC_HAFT_W_KEDOSHIM_HAGRA)/sizeof(HC_HAFT_W_KEDOSHIM_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_KEDOSHIM_SEFARD, (int)(sizeof(HC_HAFT_W_KEDOSHIM_SEFARD)/sizeof(HC_HAFT_W_KEDOSHIM_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_KEDOSHIM_CHABAD, (int)(sizeof(HC_HAFT_W_KEDOSHIM_CHABAD)/sizeof(HC_HAFT_W_KEDOSHIM_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_KEDOSHIM_MAGREB, (int)(sizeof(HC_HAFT_W_KEDOSHIM_MAGREB)/sizeof(HC_HAFT_W_KEDOSHIM_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_KEDOSHIM_ALGERIA, (int)(sizeof(HC_HAFT_W_KEDOSHIM_ALGERIA)/sizeof(HC_HAFT_W_KEDOSHIM_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_KEDOSHIM_MOROCCO, (int)(sizeof(HC_HAFT_W_KEDOSHIM_MOROCCO)/sizeof(HC_HAFT_W_KEDOSHIM_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_KEDOSHIM_FES, (int)(sizeof(HC_HAFT_W_KEDOSHIM_FES)/sizeof(HC_HAFT_W_KEDOSHIM_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_KEDOSHIM_MARRAKESH, (int)(sizeof(HC_HAFT_W_KEDOSHIM_MARRAKESH)/sizeof(HC_HAFT_W_KEDOSHIM_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_KEDOSHIM_TOSHBIM, (int)(sizeof(HC_HAFT_W_KEDOSHIM_TOSHBIM)/sizeof(HC_HAFT_W_KEDOSHIM_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_KEDOSHIM_DJERBA, (int)(sizeof(HC_HAFT_W_KEDOSHIM_DJERBA)/sizeof(HC_HAFT_W_KEDOSHIM_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_KEDOSHIM_BAVLIM, (int)(sizeof(HC_HAFT_W_KEDOSHIM_BAVLIM)/sizeof(HC_HAFT_W_KEDOSHIM_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_KEDOSHIM_TEIMAN, (int)(sizeof(HC_HAFT_W_KEDOSHIM_TEIMAN)/sizeof(HC_HAFT_W_KEDOSHIM_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_KEDOSHIM_BALADI, (int)(sizeof(HC_HAFT_W_KEDOSHIM_BALADI)/sizeof(HC_HAFT_W_KEDOSHIM_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_KEDOSHIM_SHAMI, (int)(sizeof(HC_HAFT_W_KEDOSHIM_SHAMI)/sizeof(HC_HAFT_W_KEDOSHIM_SHAMI[0])) } },
    [HC_EMOR] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_EMOR_ASHKENAZ, (int)(sizeof(HC_HAFT_W_EMOR_ASHKENAZ)/sizeof(HC_HAFT_W_EMOR_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_EMOR_ITALKI, (int)(sizeof(HC_HAFT_W_EMOR_ITALKI)/sizeof(HC_HAFT_W_EMOR_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_EMOR_FRANKFURT, (int)(sizeof(HC_HAFT_W_EMOR_FRANKFURT)/sizeof(HC_HAFT_W_EMOR_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_EMOR_LITA, (int)(sizeof(HC_HAFT_W_EMOR_LITA)/sizeof(HC_HAFT_W_EMOR_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_EMOR_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_EMOR_CHAYEY_ODOM)/sizeof(HC_HAFT_W_EMOR_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_EMOR_HAGRA, (int)(sizeof(HC_HAFT_W_EMOR_HAGRA)/sizeof(HC_HAFT_W_EMOR_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_EMOR_SEFARD, (int)(sizeof(HC_HAFT_W_EMOR_SEFARD)/sizeof(HC_HAFT_W_EMOR_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_EMOR_CHABAD, (int)(sizeof(HC_HAFT_W_EMOR_CHABAD)/sizeof(HC_HAFT_W_EMOR_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_EMOR_MAGREB, (int)(sizeof(HC_HAFT_W_EMOR_MAGREB)/sizeof(HC_HAFT_W_EMOR_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_EMOR_ALGERIA, (int)(sizeof(HC_HAFT_W_EMOR_ALGERIA)/sizeof(HC_HAFT_W_EMOR_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_EMOR_MOROCCO, (int)(sizeof(HC_HAFT_W_EMOR_MOROCCO)/sizeof(HC_HAFT_W_EMOR_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_EMOR_FES, (int)(sizeof(HC_HAFT_W_EMOR_FES)/sizeof(HC_HAFT_W_EMOR_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_EMOR_MARRAKESH, (int)(sizeof(HC_HAFT_W_EMOR_MARRAKESH)/sizeof(HC_HAFT_W_EMOR_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_EMOR_TOSHBIM, (int)(sizeof(HC_HAFT_W_EMOR_TOSHBIM)/sizeof(HC_HAFT_W_EMOR_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_EMOR_DJERBA, (int)(sizeof(HC_HAFT_W_EMOR_DJERBA)/sizeof(HC_HAFT_W_EMOR_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_EMOR_BAVLIM, (int)(sizeof(HC_HAFT_W_EMOR_BAVLIM)/sizeof(HC_HAFT_W_EMOR_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_EMOR_TEIMAN, (int)(sizeof(HC_HAFT_W_EMOR_TEIMAN)/sizeof(HC_HAFT_W_EMOR_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_EMOR_BALADI, (int)(sizeof(HC_HAFT_W_EMOR_BALADI)/sizeof(HC_HAFT_W_EMOR_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_EMOR_SHAMI, (int)(sizeof(HC_HAFT_W_EMOR_SHAMI)/sizeof(HC_HAFT_W_EMOR_SHAMI[0])) } },
    [HC_BEHAR] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_BEHAR_ASHKENAZ, (int)(sizeof(HC_HAFT_W_BEHAR_ASHKENAZ)/sizeof(HC_HAFT_W_BEHAR_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_BEHAR_ITALKI, (int)(sizeof(HC_HAFT_W_BEHAR_ITALKI)/sizeof(HC_HAFT_W_BEHAR_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_BEHAR_FRANKFURT, (int)(sizeof(HC_HAFT_W_BEHAR_FRANKFURT)/sizeof(HC_HAFT_W_BEHAR_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_BEHAR_LITA, (int)(sizeof(HC_HAFT_W_BEHAR_LITA)/sizeof(HC_HAFT_W_BEHAR_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_BEHAR_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_BEHAR_CHAYEY_ODOM)/sizeof(HC_HAFT_W_BEHAR_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_BEHAR_HAGRA, (int)(sizeof(HC_HAFT_W_BEHAR_HAGRA)/sizeof(HC_HAFT_W_BEHAR_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_BEHAR_SEFARD, (int)(sizeof(HC_HAFT_W_BEHAR_SEFARD)/sizeof(HC_HAFT_W_BEHAR_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_BEHAR_CHABAD, (int)(sizeof(HC_HAFT_W_BEHAR_CHABAD)/sizeof(HC_HAFT_W_BEHAR_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_BEHAR_MAGREB, (int)(sizeof(HC_HAFT_W_BEHAR_MAGREB)/sizeof(HC_HAFT_W_BEHAR_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_BEHAR_ALGERIA, (int)(sizeof(HC_HAFT_W_BEHAR_ALGERIA)/sizeof(HC_HAFT_W_BEHAR_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_BEHAR_MOROCCO, (int)(sizeof(HC_HAFT_W_BEHAR_MOROCCO)/sizeof(HC_HAFT_W_BEHAR_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_BEHAR_FES, (int)(sizeof(HC_HAFT_W_BEHAR_FES)/sizeof(HC_HAFT_W_BEHAR_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_BEHAR_MARRAKESH, (int)(sizeof(HC_HAFT_W_BEHAR_MARRAKESH)/sizeof(HC_HAFT_W_BEHAR_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_BEHAR_TOSHBIM, (int)(sizeof(HC_HAFT_W_BEHAR_TOSHBIM)/sizeof(HC_HAFT_W_BEHAR_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_BEHAR_DJERBA, (int)(sizeof(HC_HAFT_W_BEHAR_DJERBA)/sizeof(HC_HAFT_W_BEHAR_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_BEHAR_BAVLIM, (int)(sizeof(HC_HAFT_W_BEHAR_BAVLIM)/sizeof(HC_HAFT_W_BEHAR_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_BEHAR_TEIMAN, (int)(sizeof(HC_HAFT_W_BEHAR_TEIMAN)/sizeof(HC_HAFT_W_BEHAR_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_BEHAR_BALADI, (int)(sizeof(HC_HAFT_W_BEHAR_BALADI)/sizeof(HC_HAFT_W_BEHAR_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_BEHAR_SHAMI, (int)(sizeof(HC_HAFT_W_BEHAR_SHAMI)/sizeof(HC_HAFT_W_BEHAR_SHAMI[0])) } },
    [HC_BECHUKOTAI] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_BECHUKOTAI_ASHKENAZ, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_ASHKENAZ)/sizeof(HC_HAFT_W_BECHUKOTAI_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_BECHUKOTAI_ITALKI, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_ITALKI)/sizeof(HC_HAFT_W_BECHUKOTAI_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_BECHUKOTAI_FRANKFURT, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_FRANKFURT)/sizeof(HC_HAFT_W_BECHUKOTAI_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_BECHUKOTAI_LITA, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_LITA)/sizeof(HC_HAFT_W_BECHUKOTAI_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_BECHUKOTAI_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_CHAYEY_ODOM)/sizeof(HC_HAFT_W_BECHUKOTAI_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_BECHUKOTAI_HAGRA, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_HAGRA)/sizeof(HC_HAFT_W_BECHUKOTAI_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_BECHUKOTAI_SEFARD, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_SEFARD)/sizeof(HC_HAFT_W_BECHUKOTAI_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_BECHUKOTAI_CHABAD, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_CHABAD)/sizeof(HC_HAFT_W_BECHUKOTAI_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_BECHUKOTAI_MAGREB, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_MAGREB)/sizeof(HC_HAFT_W_BECHUKOTAI_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_BECHUKOTAI_ALGERIA, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_ALGERIA)/sizeof(HC_HAFT_W_BECHUKOTAI_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_BECHUKOTAI_MOROCCO, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_MOROCCO)/sizeof(HC_HAFT_W_BECHUKOTAI_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_BECHUKOTAI_FES, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_FES)/sizeof(HC_HAFT_W_BECHUKOTAI_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_BECHUKOTAI_MARRAKESH, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_MARRAKESH)/sizeof(HC_HAFT_W_BECHUKOTAI_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_BECHUKOTAI_TOSHBIM, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_TOSHBIM)/sizeof(HC_HAFT_W_BECHUKOTAI_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_BECHUKOTAI_DJERBA, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_DJERBA)/sizeof(HC_HAFT_W_BECHUKOTAI_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_BECHUKOTAI_BAVLIM, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_BAVLIM)/sizeof(HC_HAFT_W_BECHUKOTAI_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_BECHUKOTAI_TEIMAN, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_TEIMAN)/sizeof(HC_HAFT_W_BECHUKOTAI_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_BECHUKOTAI_BALADI, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_BALADI)/sizeof(HC_HAFT_W_BECHUKOTAI_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_BECHUKOTAI_SHAMI, (int)(sizeof(HC_HAFT_W_BECHUKOTAI_SHAMI)/sizeof(HC_HAFT_W_BECHUKOTAI_SHAMI[0])) } },
    [HC_BAMIDBAR] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_BAMIDBAR_ASHKENAZ, (int)(sizeof(HC_HAFT_W_BAMIDBAR_ASHKENAZ)/sizeof(HC_HAFT_W_BAMIDBAR_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_BAMIDBAR_ITALKI, (int)(sizeof(HC_HAFT_W_BAMIDBAR_ITALKI)/sizeof(HC_HAFT_W_BAMIDBAR_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_BAMIDBAR_FRANKFURT, (int)(sizeof(HC_HAFT_W_BAMIDBAR_FRANKFURT)/sizeof(HC_HAFT_W_BAMIDBAR_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_BAMIDBAR_LITA, (int)(sizeof(HC_HAFT_W_BAMIDBAR_LITA)/sizeof(HC_HAFT_W_BAMIDBAR_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_BAMIDBAR_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_BAMIDBAR_CHAYEY_ODOM)/sizeof(HC_HAFT_W_BAMIDBAR_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_BAMIDBAR_HAGRA, (int)(sizeof(HC_HAFT_W_BAMIDBAR_HAGRA)/sizeof(HC_HAFT_W_BAMIDBAR_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_BAMIDBAR_SEFARD, (int)(sizeof(HC_HAFT_W_BAMIDBAR_SEFARD)/sizeof(HC_HAFT_W_BAMIDBAR_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_BAMIDBAR_CHABAD, (int)(sizeof(HC_HAFT_W_BAMIDBAR_CHABAD)/sizeof(HC_HAFT_W_BAMIDBAR_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_BAMIDBAR_MAGREB, (int)(sizeof(HC_HAFT_W_BAMIDBAR_MAGREB)/sizeof(HC_HAFT_W_BAMIDBAR_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_BAMIDBAR_ALGERIA, (int)(sizeof(HC_HAFT_W_BAMIDBAR_ALGERIA)/sizeof(HC_HAFT_W_BAMIDBAR_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_BAMIDBAR_MOROCCO, (int)(sizeof(HC_HAFT_W_BAMIDBAR_MOROCCO)/sizeof(HC_HAFT_W_BAMIDBAR_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_BAMIDBAR_FES, (int)(sizeof(HC_HAFT_W_BAMIDBAR_FES)/sizeof(HC_HAFT_W_BAMIDBAR_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_BAMIDBAR_MARRAKESH, (int)(sizeof(HC_HAFT_W_BAMIDBAR_MARRAKESH)/sizeof(HC_HAFT_W_BAMIDBAR_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_BAMIDBAR_TOSHBIM, (int)(sizeof(HC_HAFT_W_BAMIDBAR_TOSHBIM)/sizeof(HC_HAFT_W_BAMIDBAR_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_BAMIDBAR_DJERBA, (int)(sizeof(HC_HAFT_W_BAMIDBAR_DJERBA)/sizeof(HC_HAFT_W_BAMIDBAR_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_BAMIDBAR_BAVLIM, (int)(sizeof(HC_HAFT_W_BAMIDBAR_BAVLIM)/sizeof(HC_HAFT_W_BAMIDBAR_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_BAMIDBAR_TEIMAN, (int)(sizeof(HC_HAFT_W_BAMIDBAR_TEIMAN)/sizeof(HC_HAFT_W_BAMIDBAR_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_BAMIDBAR_BALADI, (int)(sizeof(HC_HAFT_W_BAMIDBAR_BALADI)/sizeof(HC_HAFT_W_BAMIDBAR_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_BAMIDBAR_SHAMI, (int)(sizeof(HC_HAFT_W_BAMIDBAR_SHAMI)/sizeof(HC_HAFT_W_BAMIDBAR_SHAMI[0])) } },
    [HC_NASO] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_NASO_ASHKENAZ, (int)(sizeof(HC_HAFT_W_NASO_ASHKENAZ)/sizeof(HC_HAFT_W_NASO_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_NASO_ITALKI, (int)(sizeof(HC_HAFT_W_NASO_ITALKI)/sizeof(HC_HAFT_W_NASO_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_NASO_FRANKFURT, (int)(sizeof(HC_HAFT_W_NASO_FRANKFURT)/sizeof(HC_HAFT_W_NASO_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_NASO_LITA, (int)(sizeof(HC_HAFT_W_NASO_LITA)/sizeof(HC_HAFT_W_NASO_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_NASO_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_NASO_CHAYEY_ODOM)/sizeof(HC_HAFT_W_NASO_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_NASO_HAGRA, (int)(sizeof(HC_HAFT_W_NASO_HAGRA)/sizeof(HC_HAFT_W_NASO_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_NASO_SEFARD, (int)(sizeof(HC_HAFT_W_NASO_SEFARD)/sizeof(HC_HAFT_W_NASO_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_NASO_CHABAD, (int)(sizeof(HC_HAFT_W_NASO_CHABAD)/sizeof(HC_HAFT_W_NASO_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_NASO_MAGREB, (int)(sizeof(HC_HAFT_W_NASO_MAGREB)/sizeof(HC_HAFT_W_NASO_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_NASO_ALGERIA, (int)(sizeof(HC_HAFT_W_NASO_ALGERIA)/sizeof(HC_HAFT_W_NASO_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_NASO_MOROCCO, (int)(sizeof(HC_HAFT_W_NASO_MOROCCO)/sizeof(HC_HAFT_W_NASO_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_NASO_FES, (int)(sizeof(HC_HAFT_W_NASO_FES)/sizeof(HC_HAFT_W_NASO_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_NASO_MARRAKESH, (int)(sizeof(HC_HAFT_W_NASO_MARRAKESH)/sizeof(HC_HAFT_W_NASO_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_NASO_TOSHBIM, (int)(sizeof(HC_HAFT_W_NASO_TOSHBIM)/sizeof(HC_HAFT_W_NASO_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_NASO_DJERBA, (int)(sizeof(HC_HAFT_W_NASO_DJERBA)/sizeof(HC_HAFT_W_NASO_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_NASO_BAVLIM, (int)(sizeof(HC_HAFT_W_NASO_BAVLIM)/sizeof(HC_HAFT_W_NASO_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_NASO_TEIMAN, (int)(sizeof(HC_HAFT_W_NASO_TEIMAN)/sizeof(HC_HAFT_W_NASO_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_NASO_BALADI, (int)(sizeof(HC_HAFT_W_NASO_BALADI)/sizeof(HC_HAFT_W_NASO_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_NASO_SHAMI, (int)(sizeof(HC_HAFT_W_NASO_SHAMI)/sizeof(HC_HAFT_W_NASO_SHAMI[0])) } },
    [HC_BEHAALOTECHA] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_BEHAALOTECHA_ASHKENAZ, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_ASHKENAZ)/sizeof(HC_HAFT_W_BEHAALOTECHA_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_BEHAALOTECHA_ITALKI, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_ITALKI)/sizeof(HC_HAFT_W_BEHAALOTECHA_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_BEHAALOTECHA_FRANKFURT, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_FRANKFURT)/sizeof(HC_HAFT_W_BEHAALOTECHA_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_BEHAALOTECHA_LITA, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_LITA)/sizeof(HC_HAFT_W_BEHAALOTECHA_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_BEHAALOTECHA_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_CHAYEY_ODOM)/sizeof(HC_HAFT_W_BEHAALOTECHA_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_BEHAALOTECHA_HAGRA, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_HAGRA)/sizeof(HC_HAFT_W_BEHAALOTECHA_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_BEHAALOTECHA_SEFARD, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_SEFARD)/sizeof(HC_HAFT_W_BEHAALOTECHA_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_BEHAALOTECHA_CHABAD, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_CHABAD)/sizeof(HC_HAFT_W_BEHAALOTECHA_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_BEHAALOTECHA_MAGREB, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_MAGREB)/sizeof(HC_HAFT_W_BEHAALOTECHA_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_BEHAALOTECHA_ALGERIA, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_ALGERIA)/sizeof(HC_HAFT_W_BEHAALOTECHA_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_BEHAALOTECHA_MOROCCO, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_MOROCCO)/sizeof(HC_HAFT_W_BEHAALOTECHA_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_BEHAALOTECHA_FES, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_FES)/sizeof(HC_HAFT_W_BEHAALOTECHA_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_BEHAALOTECHA_MARRAKESH, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_MARRAKESH)/sizeof(HC_HAFT_W_BEHAALOTECHA_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_BEHAALOTECHA_TOSHBIM, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_TOSHBIM)/sizeof(HC_HAFT_W_BEHAALOTECHA_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_BEHAALOTECHA_DJERBA, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_DJERBA)/sizeof(HC_HAFT_W_BEHAALOTECHA_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_BEHAALOTECHA_BAVLIM, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_BAVLIM)/sizeof(HC_HAFT_W_BEHAALOTECHA_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_BEHAALOTECHA_TEIMAN, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_TEIMAN)/sizeof(HC_HAFT_W_BEHAALOTECHA_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_BEHAALOTECHA_BALADI, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_BALADI)/sizeof(HC_HAFT_W_BEHAALOTECHA_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_BEHAALOTECHA_SHAMI, (int)(sizeof(HC_HAFT_W_BEHAALOTECHA_SHAMI)/sizeof(HC_HAFT_W_BEHAALOTECHA_SHAMI[0])) } },
    [HC_SHELACH] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_SHELACH_ASHKENAZ, (int)(sizeof(HC_HAFT_W_SHELACH_ASHKENAZ)/sizeof(HC_HAFT_W_SHELACH_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_SHELACH_ITALKI, (int)(sizeof(HC_HAFT_W_SHELACH_ITALKI)/sizeof(HC_HAFT_W_SHELACH_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_SHELACH_FRANKFURT, (int)(sizeof(HC_HAFT_W_SHELACH_FRANKFURT)/sizeof(HC_HAFT_W_SHELACH_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_SHELACH_LITA, (int)(sizeof(HC_HAFT_W_SHELACH_LITA)/sizeof(HC_HAFT_W_SHELACH_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_SHELACH_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_SHELACH_CHAYEY_ODOM)/sizeof(HC_HAFT_W_SHELACH_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_SHELACH_HAGRA, (int)(sizeof(HC_HAFT_W_SHELACH_HAGRA)/sizeof(HC_HAFT_W_SHELACH_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_SHELACH_SEFARD, (int)(sizeof(HC_HAFT_W_SHELACH_SEFARD)/sizeof(HC_HAFT_W_SHELACH_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_SHELACH_CHABAD, (int)(sizeof(HC_HAFT_W_SHELACH_CHABAD)/sizeof(HC_HAFT_W_SHELACH_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_SHELACH_MAGREB, (int)(sizeof(HC_HAFT_W_SHELACH_MAGREB)/sizeof(HC_HAFT_W_SHELACH_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_SHELACH_ALGERIA, (int)(sizeof(HC_HAFT_W_SHELACH_ALGERIA)/sizeof(HC_HAFT_W_SHELACH_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_SHELACH_MOROCCO, (int)(sizeof(HC_HAFT_W_SHELACH_MOROCCO)/sizeof(HC_HAFT_W_SHELACH_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_SHELACH_FES, (int)(sizeof(HC_HAFT_W_SHELACH_FES)/sizeof(HC_HAFT_W_SHELACH_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_SHELACH_MARRAKESH, (int)(sizeof(HC_HAFT_W_SHELACH_MARRAKESH)/sizeof(HC_HAFT_W_SHELACH_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_SHELACH_TOSHBIM, (int)(sizeof(HC_HAFT_W_SHELACH_TOSHBIM)/sizeof(HC_HAFT_W_SHELACH_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_SHELACH_DJERBA, (int)(sizeof(HC_HAFT_W_SHELACH_DJERBA)/sizeof(HC_HAFT_W_SHELACH_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_SHELACH_BAVLIM, (int)(sizeof(HC_HAFT_W_SHELACH_BAVLIM)/sizeof(HC_HAFT_W_SHELACH_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_SHELACH_TEIMAN, (int)(sizeof(HC_HAFT_W_SHELACH_TEIMAN)/sizeof(HC_HAFT_W_SHELACH_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_SHELACH_BALADI, (int)(sizeof(HC_HAFT_W_SHELACH_BALADI)/sizeof(HC_HAFT_W_SHELACH_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_SHELACH_SHAMI, (int)(sizeof(HC_HAFT_W_SHELACH_SHAMI)/sizeof(HC_HAFT_W_SHELACH_SHAMI[0])) } },
    [HC_KORACH] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_KORACH_ASHKENAZ, (int)(sizeof(HC_HAFT_W_KORACH_ASHKENAZ)/sizeof(HC_HAFT_W_KORACH_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_KORACH_ITALKI, (int)(sizeof(HC_HAFT_W_KORACH_ITALKI)/sizeof(HC_HAFT_W_KORACH_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_KORACH_FRANKFURT, (int)(sizeof(HC_HAFT_W_KORACH_FRANKFURT)/sizeof(HC_HAFT_W_KORACH_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_KORACH_LITA, (int)(sizeof(HC_HAFT_W_KORACH_LITA)/sizeof(HC_HAFT_W_KORACH_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_KORACH_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_KORACH_CHAYEY_ODOM)/sizeof(HC_HAFT_W_KORACH_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_KORACH_HAGRA, (int)(sizeof(HC_HAFT_W_KORACH_HAGRA)/sizeof(HC_HAFT_W_KORACH_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_KORACH_SEFARD, (int)(sizeof(HC_HAFT_W_KORACH_SEFARD)/sizeof(HC_HAFT_W_KORACH_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_KORACH_CHABAD, (int)(sizeof(HC_HAFT_W_KORACH_CHABAD)/sizeof(HC_HAFT_W_KORACH_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_KORACH_MAGREB, (int)(sizeof(HC_HAFT_W_KORACH_MAGREB)/sizeof(HC_HAFT_W_KORACH_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_KORACH_ALGERIA, (int)(sizeof(HC_HAFT_W_KORACH_ALGERIA)/sizeof(HC_HAFT_W_KORACH_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_KORACH_MOROCCO, (int)(sizeof(HC_HAFT_W_KORACH_MOROCCO)/sizeof(HC_HAFT_W_KORACH_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_KORACH_FES, (int)(sizeof(HC_HAFT_W_KORACH_FES)/sizeof(HC_HAFT_W_KORACH_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_KORACH_MARRAKESH, (int)(sizeof(HC_HAFT_W_KORACH_MARRAKESH)/sizeof(HC_HAFT_W_KORACH_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_KORACH_TOSHBIM, (int)(sizeof(HC_HAFT_W_KORACH_TOSHBIM)/sizeof(HC_HAFT_W_KORACH_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_KORACH_DJERBA, (int)(sizeof(HC_HAFT_W_KORACH_DJERBA)/sizeof(HC_HAFT_W_KORACH_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_KORACH_BAVLIM, (int)(sizeof(HC_HAFT_W_KORACH_BAVLIM)/sizeof(HC_HAFT_W_KORACH_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_KORACH_TEIMAN, (int)(sizeof(HC_HAFT_W_KORACH_TEIMAN)/sizeof(HC_HAFT_W_KORACH_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_KORACH_BALADI, (int)(sizeof(HC_HAFT_W_KORACH_BALADI)/sizeof(HC_HAFT_W_KORACH_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_KORACH_SHAMI, (int)(sizeof(HC_HAFT_W_KORACH_SHAMI)/sizeof(HC_HAFT_W_KORACH_SHAMI[0])) } },
    [HC_CHUKAT] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_CHUKAT_ASHKENAZ, (int)(sizeof(HC_HAFT_W_CHUKAT_ASHKENAZ)/sizeof(HC_HAFT_W_CHUKAT_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_CHUKAT_ITALKI, (int)(sizeof(HC_HAFT_W_CHUKAT_ITALKI)/sizeof(HC_HAFT_W_CHUKAT_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_CHUKAT_FRANKFURT, (int)(sizeof(HC_HAFT_W_CHUKAT_FRANKFURT)/sizeof(HC_HAFT_W_CHUKAT_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_CHUKAT_LITA, (int)(sizeof(HC_HAFT_W_CHUKAT_LITA)/sizeof(HC_HAFT_W_CHUKAT_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_CHUKAT_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_CHUKAT_CHAYEY_ODOM)/sizeof(HC_HAFT_W_CHUKAT_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_CHUKAT_HAGRA, (int)(sizeof(HC_HAFT_W_CHUKAT_HAGRA)/sizeof(HC_HAFT_W_CHUKAT_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_CHUKAT_SEFARD, (int)(sizeof(HC_HAFT_W_CHUKAT_SEFARD)/sizeof(HC_HAFT_W_CHUKAT_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_CHUKAT_CHABAD, (int)(sizeof(HC_HAFT_W_CHUKAT_CHABAD)/sizeof(HC_HAFT_W_CHUKAT_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_CHUKAT_MAGREB, (int)(sizeof(HC_HAFT_W_CHUKAT_MAGREB)/sizeof(HC_HAFT_W_CHUKAT_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_CHUKAT_ALGERIA, (int)(sizeof(HC_HAFT_W_CHUKAT_ALGERIA)/sizeof(HC_HAFT_W_CHUKAT_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_CHUKAT_MOROCCO, (int)(sizeof(HC_HAFT_W_CHUKAT_MOROCCO)/sizeof(HC_HAFT_W_CHUKAT_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_CHUKAT_FES, (int)(sizeof(HC_HAFT_W_CHUKAT_FES)/sizeof(HC_HAFT_W_CHUKAT_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_CHUKAT_MARRAKESH, (int)(sizeof(HC_HAFT_W_CHUKAT_MARRAKESH)/sizeof(HC_HAFT_W_CHUKAT_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_CHUKAT_TOSHBIM, (int)(sizeof(HC_HAFT_W_CHUKAT_TOSHBIM)/sizeof(HC_HAFT_W_CHUKAT_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_CHUKAT_DJERBA, (int)(sizeof(HC_HAFT_W_CHUKAT_DJERBA)/sizeof(HC_HAFT_W_CHUKAT_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_CHUKAT_BAVLIM, (int)(sizeof(HC_HAFT_W_CHUKAT_BAVLIM)/sizeof(HC_HAFT_W_CHUKAT_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_CHUKAT_TEIMAN, (int)(sizeof(HC_HAFT_W_CHUKAT_TEIMAN)/sizeof(HC_HAFT_W_CHUKAT_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_CHUKAT_BALADI, (int)(sizeof(HC_HAFT_W_CHUKAT_BALADI)/sizeof(HC_HAFT_W_CHUKAT_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_CHUKAT_SHAMI, (int)(sizeof(HC_HAFT_W_CHUKAT_SHAMI)/sizeof(HC_HAFT_W_CHUKAT_SHAMI[0])) } },
    [HC_BALAK] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_BALAK_ASHKENAZ, (int)(sizeof(HC_HAFT_W_BALAK_ASHKENAZ)/sizeof(HC_HAFT_W_BALAK_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_BALAK_ITALKI, (int)(sizeof(HC_HAFT_W_BALAK_ITALKI)/sizeof(HC_HAFT_W_BALAK_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_BALAK_FRANKFURT, (int)(sizeof(HC_HAFT_W_BALAK_FRANKFURT)/sizeof(HC_HAFT_W_BALAK_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_BALAK_LITA, (int)(sizeof(HC_HAFT_W_BALAK_LITA)/sizeof(HC_HAFT_W_BALAK_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_BALAK_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_BALAK_CHAYEY_ODOM)/sizeof(HC_HAFT_W_BALAK_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_BALAK_HAGRA, (int)(sizeof(HC_HAFT_W_BALAK_HAGRA)/sizeof(HC_HAFT_W_BALAK_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_BALAK_SEFARD, (int)(sizeof(HC_HAFT_W_BALAK_SEFARD)/sizeof(HC_HAFT_W_BALAK_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_BALAK_CHABAD, (int)(sizeof(HC_HAFT_W_BALAK_CHABAD)/sizeof(HC_HAFT_W_BALAK_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_BALAK_MAGREB, (int)(sizeof(HC_HAFT_W_BALAK_MAGREB)/sizeof(HC_HAFT_W_BALAK_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_BALAK_ALGERIA, (int)(sizeof(HC_HAFT_W_BALAK_ALGERIA)/sizeof(HC_HAFT_W_BALAK_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_BALAK_MOROCCO, (int)(sizeof(HC_HAFT_W_BALAK_MOROCCO)/sizeof(HC_HAFT_W_BALAK_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_BALAK_FES, (int)(sizeof(HC_HAFT_W_BALAK_FES)/sizeof(HC_HAFT_W_BALAK_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_BALAK_MARRAKESH, (int)(sizeof(HC_HAFT_W_BALAK_MARRAKESH)/sizeof(HC_HAFT_W_BALAK_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_BALAK_TOSHBIM, (int)(sizeof(HC_HAFT_W_BALAK_TOSHBIM)/sizeof(HC_HAFT_W_BALAK_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_BALAK_DJERBA, (int)(sizeof(HC_HAFT_W_BALAK_DJERBA)/sizeof(HC_HAFT_W_BALAK_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_BALAK_BAVLIM, (int)(sizeof(HC_HAFT_W_BALAK_BAVLIM)/sizeof(HC_HAFT_W_BALAK_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_BALAK_TEIMAN, (int)(sizeof(HC_HAFT_W_BALAK_TEIMAN)/sizeof(HC_HAFT_W_BALAK_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_BALAK_BALADI, (int)(sizeof(HC_HAFT_W_BALAK_BALADI)/sizeof(HC_HAFT_W_BALAK_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_BALAK_SHAMI, (int)(sizeof(HC_HAFT_W_BALAK_SHAMI)/sizeof(HC_HAFT_W_BALAK_SHAMI[0])) } },
    [HC_PINCHAS] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_PINCHAS_ASHKENAZ, (int)(sizeof(HC_HAFT_W_PINCHAS_ASHKENAZ)/sizeof(HC_HAFT_W_PINCHAS_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_PINCHAS_ITALKI, (int)(sizeof(HC_HAFT_W_PINCHAS_ITALKI)/sizeof(HC_HAFT_W_PINCHAS_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_PINCHAS_FRANKFURT, (int)(sizeof(HC_HAFT_W_PINCHAS_FRANKFURT)/sizeof(HC_HAFT_W_PINCHAS_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_PINCHAS_LITA, (int)(sizeof(HC_HAFT_W_PINCHAS_LITA)/sizeof(HC_HAFT_W_PINCHAS_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_PINCHAS_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_PINCHAS_CHAYEY_ODOM)/sizeof(HC_HAFT_W_PINCHAS_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_PINCHAS_HAGRA, (int)(sizeof(HC_HAFT_W_PINCHAS_HAGRA)/sizeof(HC_HAFT_W_PINCHAS_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_PINCHAS_SEFARD, (int)(sizeof(HC_HAFT_W_PINCHAS_SEFARD)/sizeof(HC_HAFT_W_PINCHAS_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_PINCHAS_CHABAD, (int)(sizeof(HC_HAFT_W_PINCHAS_CHABAD)/sizeof(HC_HAFT_W_PINCHAS_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_PINCHAS_MAGREB, (int)(sizeof(HC_HAFT_W_PINCHAS_MAGREB)/sizeof(HC_HAFT_W_PINCHAS_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_PINCHAS_ALGERIA, (int)(sizeof(HC_HAFT_W_PINCHAS_ALGERIA)/sizeof(HC_HAFT_W_PINCHAS_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_PINCHAS_MOROCCO, (int)(sizeof(HC_HAFT_W_PINCHAS_MOROCCO)/sizeof(HC_HAFT_W_PINCHAS_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_PINCHAS_FES, (int)(sizeof(HC_HAFT_W_PINCHAS_FES)/sizeof(HC_HAFT_W_PINCHAS_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_PINCHAS_MARRAKESH, (int)(sizeof(HC_HAFT_W_PINCHAS_MARRAKESH)/sizeof(HC_HAFT_W_PINCHAS_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_PINCHAS_TOSHBIM, (int)(sizeof(HC_HAFT_W_PINCHAS_TOSHBIM)/sizeof(HC_HAFT_W_PINCHAS_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_PINCHAS_DJERBA, (int)(sizeof(HC_HAFT_W_PINCHAS_DJERBA)/sizeof(HC_HAFT_W_PINCHAS_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_PINCHAS_BAVLIM, (int)(sizeof(HC_HAFT_W_PINCHAS_BAVLIM)/sizeof(HC_HAFT_W_PINCHAS_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_PINCHAS_TEIMAN, (int)(sizeof(HC_HAFT_W_PINCHAS_TEIMAN)/sizeof(HC_HAFT_W_PINCHAS_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_PINCHAS_BALADI, (int)(sizeof(HC_HAFT_W_PINCHAS_BALADI)/sizeof(HC_HAFT_W_PINCHAS_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_PINCHAS_SHAMI, (int)(sizeof(HC_HAFT_W_PINCHAS_SHAMI)/sizeof(HC_HAFT_W_PINCHAS_SHAMI[0])) } },
    [HC_MATOT] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_MATOT_ASHKENAZ, (int)(sizeof(HC_HAFT_W_MATOT_ASHKENAZ)/sizeof(HC_HAFT_W_MATOT_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_MATOT_ITALKI, (int)(sizeof(HC_HAFT_W_MATOT_ITALKI)/sizeof(HC_HAFT_W_MATOT_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_MATOT_FRANKFURT, (int)(sizeof(HC_HAFT_W_MATOT_FRANKFURT)/sizeof(HC_HAFT_W_MATOT_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_MATOT_LITA, (int)(sizeof(HC_HAFT_W_MATOT_LITA)/sizeof(HC_HAFT_W_MATOT_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_MATOT_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_MATOT_CHAYEY_ODOM)/sizeof(HC_HAFT_W_MATOT_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_MATOT_HAGRA, (int)(sizeof(HC_HAFT_W_MATOT_HAGRA)/sizeof(HC_HAFT_W_MATOT_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_MATOT_SEFARD, (int)(sizeof(HC_HAFT_W_MATOT_SEFARD)/sizeof(HC_HAFT_W_MATOT_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_MATOT_CHABAD, (int)(sizeof(HC_HAFT_W_MATOT_CHABAD)/sizeof(HC_HAFT_W_MATOT_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_MATOT_MAGREB, (int)(sizeof(HC_HAFT_W_MATOT_MAGREB)/sizeof(HC_HAFT_W_MATOT_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_MATOT_ALGERIA, (int)(sizeof(HC_HAFT_W_MATOT_ALGERIA)/sizeof(HC_HAFT_W_MATOT_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_MATOT_MOROCCO, (int)(sizeof(HC_HAFT_W_MATOT_MOROCCO)/sizeof(HC_HAFT_W_MATOT_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_MATOT_FES, (int)(sizeof(HC_HAFT_W_MATOT_FES)/sizeof(HC_HAFT_W_MATOT_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_MATOT_MARRAKESH, (int)(sizeof(HC_HAFT_W_MATOT_MARRAKESH)/sizeof(HC_HAFT_W_MATOT_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_MATOT_TOSHBIM, (int)(sizeof(HC_HAFT_W_MATOT_TOSHBIM)/sizeof(HC_HAFT_W_MATOT_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_MATOT_DJERBA, (int)(sizeof(HC_HAFT_W_MATOT_DJERBA)/sizeof(HC_HAFT_W_MATOT_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_MATOT_BAVLIM, (int)(sizeof(HC_HAFT_W_MATOT_BAVLIM)/sizeof(HC_HAFT_W_MATOT_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_MATOT_TEIMAN, (int)(sizeof(HC_HAFT_W_MATOT_TEIMAN)/sizeof(HC_HAFT_W_MATOT_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_MATOT_BALADI, (int)(sizeof(HC_HAFT_W_MATOT_BALADI)/sizeof(HC_HAFT_W_MATOT_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_MATOT_SHAMI, (int)(sizeof(HC_HAFT_W_MATOT_SHAMI)/sizeof(HC_HAFT_W_MATOT_SHAMI[0])) } },
    [HC_MASEI] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_MASEI_ASHKENAZ, (int)(sizeof(HC_HAFT_W_MASEI_ASHKENAZ)/sizeof(HC_HAFT_W_MASEI_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_MASEI_ITALKI, (int)(sizeof(HC_HAFT_W_MASEI_ITALKI)/sizeof(HC_HAFT_W_MASEI_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_MASEI_FRANKFURT, (int)(sizeof(HC_HAFT_W_MASEI_FRANKFURT)/sizeof(HC_HAFT_W_MASEI_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_MASEI_LITA, (int)(sizeof(HC_HAFT_W_MASEI_LITA)/sizeof(HC_HAFT_W_MASEI_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_MASEI_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_MASEI_CHAYEY_ODOM)/sizeof(HC_HAFT_W_MASEI_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_MASEI_HAGRA, (int)(sizeof(HC_HAFT_W_MASEI_HAGRA)/sizeof(HC_HAFT_W_MASEI_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_MASEI_SEFARD, (int)(sizeof(HC_HAFT_W_MASEI_SEFARD)/sizeof(HC_HAFT_W_MASEI_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_MASEI_CHABAD, (int)(sizeof(HC_HAFT_W_MASEI_CHABAD)/sizeof(HC_HAFT_W_MASEI_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_MASEI_MAGREB, (int)(sizeof(HC_HAFT_W_MASEI_MAGREB)/sizeof(HC_HAFT_W_MASEI_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_MASEI_ALGERIA, (int)(sizeof(HC_HAFT_W_MASEI_ALGERIA)/sizeof(HC_HAFT_W_MASEI_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_MASEI_MOROCCO, (int)(sizeof(HC_HAFT_W_MASEI_MOROCCO)/sizeof(HC_HAFT_W_MASEI_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_MASEI_FES, (int)(sizeof(HC_HAFT_W_MASEI_FES)/sizeof(HC_HAFT_W_MASEI_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_MASEI_MARRAKESH, (int)(sizeof(HC_HAFT_W_MASEI_MARRAKESH)/sizeof(HC_HAFT_W_MASEI_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_MASEI_TOSHBIM, (int)(sizeof(HC_HAFT_W_MASEI_TOSHBIM)/sizeof(HC_HAFT_W_MASEI_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_MASEI_DJERBA, (int)(sizeof(HC_HAFT_W_MASEI_DJERBA)/sizeof(HC_HAFT_W_MASEI_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_MASEI_BAVLIM, (int)(sizeof(HC_HAFT_W_MASEI_BAVLIM)/sizeof(HC_HAFT_W_MASEI_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_MASEI_TEIMAN, (int)(sizeof(HC_HAFT_W_MASEI_TEIMAN)/sizeof(HC_HAFT_W_MASEI_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_MASEI_BALADI, (int)(sizeof(HC_HAFT_W_MASEI_BALADI)/sizeof(HC_HAFT_W_MASEI_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_MASEI_SHAMI, (int)(sizeof(HC_HAFT_W_MASEI_SHAMI)/sizeof(HC_HAFT_W_MASEI_SHAMI[0])) } },
    [HC_DEVARIM] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_DEVARIM_ASHKENAZ, (int)(sizeof(HC_HAFT_W_DEVARIM_ASHKENAZ)/sizeof(HC_HAFT_W_DEVARIM_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_DEVARIM_ITALKI, (int)(sizeof(HC_HAFT_W_DEVARIM_ITALKI)/sizeof(HC_HAFT_W_DEVARIM_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_DEVARIM_FRANKFURT, (int)(sizeof(HC_HAFT_W_DEVARIM_FRANKFURT)/sizeof(HC_HAFT_W_DEVARIM_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_DEVARIM_LITA, (int)(sizeof(HC_HAFT_W_DEVARIM_LITA)/sizeof(HC_HAFT_W_DEVARIM_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_DEVARIM_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_DEVARIM_CHAYEY_ODOM)/sizeof(HC_HAFT_W_DEVARIM_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_DEVARIM_HAGRA, (int)(sizeof(HC_HAFT_W_DEVARIM_HAGRA)/sizeof(HC_HAFT_W_DEVARIM_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_DEVARIM_SEFARD, (int)(sizeof(HC_HAFT_W_DEVARIM_SEFARD)/sizeof(HC_HAFT_W_DEVARIM_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_DEVARIM_CHABAD, (int)(sizeof(HC_HAFT_W_DEVARIM_CHABAD)/sizeof(HC_HAFT_W_DEVARIM_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_DEVARIM_MAGREB, (int)(sizeof(HC_HAFT_W_DEVARIM_MAGREB)/sizeof(HC_HAFT_W_DEVARIM_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_DEVARIM_ALGERIA, (int)(sizeof(HC_HAFT_W_DEVARIM_ALGERIA)/sizeof(HC_HAFT_W_DEVARIM_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_DEVARIM_MOROCCO, (int)(sizeof(HC_HAFT_W_DEVARIM_MOROCCO)/sizeof(HC_HAFT_W_DEVARIM_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_DEVARIM_FES, (int)(sizeof(HC_HAFT_W_DEVARIM_FES)/sizeof(HC_HAFT_W_DEVARIM_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_DEVARIM_MARRAKESH, (int)(sizeof(HC_HAFT_W_DEVARIM_MARRAKESH)/sizeof(HC_HAFT_W_DEVARIM_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_DEVARIM_TOSHBIM, (int)(sizeof(HC_HAFT_W_DEVARIM_TOSHBIM)/sizeof(HC_HAFT_W_DEVARIM_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_DEVARIM_DJERBA, (int)(sizeof(HC_HAFT_W_DEVARIM_DJERBA)/sizeof(HC_HAFT_W_DEVARIM_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_DEVARIM_BAVLIM, (int)(sizeof(HC_HAFT_W_DEVARIM_BAVLIM)/sizeof(HC_HAFT_W_DEVARIM_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_DEVARIM_TEIMAN, (int)(sizeof(HC_HAFT_W_DEVARIM_TEIMAN)/sizeof(HC_HAFT_W_DEVARIM_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_DEVARIM_BALADI, (int)(sizeof(HC_HAFT_W_DEVARIM_BALADI)/sizeof(HC_HAFT_W_DEVARIM_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_DEVARIM_SHAMI, (int)(sizeof(HC_HAFT_W_DEVARIM_SHAMI)/sizeof(HC_HAFT_W_DEVARIM_SHAMI[0])) } },
    [HC_VAETCHANAN] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VAETCHANAN_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VAETCHANAN_ASHKENAZ)/sizeof(HC_HAFT_W_VAETCHANAN_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VAETCHANAN_ITALKI, (int)(sizeof(HC_HAFT_W_VAETCHANAN_ITALKI)/sizeof(HC_HAFT_W_VAETCHANAN_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VAETCHANAN_FRANKFURT, (int)(sizeof(HC_HAFT_W_VAETCHANAN_FRANKFURT)/sizeof(HC_HAFT_W_VAETCHANAN_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VAETCHANAN_LITA, (int)(sizeof(HC_HAFT_W_VAETCHANAN_LITA)/sizeof(HC_HAFT_W_VAETCHANAN_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VAETCHANAN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VAETCHANAN_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VAETCHANAN_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VAETCHANAN_HAGRA, (int)(sizeof(HC_HAFT_W_VAETCHANAN_HAGRA)/sizeof(HC_HAFT_W_VAETCHANAN_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VAETCHANAN_SEFARD, (int)(sizeof(HC_HAFT_W_VAETCHANAN_SEFARD)/sizeof(HC_HAFT_W_VAETCHANAN_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VAETCHANAN_CHABAD, (int)(sizeof(HC_HAFT_W_VAETCHANAN_CHABAD)/sizeof(HC_HAFT_W_VAETCHANAN_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VAETCHANAN_MAGREB, (int)(sizeof(HC_HAFT_W_VAETCHANAN_MAGREB)/sizeof(HC_HAFT_W_VAETCHANAN_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VAETCHANAN_ALGERIA, (int)(sizeof(HC_HAFT_W_VAETCHANAN_ALGERIA)/sizeof(HC_HAFT_W_VAETCHANAN_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VAETCHANAN_MOROCCO, (int)(sizeof(HC_HAFT_W_VAETCHANAN_MOROCCO)/sizeof(HC_HAFT_W_VAETCHANAN_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VAETCHANAN_FES, (int)(sizeof(HC_HAFT_W_VAETCHANAN_FES)/sizeof(HC_HAFT_W_VAETCHANAN_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VAETCHANAN_MARRAKESH, (int)(sizeof(HC_HAFT_W_VAETCHANAN_MARRAKESH)/sizeof(HC_HAFT_W_VAETCHANAN_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VAETCHANAN_TOSHBIM, (int)(sizeof(HC_HAFT_W_VAETCHANAN_TOSHBIM)/sizeof(HC_HAFT_W_VAETCHANAN_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VAETCHANAN_DJERBA, (int)(sizeof(HC_HAFT_W_VAETCHANAN_DJERBA)/sizeof(HC_HAFT_W_VAETCHANAN_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VAETCHANAN_BAVLIM, (int)(sizeof(HC_HAFT_W_VAETCHANAN_BAVLIM)/sizeof(HC_HAFT_W_VAETCHANAN_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VAETCHANAN_TEIMAN, (int)(sizeof(HC_HAFT_W_VAETCHANAN_TEIMAN)/sizeof(HC_HAFT_W_VAETCHANAN_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VAETCHANAN_BALADI, (int)(sizeof(HC_HAFT_W_VAETCHANAN_BALADI)/sizeof(HC_HAFT_W_VAETCHANAN_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VAETCHANAN_SHAMI, (int)(sizeof(HC_HAFT_W_VAETCHANAN_SHAMI)/sizeof(HC_HAFT_W_VAETCHANAN_SHAMI[0])) } },
    [HC_EIKEV] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_EIKEV_ASHKENAZ, (int)(sizeof(HC_HAFT_W_EIKEV_ASHKENAZ)/sizeof(HC_HAFT_W_EIKEV_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_EIKEV_ITALKI, (int)(sizeof(HC_HAFT_W_EIKEV_ITALKI)/sizeof(HC_HAFT_W_EIKEV_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_EIKEV_FRANKFURT, (int)(sizeof(HC_HAFT_W_EIKEV_FRANKFURT)/sizeof(HC_HAFT_W_EIKEV_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_EIKEV_LITA, (int)(sizeof(HC_HAFT_W_EIKEV_LITA)/sizeof(HC_HAFT_W_EIKEV_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_EIKEV_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_EIKEV_CHAYEY_ODOM)/sizeof(HC_HAFT_W_EIKEV_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_EIKEV_HAGRA, (int)(sizeof(HC_HAFT_W_EIKEV_HAGRA)/sizeof(HC_HAFT_W_EIKEV_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_EIKEV_SEFARD, (int)(sizeof(HC_HAFT_W_EIKEV_SEFARD)/sizeof(HC_HAFT_W_EIKEV_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_EIKEV_CHABAD, (int)(sizeof(HC_HAFT_W_EIKEV_CHABAD)/sizeof(HC_HAFT_W_EIKEV_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_EIKEV_MAGREB, (int)(sizeof(HC_HAFT_W_EIKEV_MAGREB)/sizeof(HC_HAFT_W_EIKEV_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_EIKEV_ALGERIA, (int)(sizeof(HC_HAFT_W_EIKEV_ALGERIA)/sizeof(HC_HAFT_W_EIKEV_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_EIKEV_MOROCCO, (int)(sizeof(HC_HAFT_W_EIKEV_MOROCCO)/sizeof(HC_HAFT_W_EIKEV_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_EIKEV_FES, (int)(sizeof(HC_HAFT_W_EIKEV_FES)/sizeof(HC_HAFT_W_EIKEV_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_EIKEV_MARRAKESH, (int)(sizeof(HC_HAFT_W_EIKEV_MARRAKESH)/sizeof(HC_HAFT_W_EIKEV_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_EIKEV_TOSHBIM, (int)(sizeof(HC_HAFT_W_EIKEV_TOSHBIM)/sizeof(HC_HAFT_W_EIKEV_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_EIKEV_DJERBA, (int)(sizeof(HC_HAFT_W_EIKEV_DJERBA)/sizeof(HC_HAFT_W_EIKEV_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_EIKEV_BAVLIM, (int)(sizeof(HC_HAFT_W_EIKEV_BAVLIM)/sizeof(HC_HAFT_W_EIKEV_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_EIKEV_TEIMAN, (int)(sizeof(HC_HAFT_W_EIKEV_TEIMAN)/sizeof(HC_HAFT_W_EIKEV_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_EIKEV_BALADI, (int)(sizeof(HC_HAFT_W_EIKEV_BALADI)/sizeof(HC_HAFT_W_EIKEV_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_EIKEV_SHAMI, (int)(sizeof(HC_HAFT_W_EIKEV_SHAMI)/sizeof(HC_HAFT_W_EIKEV_SHAMI[0])) } },
    [HC_REEH] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_REEH_ASHKENAZ, (int)(sizeof(HC_HAFT_W_REEH_ASHKENAZ)/sizeof(HC_HAFT_W_REEH_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_REEH_ITALKI, (int)(sizeof(HC_HAFT_W_REEH_ITALKI)/sizeof(HC_HAFT_W_REEH_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_REEH_FRANKFURT, (int)(sizeof(HC_HAFT_W_REEH_FRANKFURT)/sizeof(HC_HAFT_W_REEH_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_REEH_LITA, (int)(sizeof(HC_HAFT_W_REEH_LITA)/sizeof(HC_HAFT_W_REEH_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_REEH_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_REEH_CHAYEY_ODOM)/sizeof(HC_HAFT_W_REEH_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_REEH_HAGRA, (int)(sizeof(HC_HAFT_W_REEH_HAGRA)/sizeof(HC_HAFT_W_REEH_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_REEH_SEFARD, (int)(sizeof(HC_HAFT_W_REEH_SEFARD)/sizeof(HC_HAFT_W_REEH_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_REEH_CHABAD, (int)(sizeof(HC_HAFT_W_REEH_CHABAD)/sizeof(HC_HAFT_W_REEH_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_REEH_MAGREB, (int)(sizeof(HC_HAFT_W_REEH_MAGREB)/sizeof(HC_HAFT_W_REEH_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_REEH_ALGERIA, (int)(sizeof(HC_HAFT_W_REEH_ALGERIA)/sizeof(HC_HAFT_W_REEH_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_REEH_MOROCCO, (int)(sizeof(HC_HAFT_W_REEH_MOROCCO)/sizeof(HC_HAFT_W_REEH_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_REEH_FES, (int)(sizeof(HC_HAFT_W_REEH_FES)/sizeof(HC_HAFT_W_REEH_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_REEH_MARRAKESH, (int)(sizeof(HC_HAFT_W_REEH_MARRAKESH)/sizeof(HC_HAFT_W_REEH_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_REEH_TOSHBIM, (int)(sizeof(HC_HAFT_W_REEH_TOSHBIM)/sizeof(HC_HAFT_W_REEH_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_REEH_DJERBA, (int)(sizeof(HC_HAFT_W_REEH_DJERBA)/sizeof(HC_HAFT_W_REEH_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_REEH_BAVLIM, (int)(sizeof(HC_HAFT_W_REEH_BAVLIM)/sizeof(HC_HAFT_W_REEH_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_REEH_TEIMAN, (int)(sizeof(HC_HAFT_W_REEH_TEIMAN)/sizeof(HC_HAFT_W_REEH_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_REEH_BALADI, (int)(sizeof(HC_HAFT_W_REEH_BALADI)/sizeof(HC_HAFT_W_REEH_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_REEH_SHAMI, (int)(sizeof(HC_HAFT_W_REEH_SHAMI)/sizeof(HC_HAFT_W_REEH_SHAMI[0])) } },
    [HC_SHOFTIM] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_SHOFTIM_ASHKENAZ, (int)(sizeof(HC_HAFT_W_SHOFTIM_ASHKENAZ)/sizeof(HC_HAFT_W_SHOFTIM_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_SHOFTIM_ITALKI, (int)(sizeof(HC_HAFT_W_SHOFTIM_ITALKI)/sizeof(HC_HAFT_W_SHOFTIM_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_SHOFTIM_FRANKFURT, (int)(sizeof(HC_HAFT_W_SHOFTIM_FRANKFURT)/sizeof(HC_HAFT_W_SHOFTIM_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_SHOFTIM_LITA, (int)(sizeof(HC_HAFT_W_SHOFTIM_LITA)/sizeof(HC_HAFT_W_SHOFTIM_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_SHOFTIM_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_SHOFTIM_CHAYEY_ODOM)/sizeof(HC_HAFT_W_SHOFTIM_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_SHOFTIM_HAGRA, (int)(sizeof(HC_HAFT_W_SHOFTIM_HAGRA)/sizeof(HC_HAFT_W_SHOFTIM_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_SHOFTIM_SEFARD, (int)(sizeof(HC_HAFT_W_SHOFTIM_SEFARD)/sizeof(HC_HAFT_W_SHOFTIM_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_SHOFTIM_CHABAD, (int)(sizeof(HC_HAFT_W_SHOFTIM_CHABAD)/sizeof(HC_HAFT_W_SHOFTIM_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_SHOFTIM_MAGREB, (int)(sizeof(HC_HAFT_W_SHOFTIM_MAGREB)/sizeof(HC_HAFT_W_SHOFTIM_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_SHOFTIM_ALGERIA, (int)(sizeof(HC_HAFT_W_SHOFTIM_ALGERIA)/sizeof(HC_HAFT_W_SHOFTIM_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_SHOFTIM_MOROCCO, (int)(sizeof(HC_HAFT_W_SHOFTIM_MOROCCO)/sizeof(HC_HAFT_W_SHOFTIM_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_SHOFTIM_FES, (int)(sizeof(HC_HAFT_W_SHOFTIM_FES)/sizeof(HC_HAFT_W_SHOFTIM_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_SHOFTIM_MARRAKESH, (int)(sizeof(HC_HAFT_W_SHOFTIM_MARRAKESH)/sizeof(HC_HAFT_W_SHOFTIM_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_SHOFTIM_TOSHBIM, (int)(sizeof(HC_HAFT_W_SHOFTIM_TOSHBIM)/sizeof(HC_HAFT_W_SHOFTIM_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_SHOFTIM_DJERBA, (int)(sizeof(HC_HAFT_W_SHOFTIM_DJERBA)/sizeof(HC_HAFT_W_SHOFTIM_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_SHOFTIM_BAVLIM, (int)(sizeof(HC_HAFT_W_SHOFTIM_BAVLIM)/sizeof(HC_HAFT_W_SHOFTIM_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_SHOFTIM_TEIMAN, (int)(sizeof(HC_HAFT_W_SHOFTIM_TEIMAN)/sizeof(HC_HAFT_W_SHOFTIM_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_SHOFTIM_BALADI, (int)(sizeof(HC_HAFT_W_SHOFTIM_BALADI)/sizeof(HC_HAFT_W_SHOFTIM_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_SHOFTIM_SHAMI, (int)(sizeof(HC_HAFT_W_SHOFTIM_SHAMI)/sizeof(HC_HAFT_W_SHOFTIM_SHAMI[0])) } },
    [HC_KI_TEITZEI] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_KI_TEITZEI_ASHKENAZ, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_ASHKENAZ)/sizeof(HC_HAFT_W_KI_TEITZEI_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_KI_TEITZEI_ITALKI, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_ITALKI)/sizeof(HC_HAFT_W_KI_TEITZEI_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_KI_TEITZEI_FRANKFURT, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_FRANKFURT)/sizeof(HC_HAFT_W_KI_TEITZEI_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_KI_TEITZEI_LITA, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_LITA)/sizeof(HC_HAFT_W_KI_TEITZEI_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_KI_TEITZEI_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_CHAYEY_ODOM)/sizeof(HC_HAFT_W_KI_TEITZEI_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_KI_TEITZEI_HAGRA, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_HAGRA)/sizeof(HC_HAFT_W_KI_TEITZEI_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_KI_TEITZEI_SEFARD, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_SEFARD)/sizeof(HC_HAFT_W_KI_TEITZEI_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_KI_TEITZEI_CHABAD, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_CHABAD)/sizeof(HC_HAFT_W_KI_TEITZEI_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_KI_TEITZEI_MAGREB, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_MAGREB)/sizeof(HC_HAFT_W_KI_TEITZEI_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_KI_TEITZEI_ALGERIA, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_ALGERIA)/sizeof(HC_HAFT_W_KI_TEITZEI_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_KI_TEITZEI_MOROCCO, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_MOROCCO)/sizeof(HC_HAFT_W_KI_TEITZEI_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_KI_TEITZEI_FES, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_FES)/sizeof(HC_HAFT_W_KI_TEITZEI_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_KI_TEITZEI_MARRAKESH, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_MARRAKESH)/sizeof(HC_HAFT_W_KI_TEITZEI_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_KI_TEITZEI_TOSHBIM, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_TOSHBIM)/sizeof(HC_HAFT_W_KI_TEITZEI_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_KI_TEITZEI_DJERBA, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_DJERBA)/sizeof(HC_HAFT_W_KI_TEITZEI_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_KI_TEITZEI_BAVLIM, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_BAVLIM)/sizeof(HC_HAFT_W_KI_TEITZEI_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_KI_TEITZEI_TEIMAN, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_TEIMAN)/sizeof(HC_HAFT_W_KI_TEITZEI_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_KI_TEITZEI_BALADI, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_BALADI)/sizeof(HC_HAFT_W_KI_TEITZEI_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_KI_TEITZEI_SHAMI, (int)(sizeof(HC_HAFT_W_KI_TEITZEI_SHAMI)/sizeof(HC_HAFT_W_KI_TEITZEI_SHAMI[0])) } },
    [HC_KI_TAVO] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_KI_TAVO_ASHKENAZ, (int)(sizeof(HC_HAFT_W_KI_TAVO_ASHKENAZ)/sizeof(HC_HAFT_W_KI_TAVO_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_KI_TAVO_ITALKI, (int)(sizeof(HC_HAFT_W_KI_TAVO_ITALKI)/sizeof(HC_HAFT_W_KI_TAVO_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_KI_TAVO_FRANKFURT, (int)(sizeof(HC_HAFT_W_KI_TAVO_FRANKFURT)/sizeof(HC_HAFT_W_KI_TAVO_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_KI_TAVO_LITA, (int)(sizeof(HC_HAFT_W_KI_TAVO_LITA)/sizeof(HC_HAFT_W_KI_TAVO_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_KI_TAVO_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_KI_TAVO_CHAYEY_ODOM)/sizeof(HC_HAFT_W_KI_TAVO_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_KI_TAVO_HAGRA, (int)(sizeof(HC_HAFT_W_KI_TAVO_HAGRA)/sizeof(HC_HAFT_W_KI_TAVO_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_KI_TAVO_SEFARD, (int)(sizeof(HC_HAFT_W_KI_TAVO_SEFARD)/sizeof(HC_HAFT_W_KI_TAVO_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_KI_TAVO_CHABAD, (int)(sizeof(HC_HAFT_W_KI_TAVO_CHABAD)/sizeof(HC_HAFT_W_KI_TAVO_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_KI_TAVO_MAGREB, (int)(sizeof(HC_HAFT_W_KI_TAVO_MAGREB)/sizeof(HC_HAFT_W_KI_TAVO_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_KI_TAVO_ALGERIA, (int)(sizeof(HC_HAFT_W_KI_TAVO_ALGERIA)/sizeof(HC_HAFT_W_KI_TAVO_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_KI_TAVO_MOROCCO, (int)(sizeof(HC_HAFT_W_KI_TAVO_MOROCCO)/sizeof(HC_HAFT_W_KI_TAVO_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_KI_TAVO_FES, (int)(sizeof(HC_HAFT_W_KI_TAVO_FES)/sizeof(HC_HAFT_W_KI_TAVO_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_KI_TAVO_MARRAKESH, (int)(sizeof(HC_HAFT_W_KI_TAVO_MARRAKESH)/sizeof(HC_HAFT_W_KI_TAVO_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_KI_TAVO_TOSHBIM, (int)(sizeof(HC_HAFT_W_KI_TAVO_TOSHBIM)/sizeof(HC_HAFT_W_KI_TAVO_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_KI_TAVO_DJERBA, (int)(sizeof(HC_HAFT_W_KI_TAVO_DJERBA)/sizeof(HC_HAFT_W_KI_TAVO_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_KI_TAVO_BAVLIM, (int)(sizeof(HC_HAFT_W_KI_TAVO_BAVLIM)/sizeof(HC_HAFT_W_KI_TAVO_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_KI_TAVO_TEIMAN, (int)(sizeof(HC_HAFT_W_KI_TAVO_TEIMAN)/sizeof(HC_HAFT_W_KI_TAVO_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_KI_TAVO_BALADI, (int)(sizeof(HC_HAFT_W_KI_TAVO_BALADI)/sizeof(HC_HAFT_W_KI_TAVO_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_KI_TAVO_SHAMI, (int)(sizeof(HC_HAFT_W_KI_TAVO_SHAMI)/sizeof(HC_HAFT_W_KI_TAVO_SHAMI[0])) } },
    [HC_NITZAVIM] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_NITZAVIM_ASHKENAZ, (int)(sizeof(HC_HAFT_W_NITZAVIM_ASHKENAZ)/sizeof(HC_HAFT_W_NITZAVIM_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_NITZAVIM_ITALKI, (int)(sizeof(HC_HAFT_W_NITZAVIM_ITALKI)/sizeof(HC_HAFT_W_NITZAVIM_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_NITZAVIM_FRANKFURT, (int)(sizeof(HC_HAFT_W_NITZAVIM_FRANKFURT)/sizeof(HC_HAFT_W_NITZAVIM_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_NITZAVIM_LITA, (int)(sizeof(HC_HAFT_W_NITZAVIM_LITA)/sizeof(HC_HAFT_W_NITZAVIM_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_NITZAVIM_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_NITZAVIM_CHAYEY_ODOM)/sizeof(HC_HAFT_W_NITZAVIM_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_NITZAVIM_HAGRA, (int)(sizeof(HC_HAFT_W_NITZAVIM_HAGRA)/sizeof(HC_HAFT_W_NITZAVIM_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_NITZAVIM_SEFARD, (int)(sizeof(HC_HAFT_W_NITZAVIM_SEFARD)/sizeof(HC_HAFT_W_NITZAVIM_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_NITZAVIM_CHABAD, (int)(sizeof(HC_HAFT_W_NITZAVIM_CHABAD)/sizeof(HC_HAFT_W_NITZAVIM_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_NITZAVIM_MAGREB, (int)(sizeof(HC_HAFT_W_NITZAVIM_MAGREB)/sizeof(HC_HAFT_W_NITZAVIM_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_NITZAVIM_ALGERIA, (int)(sizeof(HC_HAFT_W_NITZAVIM_ALGERIA)/sizeof(HC_HAFT_W_NITZAVIM_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_NITZAVIM_MOROCCO, (int)(sizeof(HC_HAFT_W_NITZAVIM_MOROCCO)/sizeof(HC_HAFT_W_NITZAVIM_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_NITZAVIM_FES, (int)(sizeof(HC_HAFT_W_NITZAVIM_FES)/sizeof(HC_HAFT_W_NITZAVIM_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_NITZAVIM_MARRAKESH, (int)(sizeof(HC_HAFT_W_NITZAVIM_MARRAKESH)/sizeof(HC_HAFT_W_NITZAVIM_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_NITZAVIM_TOSHBIM, (int)(sizeof(HC_HAFT_W_NITZAVIM_TOSHBIM)/sizeof(HC_HAFT_W_NITZAVIM_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_NITZAVIM_DJERBA, (int)(sizeof(HC_HAFT_W_NITZAVIM_DJERBA)/sizeof(HC_HAFT_W_NITZAVIM_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_NITZAVIM_BAVLIM, (int)(sizeof(HC_HAFT_W_NITZAVIM_BAVLIM)/sizeof(HC_HAFT_W_NITZAVIM_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_NITZAVIM_TEIMAN, (int)(sizeof(HC_HAFT_W_NITZAVIM_TEIMAN)/sizeof(HC_HAFT_W_NITZAVIM_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_NITZAVIM_BALADI, (int)(sizeof(HC_HAFT_W_NITZAVIM_BALADI)/sizeof(HC_HAFT_W_NITZAVIM_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_NITZAVIM_SHAMI, (int)(sizeof(HC_HAFT_W_NITZAVIM_SHAMI)/sizeof(HC_HAFT_W_NITZAVIM_SHAMI[0])) } },
    [HC_VAYEILECH] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VAYEILECH_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VAYEILECH_ASHKENAZ)/sizeof(HC_HAFT_W_VAYEILECH_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VAYEILECH_ITALKI, (int)(sizeof(HC_HAFT_W_VAYEILECH_ITALKI)/sizeof(HC_HAFT_W_VAYEILECH_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VAYEILECH_FRANKFURT, (int)(sizeof(HC_HAFT_W_VAYEILECH_FRANKFURT)/sizeof(HC_HAFT_W_VAYEILECH_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VAYEILECH_LITA, (int)(sizeof(HC_HAFT_W_VAYEILECH_LITA)/sizeof(HC_HAFT_W_VAYEILECH_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VAYEILECH_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VAYEILECH_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VAYEILECH_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VAYEILECH_HAGRA, (int)(sizeof(HC_HAFT_W_VAYEILECH_HAGRA)/sizeof(HC_HAFT_W_VAYEILECH_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VAYEILECH_SEFARD, (int)(sizeof(HC_HAFT_W_VAYEILECH_SEFARD)/sizeof(HC_HAFT_W_VAYEILECH_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VAYEILECH_CHABAD, (int)(sizeof(HC_HAFT_W_VAYEILECH_CHABAD)/sizeof(HC_HAFT_W_VAYEILECH_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VAYEILECH_MAGREB, (int)(sizeof(HC_HAFT_W_VAYEILECH_MAGREB)/sizeof(HC_HAFT_W_VAYEILECH_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VAYEILECH_ALGERIA, (int)(sizeof(HC_HAFT_W_VAYEILECH_ALGERIA)/sizeof(HC_HAFT_W_VAYEILECH_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VAYEILECH_MOROCCO, (int)(sizeof(HC_HAFT_W_VAYEILECH_MOROCCO)/sizeof(HC_HAFT_W_VAYEILECH_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VAYEILECH_FES, (int)(sizeof(HC_HAFT_W_VAYEILECH_FES)/sizeof(HC_HAFT_W_VAYEILECH_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VAYEILECH_MARRAKESH, (int)(sizeof(HC_HAFT_W_VAYEILECH_MARRAKESH)/sizeof(HC_HAFT_W_VAYEILECH_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VAYEILECH_TOSHBIM, (int)(sizeof(HC_HAFT_W_VAYEILECH_TOSHBIM)/sizeof(HC_HAFT_W_VAYEILECH_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VAYEILECH_DJERBA, (int)(sizeof(HC_HAFT_W_VAYEILECH_DJERBA)/sizeof(HC_HAFT_W_VAYEILECH_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VAYEILECH_BAVLIM, (int)(sizeof(HC_HAFT_W_VAYEILECH_BAVLIM)/sizeof(HC_HAFT_W_VAYEILECH_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VAYEILECH_TEIMAN, (int)(sizeof(HC_HAFT_W_VAYEILECH_TEIMAN)/sizeof(HC_HAFT_W_VAYEILECH_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VAYEILECH_BALADI, (int)(sizeof(HC_HAFT_W_VAYEILECH_BALADI)/sizeof(HC_HAFT_W_VAYEILECH_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VAYEILECH_SHAMI, (int)(sizeof(HC_HAFT_W_VAYEILECH_SHAMI)/sizeof(HC_HAFT_W_VAYEILECH_SHAMI[0])) } },
    [HC_HAAZINU] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_HAAZINU_ASHKENAZ, (int)(sizeof(HC_HAFT_W_HAAZINU_ASHKENAZ)/sizeof(HC_HAFT_W_HAAZINU_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_HAAZINU_ITALKI, (int)(sizeof(HC_HAFT_W_HAAZINU_ITALKI)/sizeof(HC_HAFT_W_HAAZINU_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_HAAZINU_FRANKFURT, (int)(sizeof(HC_HAFT_W_HAAZINU_FRANKFURT)/sizeof(HC_HAFT_W_HAAZINU_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_HAAZINU_LITA, (int)(sizeof(HC_HAFT_W_HAAZINU_LITA)/sizeof(HC_HAFT_W_HAAZINU_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_HAAZINU_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_HAAZINU_CHAYEY_ODOM)/sizeof(HC_HAFT_W_HAAZINU_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_HAAZINU_HAGRA, (int)(sizeof(HC_HAFT_W_HAAZINU_HAGRA)/sizeof(HC_HAFT_W_HAAZINU_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_HAAZINU_SEFARD, (int)(sizeof(HC_HAFT_W_HAAZINU_SEFARD)/sizeof(HC_HAFT_W_HAAZINU_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_HAAZINU_CHABAD, (int)(sizeof(HC_HAFT_W_HAAZINU_CHABAD)/sizeof(HC_HAFT_W_HAAZINU_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_HAAZINU_MAGREB, (int)(sizeof(HC_HAFT_W_HAAZINU_MAGREB)/sizeof(HC_HAFT_W_HAAZINU_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_HAAZINU_ALGERIA, (int)(sizeof(HC_HAFT_W_HAAZINU_ALGERIA)/sizeof(HC_HAFT_W_HAAZINU_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_HAAZINU_MOROCCO, (int)(sizeof(HC_HAFT_W_HAAZINU_MOROCCO)/sizeof(HC_HAFT_W_HAAZINU_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_HAAZINU_FES, (int)(sizeof(HC_HAFT_W_HAAZINU_FES)/sizeof(HC_HAFT_W_HAAZINU_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_HAAZINU_MARRAKESH, (int)(sizeof(HC_HAFT_W_HAAZINU_MARRAKESH)/sizeof(HC_HAFT_W_HAAZINU_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_HAAZINU_TOSHBIM, (int)(sizeof(HC_HAFT_W_HAAZINU_TOSHBIM)/sizeof(HC_HAFT_W_HAAZINU_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_HAAZINU_DJERBA, (int)(sizeof(HC_HAFT_W_HAAZINU_DJERBA)/sizeof(HC_HAFT_W_HAAZINU_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_HAAZINU_BAVLIM, (int)(sizeof(HC_HAFT_W_HAAZINU_BAVLIM)/sizeof(HC_HAFT_W_HAAZINU_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_HAAZINU_TEIMAN, (int)(sizeof(HC_HAFT_W_HAAZINU_TEIMAN)/sizeof(HC_HAFT_W_HAAZINU_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_HAAZINU_BALADI, (int)(sizeof(HC_HAFT_W_HAAZINU_BALADI)/sizeof(HC_HAFT_W_HAAZINU_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_HAAZINU_SHAMI, (int)(sizeof(HC_HAFT_W_HAAZINU_SHAMI)/sizeof(HC_HAFT_W_HAAZINU_SHAMI[0])) } },
    [HC_VEZOT_HABRACHA] = { [HC_CUSTOM_ASHKENAZ] = { HC_HAFT_W_VEZOT_HABRACHA_ASHKENAZ, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_ASHKENAZ)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_ASHKENAZ[0])) }, [HC_CUSTOM_ITALKI] = { HC_HAFT_W_VEZOT_HABRACHA_ITALKI, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_ITALKI)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_ITALKI[0])) }, [HC_CUSTOM_FRANKFURT] = { HC_HAFT_W_VEZOT_HABRACHA_FRANKFURT, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_FRANKFURT)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_FRANKFURT[0])) }, [HC_CUSTOM_LITA] = { HC_HAFT_W_VEZOT_HABRACHA_LITA, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_LITA)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_LITA[0])) }, [HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_W_VEZOT_HABRACHA_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_CHAYEY_ODOM)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_CHAYEY_ODOM[0])) }, [HC_CUSTOM_HAGRA] = { HC_HAFT_W_VEZOT_HABRACHA_HAGRA, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_HAGRA)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_HAGRA[0])) }, [HC_CUSTOM_SEFARD] = { HC_HAFT_W_VEZOT_HABRACHA_SEFARD, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_SEFARD)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_SEFARD[0])) }, [HC_CUSTOM_CHABAD] = { HC_HAFT_W_VEZOT_HABRACHA_CHABAD, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_CHABAD)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_CHABAD[0])) }, [HC_CUSTOM_MAGREB] = { HC_HAFT_W_VEZOT_HABRACHA_MAGREB, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_MAGREB)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_MAGREB[0])) }, [HC_CUSTOM_ALGERIA] = { HC_HAFT_W_VEZOT_HABRACHA_ALGERIA, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_ALGERIA)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_ALGERIA[0])) }, [HC_CUSTOM_MOROCCO] = { HC_HAFT_W_VEZOT_HABRACHA_MOROCCO, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_MOROCCO)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_MOROCCO[0])) }, [HC_CUSTOM_FES] = { HC_HAFT_W_VEZOT_HABRACHA_FES, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_FES)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_FES[0])) }, [HC_CUSTOM_MARRAKESH] = { HC_HAFT_W_VEZOT_HABRACHA_MARRAKESH, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_MARRAKESH)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_MARRAKESH[0])) }, [HC_CUSTOM_TOSHBIM] = { HC_HAFT_W_VEZOT_HABRACHA_TOSHBIM, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_TOSHBIM)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_TOSHBIM[0])) }, [HC_CUSTOM_DJERBA] = { HC_HAFT_W_VEZOT_HABRACHA_DJERBA, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_DJERBA)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_DJERBA[0])) }, [HC_CUSTOM_BAVLIM] = { HC_HAFT_W_VEZOT_HABRACHA_BAVLIM, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_BAVLIM)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_BAVLIM[0])) }, [HC_CUSTOM_TEIMAN] = { HC_HAFT_W_VEZOT_HABRACHA_TEIMAN, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_TEIMAN)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_TEIMAN[0])) }, [HC_CUSTOM_BALADI] = { HC_HAFT_W_VEZOT_HABRACHA_BALADI, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_BALADI)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_BALADI[0])) }, [HC_CUSTOM_SHAMI] = { HC_HAFT_W_VEZOT_HABRACHA_SHAMI, (int)(sizeof(HC_HAFT_W_VEZOT_HABRACHA_SHAMI)/sizeof(HC_HAFT_W_VEZOT_HABRACHA_SHAMI[0])) } },
};

/* ── Special-day haftarot ──────────────────────────────────── */
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_ASHKENAZ[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_POZNAN[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_ITALKI[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_FRANKFURT[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_LITA[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_CHAYEY_ODOM[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_HAGRA[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_SEFARD[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_CHABAD[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_PERSIA[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_LIBYA[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_MAGREB[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_ALGERIA[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_ALGIERS[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_MOROCCO[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_FES[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_MARRAKESH[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_AGADIR[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_TOSHBIM[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_DJERBA[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_BAVLIM[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_TEIMAN[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_BALADI[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_SHAMI[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_ROMANIA[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_ADDITION_CHABAD[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 18 },
    { HC_BOOK_I_SAMUEL, 20, 42, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_ErevRoshChodesh_SHABBAT_ADDITION_FES[] = {
    { HC_BOOK_I_SAMUEL, 20, 18, 20, 18 },
    { HC_BOOK_I_SAMUEL, 20, 42, 20, 42 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_POZNAN[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_ITALKI[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_LITA[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_HAGRA[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_SEFARD[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_CHABAD[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_PERSIA[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_LIBYA[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_MAGREB[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_FES[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_AGADIR[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_DJERBA[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_BALADI[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_SHAMI[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshChodesh_SHABBAT_ADDITION_CHABAD[] = {
    { HC_BOOK_ISAIAH, 66, 1, 66, 1 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 24 },
    { HC_BOOK_ISAIAH, 66, 23, 66, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_ASHKENAZ[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_POZNAN[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_ITALKI[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_FRANKFURT[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_LITA[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_HAGRA[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_SEFARD[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_CHABAD[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_PERSIA[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_LIBYA[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_MAGREB[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_ALGERIA[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_ALGIERS[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_MOROCCO[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_FES[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_MARRAKESH[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_AGADIR[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_TOSHBIM[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_DJERBA[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_BAVLIM[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_TEIMAN[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_BALADI[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_SHAMI[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah1_MAIN_ROMANIA[] = {
    { HC_BOOK_I_SAMUEL, 1, 1, 2, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_ASHKENAZ[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_POZNAN[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_ITALKI[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_FRANKFURT[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_LITA[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_HAGRA[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_SEFARD[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_CHABAD[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_PERSIA[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_LIBYA[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_MAGREB[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_ALGERIA[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_ALGIERS[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_MOROCCO[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_FES[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_MARRAKESH[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_AGADIR[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_TOSHBIM[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_DJERBA[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_BAVLIM[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_TEIMAN[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_BALADI[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_SHAMI[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_RoshHashanah2_MAIN_ROMANIA[] = {
    { HC_BOOK_JEREMIAH, 31, 1, 31, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_POZNAN[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_ITALKI[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
    { HC_BOOK_ISAIAH, 59, 20, 59, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_LITA[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_HAGRA[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_SEFARD[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_CHABAD[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_PERSIA[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_LIBYA[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_MAGREB[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_FES[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_AGADIR[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_DJERBA[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
    { HC_BOOK_ISAIAH, 59, 20, 59, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_BALADI[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
    { HC_BOOK_ISAIAH, 59, 20, 59, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_SHAMI[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
    { HC_BOOK_ISAIAH, 59, 20, 59, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_MAIN_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 57, 14, 58, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_ASHKENAZ[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_POZNAN[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_ITALKI[] = {
    { HC_BOOK_OBADIAH, 1, 21, 1, 21 },
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_FRANKFURT[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_LITA[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_CHAYEY_ODOM[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_HAGRA[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_SEFARD[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_CHABAD[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_PURE_SEPHARDIM[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_PERSIA[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_LIBYA[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_MAGREB[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_ALGERIA[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_ALGIERS[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_MOROCCO[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_FES[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_MARRAKESH[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_AGADIR[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_TOSHBIM[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_DJERBA[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_BAVLIM[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_TEIMAN[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_BALADI[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_SHAMI[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_YomKippur_AFTERNOON_ROMANIA[] = {
    { HC_BOOK_JONAH, 1, 1, 4, 11 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_ASHKENAZ[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_POZNAN[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_ITALKI[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_FRANKFURT[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_LITA[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_HAGRA[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_SEFARD[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_CHABAD[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_PERSIA[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_LIBYA[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_MAGREB[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_ALGERIA[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_ALGIERS[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_MOROCCO[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_FES[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_MARRAKESH[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_AGADIR[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_TOSHBIM[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_DJERBA[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_BAVLIM[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_TEIMAN[] = {
    { HC_BOOK_ZECHARIAH, 13, 9, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_BALADI[] = {
    { HC_BOOK_ZECHARIAH, 13, 9, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_SHAMI[] = {
    { HC_BOOK_ZECHARIAH, 13, 9, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos1_MAIN_ROMANIA[] = {
    { HC_BOOK_ZECHARIAH, 14, 1, 14, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_ASHKENAZ[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_POZNAN[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_ITALKI[] = {
    { HC_BOOK_I_KINGS, 7, 51, 8, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_FRANKFURT[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_LITA[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_HAGRA[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_SEFARD[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_CHABAD[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_PERSIA[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_LIBYA[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_MAGREB[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_ALGERIA[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_ALGIERS[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_MOROCCO[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_FES[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_MARRAKESH[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_AGADIR[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_TOSHBIM[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_DJERBA[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_BAVLIM[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_TEIMAN[] = {
    { HC_BOOK_I_KINGS, 7, 51, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_BALADI[] = {
    { HC_BOOK_I_KINGS, 7, 51, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_SHAMI[] = {
    { HC_BOOK_I_KINGS, 7, 51, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_Succos2_MAIN_ROMANIA[] = {
    { HC_BOOK_I_KINGS, 8, 2, 8, 21 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_ASHKENAZ[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_POZNAN[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 38, 1, 38, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_FRANKFURT[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_LITA[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_CHAYEY_ODOM[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_HAGRA[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_SEFARD[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_CHABAD[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_PURE_SEPHARDIM[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_FES[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 38, 1, 38, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_BALADI[] = {
    { HC_BOOK_EZEKIEL, 38, 1, 38, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 38, 1, 38, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_SuccosIntermediate_SHABBAT_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 38, 18, 39, 16 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_ASHKENAZ[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_POZNAN[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_ITALKI[] = {
    { HC_BOOK_I_KINGS, 8, 54, 9, 1 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_FRANKFURT[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_LITA[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_HAGRA[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_SEFARD[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_CHABAD[] = {
    { HC_BOOK_I_KINGS, 8, 54, 9, 1 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_PERSIA[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_LIBYA[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_MAGREB[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_ALGERIA[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_ALGIERS[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_MOROCCO[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_FES[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_MARRAKESH[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_AGADIR[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_TOSHBIM[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_DJERBA[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_BAVLIM[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_TEIMAN[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_BALADI[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_SHAMI[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_SheminiAtzeres_MAIN_ROMANIA[] = {
    { HC_BOOK_I_KINGS, 8, 54, 8, 66 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_ASHKENAZ[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_POZNAN[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_ITALKI[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_FRANKFURT[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_LITA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_CHAYEY_ODOM[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_HAGRA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_SEFARD[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_CHABAD[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_PURE_SEPHARDIM[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_PERSIA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_LIBYA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_MAGREB[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_ALGERIA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_ALGIERS[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_MOROCCO[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_FES[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_MARRAKESH[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_AGADIR[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_TOSHBIM[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_DJERBA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_BAVLIM[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_TEIMAN[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_BALADI[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_SHAMI[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_1_ROMANIA[] = {
    { HC_BOOK_ZECHARIAH, 2, 14, 4, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_ASHKENAZ[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_POZNAN[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_ITALKI[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_FRANKFURT[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_LITA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_CHAYEY_ODOM[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_HAGRA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_SEFARD[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_CHABAD[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_PERSIA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_LIBYA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_MAGREB[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_ALGERIA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_ALGIERS[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_MOROCCO[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_FES[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_MARRAKESH[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_AGADIR[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_TOSHBIM[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_DJERBA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_BAVLIM[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_TEIMAN[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_BALADI[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_SHAMI[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_Chanukah_SHABBAT_2_ROMANIA[] = {
    { HC_BOOK_I_KINGS, 7, 40, 7, 50 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_ASHKENAZ[] = {
    { HC_BOOK_II_KINGS, 12, 1, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_POZNAN[] = {
    { HC_BOOK_II_KINGS, 12, 1, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_ITALKI[] = {
    { HC_BOOK_II_KINGS, 12, 1, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_FRANKFURT[] = {
    { HC_BOOK_II_KINGS, 12, 1, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_LITA[] = {
    { HC_BOOK_II_KINGS, 12, 1, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_II_KINGS, 12, 1, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_HAGRA[] = {
    { HC_BOOK_II_KINGS, 12, 1, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_SEFARD[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_CHABAD[] = {
    { HC_BOOK_II_KINGS, 12, 1, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_PERSIA[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_LIBYA[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_MAGREB[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_ALGERIA[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_ALGIERS[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_MOROCCO[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_FES[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_MARRAKESH[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_AGADIR[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_TOSHBIM[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_DJERBA[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_BAVLIM[] = {
    { HC_BOOK_II_KINGS, 11, 17, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_TEIMAN[] = {
    { HC_BOOK_II_KINGS, 12, 1, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_BALADI[] = {
    { HC_BOOK_II_KINGS, 12, 1, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_SHAMI[] = {
    { HC_BOOK_II_KINGS, 12, 1, 12, 17 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasShekalim_MAIN_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 45, 12, 46, 5 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_ASHKENAZ[] = {
    { HC_BOOK_I_SAMUEL, 15, 2, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_POZNAN[] = {
    { HC_BOOK_I_SAMUEL, 15, 2, 15, 33 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_ITALKI[] = {
    { HC_BOOK_I_SAMUEL, 15, 2, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_FRANKFURT[] = {
    { HC_BOOK_I_SAMUEL, 15, 2, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_LITA[] = {
    { HC_BOOK_I_SAMUEL, 15, 2, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_I_SAMUEL, 15, 2, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_HAGRA[] = {
    { HC_BOOK_I_SAMUEL, 15, 2, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_SEFARD[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_CHABAD[] = {
    { HC_BOOK_I_SAMUEL, 15, 2, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_PERSIA[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_LIBYA[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_MAGREB[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_ALGERIA[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_ALGIERS[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_MOROCCO[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_FES[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_MARRAKESH[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_AGADIR[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_TOSHBIM[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_DJERBA[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_BAVLIM[] = {
    { HC_BOOK_I_SAMUEL, 15, 1, 15, 34 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_TEIMAN[] = {
    { HC_BOOK_I_SAMUEL, 14, 52, 15, 33 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_BALADI[] = {
    { HC_BOOK_I_SAMUEL, 14, 52, 15, 33 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_SHAMI[] = {
    { HC_BOOK_I_SAMUEL, 14, 52, 15, 33 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasZachor_MAIN_ROMANIA[] = {
    { HC_BOOK_I_SAMUEL, 15, 2, 15, 22 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_ASHKENAZ[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 38 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_POZNAN[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 38 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 38 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_FRANKFURT[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 38 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_LITA[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 38 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 38 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_HAGRA[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 38 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_SEFARD[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_CHABAD[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_FES[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_BALADI[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 36, 16, 36, 36 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasParah_MAIN_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 36, 25, 37, 7 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_ASHKENAZ[] = {
    { HC_BOOK_EZEKIEL, 45, 16, 46, 18 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_POZNAN[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 11 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_FRANKFURT[] = {
    { HC_BOOK_EZEKIEL, 45, 16, 46, 18 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_LITA[] = {
    { HC_BOOK_EZEKIEL, 45, 16, 46, 18 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_EZEKIEL, 45, 16, 46, 18 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_HAGRA[] = {
    { HC_BOOK_EZEKIEL, 45, 16, 46, 18 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_SEFARD[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_CHABAD[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_FES[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 45, 18, 46, 15 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 45, 9, 46, 11 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_BALADI[] = {
    { HC_BOOK_EZEKIEL, 45, 9, 46, 11 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 45, 9, 46, 11 },
};
static const hc_haftarah_ref HC_HAFT_S_ParshasHachodesh_MAIN_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 45, 21, 46, 13 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_ASHKENAZ[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_POZNAN[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_ITALKI[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_FRANKFURT[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_LITA[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_HAGRA[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_SEFARD[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_CHABAD[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_PERSIA[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_LIBYA[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_MAGREB[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_ALGERIA[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_ALGIERS[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_MOROCCO[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_FES[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_MARRAKESH[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_AGADIR[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_TOSHBIM[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_DJERBA[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_BAVLIM[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_TEIMAN[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_BALADI[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_SHAMI[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_ShabbosHagodol_MAIN_ROMANIA[] = {
    { HC_BOOK_MALACHI, 3, 4, 3, 24 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_ASHKENAZ[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_POZNAN[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_FRANKFURT[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_LITA[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_CHAYEY_ODOM[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_HAGRA[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_SEFARD[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_CHABAD[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_PURE_SEPHARDIM[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_FES[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 36, 37, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_BALADI[] = {
    { HC_BOOK_EZEKIEL, 36, 37, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 36, 37, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_PesachIntermediate_SHABBAT_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 37, 1, 37, 14 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_ASHKENAZ[] = {
    { HC_BOOK_JOSHUA, 3, 5, 3, 7 },
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_POZNAN[] = {
    { HC_BOOK_JOSHUA, 3, 5, 3, 7 },
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_ITALKI[] = {
    { HC_BOOK_JOSHUA, 3, 5, 3, 7 },
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_FRANKFURT[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_LITA[] = {
    { HC_BOOK_JOSHUA, 3, 5, 3, 7 },
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_JOSHUA, 3, 5, 3, 7 },
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_HAGRA[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_SEFARD[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_CHABAD[] = {
    { HC_BOOK_JOSHUA, 3, 5, 3, 7 },
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_PERSIA[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_LIBYA[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_MAGREB[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_ALGERIA[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_ALGIERS[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_MOROCCO[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_FES[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_MARRAKESH[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_AGADIR[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_TOSHBIM[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_DJERBA[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_BAVLIM[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_TEIMAN[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_BALADI[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_SHAMI[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
    { HC_BOOK_JOSHUA, 6, 27, 6, 27 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach1_MAIN_ROMANIA[] = {
    { HC_BOOK_JOSHUA, 5, 2, 6, 1 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_ASHKENAZ[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_POZNAN[] = {
    { HC_BOOK_II_KINGS, 23, 4, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 30 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_ITALKI[] = {
    { HC_BOOK_II_KINGS, 23, 21, 23, 30 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_FRANKFURT[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_LITA[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_HAGRA[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_SEFARD[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_CHABAD[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_PERSIA[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_LIBYA[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_MAGREB[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_ALGERIA[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_ALGIERS[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_MOROCCO[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_FES[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_MARRAKESH[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_AGADIR[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_TOSHBIM[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_DJERBA[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_BAVLIM[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_TEIMAN[] = {
    { HC_BOOK_II_KINGS, 22, 1, 22, 7 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_BALADI[] = {
    { HC_BOOK_II_KINGS, 22, 1, 22, 7 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_SHAMI[] = {
    { HC_BOOK_II_KINGS, 22, 1, 22, 7 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach2_MAIN_ROMANIA[] = {
    { HC_BOOK_II_KINGS, 23, 1, 23, 9 },
    { HC_BOOK_II_KINGS, 23, 21, 23, 25 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_ASHKENAZ[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_POZNAN[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_ITALKI[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_FRANKFURT[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_LITA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_HAGRA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_SEFARD[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_CHABAD[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_PERSIA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_LIBYA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_MAGREB[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_ALGERIA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_ALGIERS[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_MOROCCO[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_FES[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_MARRAKESH[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_AGADIR[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_TOSHBIM[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_DJERBA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_BAVLIM[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_TEIMAN[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_BALADI[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_SHAMI[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach7_MAIN_ROMANIA[] = {
    { HC_BOOK_II_SAMUEL, 22, 1, 22, 51 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_POZNAN[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_ITALKI[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_LITA[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_HAGRA[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_SEFARD[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_CHABAD[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_PERSIA[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_LIBYA[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_MAGREB[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_FES[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_MARRAKESH[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_AGADIR[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_TOSHBIM[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_DJERBA[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_BAVLIM[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_TEIMAN[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_BALADI[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_SHAMI[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Pesach8_MAIN_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 10, 32, 12, 6 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_ASHKENAZ[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_POZNAN[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_ITALKI[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_FRANKFURT[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_LITA[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_HAGRA[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_SEFARD[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_CHABAD[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_PERSIA[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_LIBYA[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_MAGREB[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_ALGERIA[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_ALGIERS[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_MOROCCO[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_FES[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_MARRAKESH[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_AGADIR[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_TOSHBIM[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_DJERBA[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_BAVLIM[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_TEIMAN[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 2, 2 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_BALADI[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 2, 2 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_SHAMI[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 2, 2 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos1_MAIN_ROMANIA[] = {
    { HC_BOOK_EZEKIEL, 1, 1, 1, 28 },
    { HC_BOOK_EZEKIEL, 3, 12, 3, 12 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_ASHKENAZ[] = {
    { HC_BOOK_HABAKKUK, 3, 1, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_POZNAN[] = {
    { HC_BOOK_HABAKKUK, 3, 1, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_ITALKI[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_FRANKFURT[] = {
    { HC_BOOK_HABAKKUK, 3, 1, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_LITA[] = {
    { HC_BOOK_HABAKKUK, 3, 1, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_HABAKKUK, 3, 1, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_HAGRA[] = {
    { HC_BOOK_HABAKKUK, 3, 1, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_SEFARD[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_CHABAD[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_PERSIA[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_LIBYA[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_MAGREB[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_ALGERIA[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_ALGIERS[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_MOROCCO[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_FES[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_MARRAKESH[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_AGADIR[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_TOSHBIM[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_DJERBA[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_BAVLIM[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_TEIMAN[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_BALADI[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_SHAMI[] = {
    { HC_BOOK_HABAKKUK, 2, 20, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Shavuos2_MAIN_ROMANIA[] = {
    { HC_BOOK_HABAKKUK, 3, 1, 3, 19 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_POZNAN[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ITALKI[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_LITA[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_HAGRA[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_CHABAD[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ALGERIA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_MARRAKESH[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_ALGERIA[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_ALGIERS[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_MOROCCO[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_FES[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_MARRAKESH[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_ASHKENAZ[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_POZNAN[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_ITALKI[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_FRANKFURT[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_LITA[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_CHAYEY_ODOM[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_HAGRA[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_SEFARD[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_CHABAD[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_PURE_SEPHARDIM[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_PERSIA[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_LIBYA[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_MAGREB[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_ALGERIA[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_ALGIERS[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_MOROCCO[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_FES[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_MARRAKESH[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_AGADIR[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_TOSHBIM[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_DJERBA[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_BAVLIM[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_TEIMAN[] = {
    { HC_BOOK_JEREMIAH, 6, 16, 6, 17 },
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_BALADI[] = {
    { HC_BOOK_JEREMIAH, 6, 16, 6, 17 },
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_SHAMI[] = {
    { HC_BOOK_JEREMIAH, 6, 16, 6, 17 },
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_MAIN_ROMANIA[] = {
    { HC_BOOK_JEREMIAH, 8, 13, 9, 23 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_ASHKENAZ[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_POZNAN[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_ITALKI[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_FRANKFURT[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_LITA[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_CHAYEY_ODOM[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_HAGRA[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_SEFARD[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_CHABAD[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_PURE_SEPHARDIM[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_PERSIA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_LIBYA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_MAGREB[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_ALGERIA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_ALGIERS[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_MOROCCO[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_FES[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_MARRAKESH[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_AGADIR[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_TOSHBIM[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_DJERBA[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_BAVLIM[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
    { HC_BOOK_MICAH, 7, 18, 7, 20 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_TEIMAN[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_BALADI[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_SHAMI[] = {
    { HC_BOOK_HOSEA, 14, 2, 14, 10 },
};
static const hc_haftarah_ref HC_HAFT_S_TishaBeAv_AFTERNOON_ROMANIA[] = {
    { HC_BOOK_ISAIAH, 55, 6, 56, 8 },
};

const hc_special_haftarah HC_SPECIAL_HAFTAROT[] = {
    { .key = "ErevRoshChodesh_SHABBAT", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_ASHKENAZ, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_ASHKENAZ)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_ITALKI, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_ITALKI)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_FRANKFURT, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_FRANKFURT)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_LITA, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_LITA)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_CHAYEY_ODOM)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_HAGRA, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_HAGRA)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_SEFARD, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_SEFARD)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_CHABAD, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_CHABAD)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_MAGREB, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_MAGREB)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_ALGERIA, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_ALGERIA)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_MOROCCO, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_MOROCCO)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_FES, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_FES)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_MARRAKESH, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_MARRAKESH)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_TOSHBIM, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_TOSHBIM)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_DJERBA, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_DJERBA)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_BAVLIM, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_BAVLIM)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_TEIMAN, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_TEIMAN)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_BALADI, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_BALADI)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_SHAMI, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_SHAMI)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_SHAMI[0])) } },
    { .key = "ErevRoshChodesh_SHABBAT_ADDITION", .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_ADDITION_CHABAD, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_ADDITION_CHABAD)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_ADDITION_CHABAD[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_ErevRoshChodesh_SHABBAT_ADDITION_FES, (int)(sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_ADDITION_FES)/sizeof(HC_HAFT_S_ErevRoshChodesh_SHABBAT_ADDITION_FES[0])) } },
    { .key = "RoshChodesh_SHABBAT", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_RoshChodesh_SHABBAT_ASHKENAZ, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_ASHKENAZ)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_RoshChodesh_SHABBAT_ITALKI, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_ITALKI)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_RoshChodesh_SHABBAT_FRANKFURT, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_FRANKFURT)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_RoshChodesh_SHABBAT_LITA, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_LITA)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_RoshChodesh_SHABBAT_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_CHAYEY_ODOM)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_RoshChodesh_SHABBAT_HAGRA, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_HAGRA)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_RoshChodesh_SHABBAT_SEFARD, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_SEFARD)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_RoshChodesh_SHABBAT_CHABAD, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_CHABAD)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_RoshChodesh_SHABBAT_MAGREB, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_MAGREB)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_RoshChodesh_SHABBAT_ALGERIA, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_ALGERIA)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_RoshChodesh_SHABBAT_MOROCCO, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_MOROCCO)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_RoshChodesh_SHABBAT_FES, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_FES)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_RoshChodesh_SHABBAT_MARRAKESH, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_MARRAKESH)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_RoshChodesh_SHABBAT_TOSHBIM, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_TOSHBIM)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_RoshChodesh_SHABBAT_DJERBA, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_DJERBA)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_RoshChodesh_SHABBAT_BAVLIM, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_BAVLIM)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_RoshChodesh_SHABBAT_TEIMAN, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_TEIMAN)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_RoshChodesh_SHABBAT_BALADI, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_BALADI)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_RoshChodesh_SHABBAT_SHAMI, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_SHAMI)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_SHAMI[0])) } },
    { .key = "RoshChodesh_SHABBAT_ADDITION", .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_RoshChodesh_SHABBAT_ADDITION_CHABAD, (int)(sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_ADDITION_CHABAD)/sizeof(HC_HAFT_S_RoshChodesh_SHABBAT_ADDITION_CHABAD[0])) } },
    { .key = "RoshHashanah1_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_RoshHashanah1_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_RoshHashanah1_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_ITALKI)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_RoshHashanah1_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_RoshHashanah1_MAIN_LITA, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_LITA)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_RoshHashanah1_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_RoshHashanah1_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_HAGRA)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_RoshHashanah1_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_SEFARD)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_RoshHashanah1_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_CHABAD)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_RoshHashanah1_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_MAGREB)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_RoshHashanah1_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_ALGERIA)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_RoshHashanah1_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_MOROCCO)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_RoshHashanah1_MAIN_FES, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_FES)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_RoshHashanah1_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_RoshHashanah1_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_RoshHashanah1_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_DJERBA)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_RoshHashanah1_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_BAVLIM)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_RoshHashanah1_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_TEIMAN)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_RoshHashanah1_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_BALADI)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_RoshHashanah1_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_RoshHashanah1_MAIN_SHAMI)/sizeof(HC_HAFT_S_RoshHashanah1_MAIN_SHAMI[0])) } },
    { .key = "RoshHashanah2_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_RoshHashanah2_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_RoshHashanah2_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_ITALKI)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_RoshHashanah2_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_RoshHashanah2_MAIN_LITA, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_LITA)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_RoshHashanah2_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_RoshHashanah2_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_HAGRA)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_RoshHashanah2_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_SEFARD)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_RoshHashanah2_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_CHABAD)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_RoshHashanah2_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_MAGREB)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_RoshHashanah2_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_ALGERIA)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_RoshHashanah2_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_MOROCCO)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_RoshHashanah2_MAIN_FES, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_FES)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_RoshHashanah2_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_RoshHashanah2_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_RoshHashanah2_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_DJERBA)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_RoshHashanah2_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_BAVLIM)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_RoshHashanah2_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_TEIMAN)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_RoshHashanah2_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_BALADI)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_RoshHashanah2_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_RoshHashanah2_MAIN_SHAMI)/sizeof(HC_HAFT_S_RoshHashanah2_MAIN_SHAMI[0])) } },
    { .key = "YomKippur_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_YomKippur_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_YomKippur_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_YomKippur_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_ITALKI)/sizeof(HC_HAFT_S_YomKippur_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_YomKippur_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_YomKippur_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_YomKippur_MAIN_LITA, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_LITA)/sizeof(HC_HAFT_S_YomKippur_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_YomKippur_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_YomKippur_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_YomKippur_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_HAGRA)/sizeof(HC_HAFT_S_YomKippur_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_YomKippur_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_SEFARD)/sizeof(HC_HAFT_S_YomKippur_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_YomKippur_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_CHABAD)/sizeof(HC_HAFT_S_YomKippur_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_YomKippur_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_MAGREB)/sizeof(HC_HAFT_S_YomKippur_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_YomKippur_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_ALGERIA)/sizeof(HC_HAFT_S_YomKippur_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_YomKippur_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_MOROCCO)/sizeof(HC_HAFT_S_YomKippur_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_YomKippur_MAIN_FES, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_FES)/sizeof(HC_HAFT_S_YomKippur_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_YomKippur_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_YomKippur_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_YomKippur_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_YomKippur_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_YomKippur_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_DJERBA)/sizeof(HC_HAFT_S_YomKippur_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_YomKippur_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_BAVLIM)/sizeof(HC_HAFT_S_YomKippur_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_YomKippur_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_TEIMAN)/sizeof(HC_HAFT_S_YomKippur_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_YomKippur_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_BALADI)/sizeof(HC_HAFT_S_YomKippur_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_YomKippur_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_YomKippur_MAIN_SHAMI)/sizeof(HC_HAFT_S_YomKippur_MAIN_SHAMI[0])) } },
    { .key = "YomKippur_AFTERNOON", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_YomKippur_AFTERNOON_ASHKENAZ, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_ASHKENAZ)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_YomKippur_AFTERNOON_ITALKI, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_ITALKI)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_YomKippur_AFTERNOON_FRANKFURT, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_FRANKFURT)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_YomKippur_AFTERNOON_LITA, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_LITA)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_YomKippur_AFTERNOON_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_CHAYEY_ODOM)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_YomKippur_AFTERNOON_HAGRA, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_HAGRA)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_YomKippur_AFTERNOON_SEFARD, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_SEFARD)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_YomKippur_AFTERNOON_CHABAD, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_CHABAD)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_YomKippur_AFTERNOON_MAGREB, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_MAGREB)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_YomKippur_AFTERNOON_ALGERIA, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_ALGERIA)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_YomKippur_AFTERNOON_MOROCCO, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_MOROCCO)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_YomKippur_AFTERNOON_FES, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_FES)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_YomKippur_AFTERNOON_MARRAKESH, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_MARRAKESH)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_YomKippur_AFTERNOON_TOSHBIM, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_TOSHBIM)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_YomKippur_AFTERNOON_DJERBA, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_DJERBA)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_YomKippur_AFTERNOON_BAVLIM, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_BAVLIM)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_YomKippur_AFTERNOON_TEIMAN, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_TEIMAN)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_YomKippur_AFTERNOON_BALADI, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_BALADI)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_YomKippur_AFTERNOON_SHAMI, (int)(sizeof(HC_HAFT_S_YomKippur_AFTERNOON_SHAMI)/sizeof(HC_HAFT_S_YomKippur_AFTERNOON_SHAMI[0])) } },
    { .key = "Succos1_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_Succos1_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_Succos1_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_Succos1_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_ITALKI)/sizeof(HC_HAFT_S_Succos1_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_Succos1_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_Succos1_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_Succos1_MAIN_LITA, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_LITA)/sizeof(HC_HAFT_S_Succos1_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_Succos1_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_Succos1_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_Succos1_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_HAGRA)/sizeof(HC_HAFT_S_Succos1_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_Succos1_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_SEFARD)/sizeof(HC_HAFT_S_Succos1_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_Succos1_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_CHABAD)/sizeof(HC_HAFT_S_Succos1_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_Succos1_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_MAGREB)/sizeof(HC_HAFT_S_Succos1_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_Succos1_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_ALGERIA)/sizeof(HC_HAFT_S_Succos1_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_Succos1_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_MOROCCO)/sizeof(HC_HAFT_S_Succos1_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_Succos1_MAIN_FES, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_FES)/sizeof(HC_HAFT_S_Succos1_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_Succos1_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_Succos1_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_Succos1_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_Succos1_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_Succos1_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_DJERBA)/sizeof(HC_HAFT_S_Succos1_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_Succos1_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_BAVLIM)/sizeof(HC_HAFT_S_Succos1_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_Succos1_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_TEIMAN)/sizeof(HC_HAFT_S_Succos1_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_Succos1_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_BALADI)/sizeof(HC_HAFT_S_Succos1_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_Succos1_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_Succos1_MAIN_SHAMI)/sizeof(HC_HAFT_S_Succos1_MAIN_SHAMI[0])) } },
    { .key = "Succos2_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_Succos2_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_Succos2_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_Succos2_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_ITALKI)/sizeof(HC_HAFT_S_Succos2_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_Succos2_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_Succos2_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_Succos2_MAIN_LITA, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_LITA)/sizeof(HC_HAFT_S_Succos2_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_Succos2_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_Succos2_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_Succos2_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_HAGRA)/sizeof(HC_HAFT_S_Succos2_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_Succos2_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_SEFARD)/sizeof(HC_HAFT_S_Succos2_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_Succos2_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_CHABAD)/sizeof(HC_HAFT_S_Succos2_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_Succos2_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_MAGREB)/sizeof(HC_HAFT_S_Succos2_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_Succos2_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_ALGERIA)/sizeof(HC_HAFT_S_Succos2_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_Succos2_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_MOROCCO)/sizeof(HC_HAFT_S_Succos2_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_Succos2_MAIN_FES, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_FES)/sizeof(HC_HAFT_S_Succos2_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_Succos2_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_Succos2_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_Succos2_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_Succos2_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_Succos2_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_DJERBA)/sizeof(HC_HAFT_S_Succos2_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_Succos2_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_BAVLIM)/sizeof(HC_HAFT_S_Succos2_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_Succos2_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_TEIMAN)/sizeof(HC_HAFT_S_Succos2_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_Succos2_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_BALADI)/sizeof(HC_HAFT_S_Succos2_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_Succos2_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_Succos2_MAIN_SHAMI)/sizeof(HC_HAFT_S_Succos2_MAIN_SHAMI[0])) } },
    { .key = "SuccosIntermediate_SHABBAT", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_ASHKENAZ, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_ASHKENAZ)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_ITALKI, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_ITALKI)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_FRANKFURT, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_FRANKFURT)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_LITA, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_LITA)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_CHAYEY_ODOM)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_HAGRA, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_HAGRA)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_SEFARD, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_SEFARD)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_CHABAD, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_CHABAD)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_MAGREB, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_MAGREB)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_ALGERIA, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_ALGERIA)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_MOROCCO, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_MOROCCO)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_FES, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_FES)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_MARRAKESH, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_MARRAKESH)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_TOSHBIM, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_TOSHBIM)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_DJERBA, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_DJERBA)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_BAVLIM, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_BAVLIM)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_TEIMAN, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_TEIMAN)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_BALADI, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_BALADI)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_SuccosIntermediate_SHABBAT_SHAMI, (int)(sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_SHAMI)/sizeof(HC_HAFT_S_SuccosIntermediate_SHABBAT_SHAMI[0])) } },
    { .key = "SheminiAtzeres_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_SheminiAtzeres_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_SheminiAtzeres_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_ITALKI)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_SheminiAtzeres_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_SheminiAtzeres_MAIN_LITA, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_LITA)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_SheminiAtzeres_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_SheminiAtzeres_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_HAGRA)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_SheminiAtzeres_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_SEFARD)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_SheminiAtzeres_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_CHABAD)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_SheminiAtzeres_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_MAGREB)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_SheminiAtzeres_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_ALGERIA)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_SheminiAtzeres_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_MOROCCO)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_SheminiAtzeres_MAIN_FES, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_FES)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_SheminiAtzeres_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_SheminiAtzeres_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_SheminiAtzeres_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_DJERBA)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_SheminiAtzeres_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_BAVLIM)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_SheminiAtzeres_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_TEIMAN)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_SheminiAtzeres_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_BALADI)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_SheminiAtzeres_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_SHAMI)/sizeof(HC_HAFT_S_SheminiAtzeres_MAIN_SHAMI[0])) } },
    { .key = "Chanukah_SHABBAT_1", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_Chanukah_SHABBAT_1_ASHKENAZ, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_ASHKENAZ)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_Chanukah_SHABBAT_1_ITALKI, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_ITALKI)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_Chanukah_SHABBAT_1_FRANKFURT, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_FRANKFURT)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_Chanukah_SHABBAT_1_LITA, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_LITA)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_Chanukah_SHABBAT_1_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_CHAYEY_ODOM)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_Chanukah_SHABBAT_1_HAGRA, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_HAGRA)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_Chanukah_SHABBAT_1_SEFARD, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_SEFARD)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_Chanukah_SHABBAT_1_CHABAD, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_CHABAD)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_Chanukah_SHABBAT_1_MAGREB, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_MAGREB)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_Chanukah_SHABBAT_1_ALGERIA, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_ALGERIA)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_Chanukah_SHABBAT_1_MOROCCO, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_MOROCCO)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_Chanukah_SHABBAT_1_FES, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_FES)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_Chanukah_SHABBAT_1_MARRAKESH, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_MARRAKESH)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_Chanukah_SHABBAT_1_TOSHBIM, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_TOSHBIM)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_Chanukah_SHABBAT_1_DJERBA, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_DJERBA)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_Chanukah_SHABBAT_1_BAVLIM, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_BAVLIM)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_Chanukah_SHABBAT_1_TEIMAN, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_TEIMAN)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_Chanukah_SHABBAT_1_BALADI, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_BALADI)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_Chanukah_SHABBAT_1_SHAMI, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_SHAMI)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_1_SHAMI[0])) } },
    { .key = "Chanukah_SHABBAT_2", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_Chanukah_SHABBAT_2_ASHKENAZ, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_ASHKENAZ)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_Chanukah_SHABBAT_2_ITALKI, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_ITALKI)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_Chanukah_SHABBAT_2_FRANKFURT, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_FRANKFURT)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_Chanukah_SHABBAT_2_LITA, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_LITA)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_Chanukah_SHABBAT_2_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_CHAYEY_ODOM)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_Chanukah_SHABBAT_2_HAGRA, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_HAGRA)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_Chanukah_SHABBAT_2_SEFARD, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_SEFARD)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_Chanukah_SHABBAT_2_CHABAD, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_CHABAD)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_Chanukah_SHABBAT_2_MAGREB, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_MAGREB)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_Chanukah_SHABBAT_2_ALGERIA, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_ALGERIA)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_Chanukah_SHABBAT_2_MOROCCO, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_MOROCCO)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_Chanukah_SHABBAT_2_FES, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_FES)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_Chanukah_SHABBAT_2_MARRAKESH, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_MARRAKESH)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_Chanukah_SHABBAT_2_TOSHBIM, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_TOSHBIM)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_Chanukah_SHABBAT_2_DJERBA, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_DJERBA)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_Chanukah_SHABBAT_2_BAVLIM, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_BAVLIM)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_Chanukah_SHABBAT_2_TEIMAN, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_TEIMAN)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_Chanukah_SHABBAT_2_BALADI, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_BALADI)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_Chanukah_SHABBAT_2_SHAMI, (int)(sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_SHAMI)/sizeof(HC_HAFT_S_Chanukah_SHABBAT_2_SHAMI[0])) } },
    { .key = "ParshasShekalim_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_ParshasShekalim_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_ParshasShekalim_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_ITALKI)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_ParshasShekalim_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_ParshasShekalim_MAIN_LITA, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_LITA)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_ParshasShekalim_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_ParshasShekalim_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_HAGRA)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_ParshasShekalim_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_SEFARD)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_ParshasShekalim_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_CHABAD)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_ParshasShekalim_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_MAGREB)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_ParshasShekalim_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_ALGERIA)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_ParshasShekalim_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_MOROCCO)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_ParshasShekalim_MAIN_FES, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_FES)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_ParshasShekalim_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_ParshasShekalim_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_ParshasShekalim_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_DJERBA)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_ParshasShekalim_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_BAVLIM)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_ParshasShekalim_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_TEIMAN)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_ParshasShekalim_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_BALADI)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_ParshasShekalim_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_ParshasShekalim_MAIN_SHAMI)/sizeof(HC_HAFT_S_ParshasShekalim_MAIN_SHAMI[0])) } },
    { .key = "ParshasZachor_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_ParshasZachor_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_ParshasZachor_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_ITALKI)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_ParshasZachor_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_ParshasZachor_MAIN_LITA, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_LITA)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_ParshasZachor_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_ParshasZachor_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_HAGRA)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_ParshasZachor_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_SEFARD)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_ParshasZachor_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_CHABAD)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_ParshasZachor_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_MAGREB)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_ParshasZachor_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_ALGERIA)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_ParshasZachor_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_MOROCCO)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_ParshasZachor_MAIN_FES, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_FES)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_ParshasZachor_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_ParshasZachor_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_ParshasZachor_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_DJERBA)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_ParshasZachor_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_BAVLIM)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_ParshasZachor_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_TEIMAN)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_ParshasZachor_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_BALADI)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_ParshasZachor_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_ParshasZachor_MAIN_SHAMI)/sizeof(HC_HAFT_S_ParshasZachor_MAIN_SHAMI[0])) } },
    { .key = "ParshasParah_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_ParshasParah_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_ParshasParah_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_ParshasParah_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_ITALKI)/sizeof(HC_HAFT_S_ParshasParah_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_ParshasParah_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_ParshasParah_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_ParshasParah_MAIN_LITA, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_LITA)/sizeof(HC_HAFT_S_ParshasParah_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_ParshasParah_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_ParshasParah_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_ParshasParah_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_HAGRA)/sizeof(HC_HAFT_S_ParshasParah_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_ParshasParah_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_SEFARD)/sizeof(HC_HAFT_S_ParshasParah_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_ParshasParah_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_CHABAD)/sizeof(HC_HAFT_S_ParshasParah_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_ParshasParah_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_MAGREB)/sizeof(HC_HAFT_S_ParshasParah_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_ParshasParah_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_ALGERIA)/sizeof(HC_HAFT_S_ParshasParah_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_ParshasParah_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_MOROCCO)/sizeof(HC_HAFT_S_ParshasParah_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_ParshasParah_MAIN_FES, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_FES)/sizeof(HC_HAFT_S_ParshasParah_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_ParshasParah_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_ParshasParah_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_ParshasParah_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_ParshasParah_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_ParshasParah_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_DJERBA)/sizeof(HC_HAFT_S_ParshasParah_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_ParshasParah_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_BAVLIM)/sizeof(HC_HAFT_S_ParshasParah_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_ParshasParah_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_TEIMAN)/sizeof(HC_HAFT_S_ParshasParah_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_ParshasParah_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_BALADI)/sizeof(HC_HAFT_S_ParshasParah_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_ParshasParah_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_ParshasParah_MAIN_SHAMI)/sizeof(HC_HAFT_S_ParshasParah_MAIN_SHAMI[0])) } },
    { .key = "ParshasHachodesh_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_ParshasHachodesh_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_ParshasHachodesh_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_ITALKI)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_ParshasHachodesh_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_ParshasHachodesh_MAIN_LITA, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_LITA)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_ParshasHachodesh_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_ParshasHachodesh_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_HAGRA)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_ParshasHachodesh_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_SEFARD)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_ParshasHachodesh_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_CHABAD)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_ParshasHachodesh_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_MAGREB)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_ParshasHachodesh_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_ALGERIA)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_ParshasHachodesh_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_MOROCCO)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_ParshasHachodesh_MAIN_FES, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_FES)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_ParshasHachodesh_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_ParshasHachodesh_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_ParshasHachodesh_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_DJERBA)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_ParshasHachodesh_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_BAVLIM)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_ParshasHachodesh_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_TEIMAN)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_ParshasHachodesh_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_BALADI)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_ParshasHachodesh_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_SHAMI)/sizeof(HC_HAFT_S_ParshasHachodesh_MAIN_SHAMI[0])) } },
    { .key = "ShabbosHagodol_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_ShabbosHagodol_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_ShabbosHagodol_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_ITALKI)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_ShabbosHagodol_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_ShabbosHagodol_MAIN_LITA, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_LITA)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_ShabbosHagodol_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_ShabbosHagodol_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_HAGRA)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_ShabbosHagodol_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_SEFARD)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_ShabbosHagodol_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_CHABAD)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_ShabbosHagodol_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_MAGREB)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_ShabbosHagodol_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_ALGERIA)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_ShabbosHagodol_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_MOROCCO)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_ShabbosHagodol_MAIN_FES, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_FES)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_ShabbosHagodol_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_ShabbosHagodol_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_ShabbosHagodol_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_DJERBA)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_ShabbosHagodol_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_BAVLIM)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_ShabbosHagodol_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_TEIMAN)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_ShabbosHagodol_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_BALADI)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_ShabbosHagodol_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_SHAMI)/sizeof(HC_HAFT_S_ShabbosHagodol_MAIN_SHAMI[0])) } },
    { .key = "PesachIntermediate_SHABBAT", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_PesachIntermediate_SHABBAT_ASHKENAZ, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_ASHKENAZ)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_PesachIntermediate_SHABBAT_ITALKI, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_ITALKI)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_PesachIntermediate_SHABBAT_FRANKFURT, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_FRANKFURT)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_PesachIntermediate_SHABBAT_LITA, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_LITA)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_PesachIntermediate_SHABBAT_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_CHAYEY_ODOM)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_PesachIntermediate_SHABBAT_HAGRA, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_HAGRA)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_PesachIntermediate_SHABBAT_SEFARD, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_SEFARD)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_PesachIntermediate_SHABBAT_CHABAD, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_CHABAD)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_PesachIntermediate_SHABBAT_MAGREB, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_MAGREB)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_PesachIntermediate_SHABBAT_ALGERIA, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_ALGERIA)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_PesachIntermediate_SHABBAT_MOROCCO, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_MOROCCO)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_PesachIntermediate_SHABBAT_FES, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_FES)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_PesachIntermediate_SHABBAT_MARRAKESH, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_MARRAKESH)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_PesachIntermediate_SHABBAT_TOSHBIM, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_TOSHBIM)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_PesachIntermediate_SHABBAT_DJERBA, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_DJERBA)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_PesachIntermediate_SHABBAT_BAVLIM, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_BAVLIM)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_PesachIntermediate_SHABBAT_TEIMAN, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_TEIMAN)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_PesachIntermediate_SHABBAT_BALADI, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_BALADI)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_PesachIntermediate_SHABBAT_SHAMI, (int)(sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_SHAMI)/sizeof(HC_HAFT_S_PesachIntermediate_SHABBAT_SHAMI[0])) } },
    { .key = "Pesach1_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_Pesach1_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_Pesach1_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_Pesach1_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_ITALKI)/sizeof(HC_HAFT_S_Pesach1_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_Pesach1_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_Pesach1_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_Pesach1_MAIN_LITA, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_LITA)/sizeof(HC_HAFT_S_Pesach1_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_Pesach1_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_Pesach1_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_Pesach1_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_HAGRA)/sizeof(HC_HAFT_S_Pesach1_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_Pesach1_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_SEFARD)/sizeof(HC_HAFT_S_Pesach1_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_Pesach1_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_CHABAD)/sizeof(HC_HAFT_S_Pesach1_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_Pesach1_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_MAGREB)/sizeof(HC_HAFT_S_Pesach1_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_Pesach1_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_ALGERIA)/sizeof(HC_HAFT_S_Pesach1_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_Pesach1_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_MOROCCO)/sizeof(HC_HAFT_S_Pesach1_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_Pesach1_MAIN_FES, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_FES)/sizeof(HC_HAFT_S_Pesach1_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_Pesach1_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_Pesach1_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_Pesach1_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_Pesach1_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_Pesach1_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_DJERBA)/sizeof(HC_HAFT_S_Pesach1_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_Pesach1_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_BAVLIM)/sizeof(HC_HAFT_S_Pesach1_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_Pesach1_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_TEIMAN)/sizeof(HC_HAFT_S_Pesach1_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_Pesach1_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_BALADI)/sizeof(HC_HAFT_S_Pesach1_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_Pesach1_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_Pesach1_MAIN_SHAMI)/sizeof(HC_HAFT_S_Pesach1_MAIN_SHAMI[0])) } },
    { .key = "Pesach2_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_Pesach2_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_Pesach2_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_Pesach2_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_ITALKI)/sizeof(HC_HAFT_S_Pesach2_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_Pesach2_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_Pesach2_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_Pesach2_MAIN_LITA, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_LITA)/sizeof(HC_HAFT_S_Pesach2_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_Pesach2_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_Pesach2_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_Pesach2_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_HAGRA)/sizeof(HC_HAFT_S_Pesach2_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_Pesach2_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_SEFARD)/sizeof(HC_HAFT_S_Pesach2_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_Pesach2_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_CHABAD)/sizeof(HC_HAFT_S_Pesach2_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_Pesach2_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_MAGREB)/sizeof(HC_HAFT_S_Pesach2_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_Pesach2_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_ALGERIA)/sizeof(HC_HAFT_S_Pesach2_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_Pesach2_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_MOROCCO)/sizeof(HC_HAFT_S_Pesach2_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_Pesach2_MAIN_FES, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_FES)/sizeof(HC_HAFT_S_Pesach2_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_Pesach2_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_Pesach2_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_Pesach2_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_Pesach2_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_Pesach2_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_DJERBA)/sizeof(HC_HAFT_S_Pesach2_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_Pesach2_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_BAVLIM)/sizeof(HC_HAFT_S_Pesach2_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_Pesach2_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_TEIMAN)/sizeof(HC_HAFT_S_Pesach2_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_Pesach2_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_BALADI)/sizeof(HC_HAFT_S_Pesach2_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_Pesach2_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_Pesach2_MAIN_SHAMI)/sizeof(HC_HAFT_S_Pesach2_MAIN_SHAMI[0])) } },
    { .key = "Pesach7_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_Pesach7_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_Pesach7_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_Pesach7_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_ITALKI)/sizeof(HC_HAFT_S_Pesach7_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_Pesach7_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_Pesach7_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_Pesach7_MAIN_LITA, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_LITA)/sizeof(HC_HAFT_S_Pesach7_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_Pesach7_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_Pesach7_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_Pesach7_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_HAGRA)/sizeof(HC_HAFT_S_Pesach7_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_Pesach7_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_SEFARD)/sizeof(HC_HAFT_S_Pesach7_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_Pesach7_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_CHABAD)/sizeof(HC_HAFT_S_Pesach7_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_Pesach7_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_MAGREB)/sizeof(HC_HAFT_S_Pesach7_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_Pesach7_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_ALGERIA)/sizeof(HC_HAFT_S_Pesach7_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_Pesach7_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_MOROCCO)/sizeof(HC_HAFT_S_Pesach7_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_Pesach7_MAIN_FES, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_FES)/sizeof(HC_HAFT_S_Pesach7_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_Pesach7_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_Pesach7_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_Pesach7_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_Pesach7_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_Pesach7_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_DJERBA)/sizeof(HC_HAFT_S_Pesach7_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_Pesach7_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_BAVLIM)/sizeof(HC_HAFT_S_Pesach7_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_Pesach7_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_TEIMAN)/sizeof(HC_HAFT_S_Pesach7_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_Pesach7_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_BALADI)/sizeof(HC_HAFT_S_Pesach7_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_Pesach7_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_Pesach7_MAIN_SHAMI)/sizeof(HC_HAFT_S_Pesach7_MAIN_SHAMI[0])) } },
    { .key = "Pesach8_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_Pesach8_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_Pesach8_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_Pesach8_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_ITALKI)/sizeof(HC_HAFT_S_Pesach8_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_Pesach8_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_Pesach8_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_Pesach8_MAIN_LITA, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_LITA)/sizeof(HC_HAFT_S_Pesach8_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_Pesach8_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_Pesach8_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_Pesach8_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_HAGRA)/sizeof(HC_HAFT_S_Pesach8_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_Pesach8_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_SEFARD)/sizeof(HC_HAFT_S_Pesach8_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_Pesach8_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_CHABAD)/sizeof(HC_HAFT_S_Pesach8_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_Pesach8_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_MAGREB)/sizeof(HC_HAFT_S_Pesach8_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_Pesach8_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_ALGERIA)/sizeof(HC_HAFT_S_Pesach8_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_Pesach8_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_MOROCCO)/sizeof(HC_HAFT_S_Pesach8_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_Pesach8_MAIN_FES, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_FES)/sizeof(HC_HAFT_S_Pesach8_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_Pesach8_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_Pesach8_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_Pesach8_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_Pesach8_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_Pesach8_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_DJERBA)/sizeof(HC_HAFT_S_Pesach8_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_Pesach8_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_BAVLIM)/sizeof(HC_HAFT_S_Pesach8_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_Pesach8_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_TEIMAN)/sizeof(HC_HAFT_S_Pesach8_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_Pesach8_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_BALADI)/sizeof(HC_HAFT_S_Pesach8_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_Pesach8_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_Pesach8_MAIN_SHAMI)/sizeof(HC_HAFT_S_Pesach8_MAIN_SHAMI[0])) } },
    { .key = "Shavuos1_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_Shavuos1_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_Shavuos1_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_Shavuos1_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_ITALKI)/sizeof(HC_HAFT_S_Shavuos1_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_Shavuos1_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_Shavuos1_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_Shavuos1_MAIN_LITA, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_LITA)/sizeof(HC_HAFT_S_Shavuos1_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_Shavuos1_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_Shavuos1_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_Shavuos1_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_HAGRA)/sizeof(HC_HAFT_S_Shavuos1_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_Shavuos1_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_SEFARD)/sizeof(HC_HAFT_S_Shavuos1_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_Shavuos1_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_CHABAD)/sizeof(HC_HAFT_S_Shavuos1_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_Shavuos1_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_MAGREB)/sizeof(HC_HAFT_S_Shavuos1_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_Shavuos1_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_ALGERIA)/sizeof(HC_HAFT_S_Shavuos1_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_Shavuos1_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_MOROCCO)/sizeof(HC_HAFT_S_Shavuos1_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_Shavuos1_MAIN_FES, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_FES)/sizeof(HC_HAFT_S_Shavuos1_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_Shavuos1_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_Shavuos1_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_Shavuos1_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_Shavuos1_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_Shavuos1_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_DJERBA)/sizeof(HC_HAFT_S_Shavuos1_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_Shavuos1_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_BAVLIM)/sizeof(HC_HAFT_S_Shavuos1_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_Shavuos1_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_TEIMAN)/sizeof(HC_HAFT_S_Shavuos1_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_Shavuos1_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_BALADI)/sizeof(HC_HAFT_S_Shavuos1_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_Shavuos1_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_Shavuos1_MAIN_SHAMI)/sizeof(HC_HAFT_S_Shavuos1_MAIN_SHAMI[0])) } },
    { .key = "Shavuos2_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_Shavuos2_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_Shavuos2_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_Shavuos2_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_ITALKI)/sizeof(HC_HAFT_S_Shavuos2_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_Shavuos2_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_Shavuos2_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_Shavuos2_MAIN_LITA, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_LITA)/sizeof(HC_HAFT_S_Shavuos2_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_Shavuos2_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_Shavuos2_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_Shavuos2_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_HAGRA)/sizeof(HC_HAFT_S_Shavuos2_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_Shavuos2_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_SEFARD)/sizeof(HC_HAFT_S_Shavuos2_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_Shavuos2_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_CHABAD)/sizeof(HC_HAFT_S_Shavuos2_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_Shavuos2_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_MAGREB)/sizeof(HC_HAFT_S_Shavuos2_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_Shavuos2_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_ALGERIA)/sizeof(HC_HAFT_S_Shavuos2_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_Shavuos2_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_MOROCCO)/sizeof(HC_HAFT_S_Shavuos2_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_Shavuos2_MAIN_FES, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_FES)/sizeof(HC_HAFT_S_Shavuos2_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_Shavuos2_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_Shavuos2_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_Shavuos2_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_Shavuos2_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_Shavuos2_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_DJERBA)/sizeof(HC_HAFT_S_Shavuos2_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_Shavuos2_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_BAVLIM)/sizeof(HC_HAFT_S_Shavuos2_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_Shavuos2_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_TEIMAN)/sizeof(HC_HAFT_S_Shavuos2_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_Shavuos2_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_BALADI)/sizeof(HC_HAFT_S_Shavuos2_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_Shavuos2_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_Shavuos2_MAIN_SHAMI)/sizeof(HC_HAFT_S_Shavuos2_MAIN_SHAMI[0])) } },
    { .key = "Fast_AFTERNOON_DEFAULT", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ASHKENAZ, (int)(sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ASHKENAZ)/sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ITALKI, (int)(sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ITALKI)/sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_Fast_AFTERNOON_DEFAULT_FRANKFURT, (int)(sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_FRANKFURT)/sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_Fast_AFTERNOON_DEFAULT_LITA, (int)(sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_LITA)/sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_Fast_AFTERNOON_DEFAULT_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_CHAYEY_ODOM)/sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_Fast_AFTERNOON_DEFAULT_HAGRA, (int)(sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_HAGRA)/sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_HAGRA[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_Fast_AFTERNOON_DEFAULT_CHABAD, (int)(sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_CHABAD)/sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_CHABAD[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ALGERIA, (int)(sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ALGERIA)/sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_ALGERIA[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_Fast_AFTERNOON_DEFAULT_MARRAKESH, (int)(sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_MARRAKESH)/sizeof(HC_HAFT_S_Fast_AFTERNOON_DEFAULT_MARRAKESH[0])) } },
    { .key = "FastOfGedalia_AFTERNOON_EXCEPTIONS", .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_ALGERIA, (int)(sizeof(HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_ALGERIA)/sizeof(HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_MOROCCO, (int)(sizeof(HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_MOROCCO)/sizeof(HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_FES, (int)(sizeof(HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_FES)/sizeof(HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_MARRAKESH, (int)(sizeof(HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_MARRAKESH)/sizeof(HC_HAFT_S_FastOfGedalia_AFTERNOON_EXCEPTIONS_MARRAKESH[0])) } },
    { .key = "TishaBeAv_MAIN", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_TishaBeAv_MAIN_ASHKENAZ, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_ASHKENAZ)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_TishaBeAv_MAIN_ITALKI, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_ITALKI)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_TishaBeAv_MAIN_FRANKFURT, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_FRANKFURT)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_TishaBeAv_MAIN_LITA, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_LITA)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_TishaBeAv_MAIN_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_CHAYEY_ODOM)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_TishaBeAv_MAIN_HAGRA, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_HAGRA)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_TishaBeAv_MAIN_SEFARD, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_SEFARD)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_TishaBeAv_MAIN_CHABAD, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_CHABAD)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_TishaBeAv_MAIN_MAGREB, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_MAGREB)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_TishaBeAv_MAIN_ALGERIA, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_ALGERIA)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_TishaBeAv_MAIN_MOROCCO, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_MOROCCO)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_TishaBeAv_MAIN_FES, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_FES)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_TishaBeAv_MAIN_MARRAKESH, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_MARRAKESH)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_TishaBeAv_MAIN_TOSHBIM, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_TOSHBIM)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_TishaBeAv_MAIN_DJERBA, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_DJERBA)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_TishaBeAv_MAIN_BAVLIM, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_BAVLIM)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_TishaBeAv_MAIN_TEIMAN, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_TEIMAN)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_TishaBeAv_MAIN_BALADI, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_BALADI)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_TishaBeAv_MAIN_SHAMI, (int)(sizeof(HC_HAFT_S_TishaBeAv_MAIN_SHAMI)/sizeof(HC_HAFT_S_TishaBeAv_MAIN_SHAMI[0])) } },
    { .key = "TishaBeAv_AFTERNOON", .customs[HC_CUSTOM_ASHKENAZ] = { HC_HAFT_S_TishaBeAv_AFTERNOON_ASHKENAZ, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_ASHKENAZ)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_ASHKENAZ[0])) }, .customs[HC_CUSTOM_ITALKI] = { HC_HAFT_S_TishaBeAv_AFTERNOON_ITALKI, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_ITALKI)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_ITALKI[0])) }, .customs[HC_CUSTOM_FRANKFURT] = { HC_HAFT_S_TishaBeAv_AFTERNOON_FRANKFURT, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_FRANKFURT)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_FRANKFURT[0])) }, .customs[HC_CUSTOM_LITA] = { HC_HAFT_S_TishaBeAv_AFTERNOON_LITA, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_LITA)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_LITA[0])) }, .customs[HC_CUSTOM_CHAYEY_ODOM] = { HC_HAFT_S_TishaBeAv_AFTERNOON_CHAYEY_ODOM, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_CHAYEY_ODOM)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_CHAYEY_ODOM[0])) }, .customs[HC_CUSTOM_HAGRA] = { HC_HAFT_S_TishaBeAv_AFTERNOON_HAGRA, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_HAGRA)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_HAGRA[0])) }, .customs[HC_CUSTOM_SEFARD] = { HC_HAFT_S_TishaBeAv_AFTERNOON_SEFARD, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_SEFARD)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_SEFARD[0])) }, .customs[HC_CUSTOM_CHABAD] = { HC_HAFT_S_TishaBeAv_AFTERNOON_CHABAD, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_CHABAD)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_CHABAD[0])) }, .customs[HC_CUSTOM_MAGREB] = { HC_HAFT_S_TishaBeAv_AFTERNOON_MAGREB, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_MAGREB)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_MAGREB[0])) }, .customs[HC_CUSTOM_ALGERIA] = { HC_HAFT_S_TishaBeAv_AFTERNOON_ALGERIA, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_ALGERIA)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_ALGERIA[0])) }, .customs[HC_CUSTOM_MOROCCO] = { HC_HAFT_S_TishaBeAv_AFTERNOON_MOROCCO, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_MOROCCO)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_MOROCCO[0])) }, .customs[HC_CUSTOM_FES] = { HC_HAFT_S_TishaBeAv_AFTERNOON_FES, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_FES)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_FES[0])) }, .customs[HC_CUSTOM_MARRAKESH] = { HC_HAFT_S_TishaBeAv_AFTERNOON_MARRAKESH, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_MARRAKESH)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_MARRAKESH[0])) }, .customs[HC_CUSTOM_TOSHBIM] = { HC_HAFT_S_TishaBeAv_AFTERNOON_TOSHBIM, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_TOSHBIM)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_TOSHBIM[0])) }, .customs[HC_CUSTOM_DJERBA] = { HC_HAFT_S_TishaBeAv_AFTERNOON_DJERBA, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_DJERBA)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_DJERBA[0])) }, .customs[HC_CUSTOM_BAVLIM] = { HC_HAFT_S_TishaBeAv_AFTERNOON_BAVLIM, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_BAVLIM)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_BAVLIM[0])) }, .customs[HC_CUSTOM_TEIMAN] = { HC_HAFT_S_TishaBeAv_AFTERNOON_TEIMAN, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_TEIMAN)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_TEIMAN[0])) }, .customs[HC_CUSTOM_BALADI] = { HC_HAFT_S_TishaBeAv_AFTERNOON_BALADI, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_BALADI)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_BALADI[0])) }, .customs[HC_CUSTOM_SHAMI] = { HC_HAFT_S_TishaBeAv_AFTERNOON_SHAMI, (int)(sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_SHAMI)/sizeof(HC_HAFT_S_TishaBeAv_AFTERNOON_SHAMI[0])) } },
};
const int HC_SPECIAL_HAFTAROT_COUNT = 30;

const hc_special_haftarah *hc_special_haftarah_lookup(const char *key) {
    if (!key) return NULL;
    for (int i = 0; i < HC_SPECIAL_HAFTAROT_COUNT; i++) {
        if (strcmp(HC_SPECIAL_HAFTAROT[i].key, key) == 0)
            return &HC_SPECIAL_HAFTAROT[i];
    }
    return NULL;
}
