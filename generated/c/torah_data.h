/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

#ifndef HC_GENERATED_TORAH_DATA_H_
#define HC_GENERATED_TORAH_DATA_H_

#include "parshiot.h"
#include "haftarot_data.h"
#include <stdint.h>

/* One span of Chumash: an aliyah, a fragment of one, or a maftir. */
typedef hc_haftarah_ref hc_torah_span;

/* The readings of one week: the seven aliyot of the Shabbat, the divisions
 * Chabad and Ashkenaz make where they differ (NULL where they do not), the
 * three of a Monday, a Thursday and Shabbat Mincha, and the maftir. */
typedef struct {
    uint8_t parsha1, parsha2;        /* hc_parsha; parsha2 is 0 unless joined */
    const hc_torah_span *aliyot;             /* 7 */
    const hc_torah_span *aliyot_chabad;      /* 7, or NULL */
    const hc_torah_span *aliyot_ashkenaz;    /* 7, or NULL */
    const hc_torah_span *weekday;            /* 3 */
    hc_torah_span maftir;                    /* book HC_BOOK_NONE if none */
} hc_chumash_reading;

extern const hc_chumash_reading HC_CHUMASH[];
extern const int HC_CHUMASH_COUNT;

/* The week read for these parshiyot, or NULL. parsha2 is HC_PARSHA_NONE
 * for a single week. */
const hc_chumash_reading *hc_chumash_lookup(hc_parsha p1, hc_parsha p2);

/* The readings of the special days, by occasion and name. A torah entry is
 * a list of fragments the divisions are built from; a maftir is one span. */
typedef enum hc_special_torah {
    HC_ST_ROSH_CHODESH_TORAH,
    HC_ST_FESTIVAL_END_SHABBOS_TORAH,
    HC_ST_INTERMEDIATE_SHABBOS_TORAH,
    HC_ST_ROSH_HASHANAH1_SHABBOS_TORAH,
    HC_ST_ROSH_HASHANAH1_MAFTIR,
    HC_ST_ROSH_HASHANAH2_TORAH,
    HC_ST_YOM_KIPPUR_SHABBOS_TORAH,
    HC_ST_YOM_KIPPUR_MAFTIR,
    HC_ST_YOM_KIPPUR_AFTERNOON_TORAH,
    HC_ST_SUCCOS_KORBANOT,
    HC_ST_SUCCOS1_SHABBOS_TORAH,
    HC_ST_SIMCHAS_TORAH_CHASSAN_BEREISHIS,
    HC_ST_CHANUKAH_DAY1_COHEN,
    HC_ST_CHANUKAH_KORBANOT,
    HC_ST_PARSHAS_SHEKALIM_MAFTIR,
    HC_ST_PARSHAS_ZACHOR_MAFTIR,
    HC_ST_PURIM_TORAH,
    HC_ST_PARSHAS_PARAH_MAFTIR,
    HC_ST_PARSHAS_HACHODESH_MAFTIR,
    HC_ST_PESACH_INTERMEDIATE_TORAH3,
    HC_ST_PESACH_INTERMEDIATE_TORAH4,
    HC_ST_PESACH_INTERMEDIATE_TORAH6,
    HC_ST_PESACH_INTERMEDIATE_MAFTIR_END,
    HC_ST_PESACH1_SHABBOS_TORAH,
    HC_ST_PESACH1_MAFTIR,
    HC_ST_PESACH7_SHABBOS_TORAH,
    HC_ST_SHAVUOS1_TORAH,
    HC_ST_SHAVUOS1_MAFTIR,
    HC_ST_FAST_AFTERNOON_TORAH_PART1,
    HC_ST_TISHA_BE_AV_TORAH,
    HC_ST_COUNT
} hc_special_torah;

extern const hc_torah_span *const HC_SPECIAL_TORAH[HC_ST_COUNT];
extern const uint8_t HC_SPECIAL_TORAH_LEN[HC_ST_COUNT];

#endif /* HC_GENERATED_TORAH_DATA_H_ */
