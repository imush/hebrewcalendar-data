/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

#ifndef HC_GENERATED_HAFTAROT_DATA_H_
#define HC_GENERATED_HAFTAROT_DATA_H_

#include "parshiot.h"
#include <stdint.h>

/* All 18 exposed customs (opentorah's Custom.xml minus "Common"). */
typedef enum hc_custom {
    HC_CUSTOM_ASHKENAZ,
    HC_CUSTOM_ITALKI,
    HC_CUSTOM_FRANKFURT,
    HC_CUSTOM_LITA,
    HC_CUSTOM_CHAYEY_ODOM,
    HC_CUSTOM_HAGRA,
    HC_CUSTOM_SEFARD,
    HC_CUSTOM_CHABAD,
    HC_CUSTOM_MAGREB,
    HC_CUSTOM_ALGERIA,
    HC_CUSTOM_MOROCCO,
    HC_CUSTOM_FES,
    HC_CUSTOM_MARRAKESH,
    HC_CUSTOM_TOSHBIM,
    HC_CUSTOM_DJERBA,
    HC_CUSTOM_BAVLIM,
    HC_CUSTOM_TEIMAN,
    HC_CUSTOM_BALADI,
    HC_CUSTOM_SHAMI,
    HC_CUSTOM_COUNT
} hc_custom;

/* Books of Tanach used by haftarah references. */
typedef enum hc_tanach_book {
    HC_BOOK_NONE = 0,
    HC_BOOK_GENESIS,
    HC_BOOK_EXODUS,
    HC_BOOK_LEVITICUS,
    HC_BOOK_NUMBERS,
    HC_BOOK_DEUTERONOMY,
    HC_BOOK_JOSHUA,
    HC_BOOK_JUDGES,
    HC_BOOK_I_SAMUEL,
    HC_BOOK_II_SAMUEL,
    HC_BOOK_I_KINGS,
    HC_BOOK_II_KINGS,
    HC_BOOK_ISAIAH,
    HC_BOOK_JEREMIAH,
    HC_BOOK_EZEKIEL,
    HC_BOOK_HOSEA,
    HC_BOOK_JOEL,
    HC_BOOK_AMOS,
    HC_BOOK_OBADIAH,
    HC_BOOK_JONAH,
    HC_BOOK_MICAH,
    HC_BOOK_NAHUM,
    HC_BOOK_HABAKKUK,
    HC_BOOK_ZEPHANIAH,
    HC_BOOK_HAGGAI,
    HC_BOOK_ZECHARIAH,
    HC_BOOK_MALACHI,
    HC_BOOK_COUNT
} hc_tanach_book;

/* English name of a Tanach book (NULL for HC_BOOK_NONE). Used to build
 * Sefaria URLs on the consumer side. */
const char *hc_tanach_book_name(hc_tanach_book b);

/* One reference span within a (possibly multi-part) haftarah reading. */
typedef struct {
    uint8_t  book;      /* hc_tanach_book */
    uint16_t from_ch, from_v, to_ch, to_v;
} hc_haftarah_ref;

/* Multi-part haftarah spans: a pointer + a count. */
typedef struct {
    const hc_haftarah_ref *refs;
    int refs_count;
} hc_haftarah_spans;

/* Weekly haftarah by parsha × custom. Zero-length spans (refs_count == 0)
 * signal 'no data' — should not occur for our 54 × 18 grid.
 * Parsha index is the hc_parsha enum value (VEZOT_HABRACHA included). */
extern const hc_haftarah_spans HC_HAFTAROT_WEEKLY[HC_PARSHA_COUNT][HC_CUSTOM_COUNT];

/* Special-day haftarot: opentorah's SpecialReadings entries
 * (RoshChodesh, ParshasShekalim, YomKippur, ...). Keyed by an
 * "Occasion_VARIANT" string that mirrors the Java/Dart layers. */
typedef struct {
    const char *key;                                    /* e.g. "YomKippur_AFTERNOON" */
    hc_haftarah_spans customs[HC_CUSTOM_COUNT];
} hc_special_haftarah;

extern const hc_special_haftarah HC_SPECIAL_HAFTAROT[];
extern const int HC_SPECIAL_HAFTAROT_COUNT;

/* Look up a special-haftarah entry by "Occasion_VARIANT" key. NULL if none. */
const hc_special_haftarah *hc_special_haftarah_lookup(const char *key);

#endif /* HC_GENERATED_HAFTAROT_DATA_H_ */