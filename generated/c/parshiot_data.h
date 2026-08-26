/*
 * GENERATED FILE — DO NOT EDIT.
 * Source: hebrewcalendar-data — regenerate with ./generate.sh
 */

#ifndef HC_GENERATED_PARSHIOT_DATA_H_
#define HC_GENERATED_PARSHIOT_DATA_H_

#include "parshiot.h"

/* Localized display name for each parsha (English canonical form).
 * NULL for HC_PARSHA_NONE and HC_PARSHA_COUNT. */
extern const char *const HC_PARSHA_NAMES[HC_PARSHA_COUNT];

/* One weekly reading slot in a year-type schedule.
 * p1 == HC_PARSHA_NONE means Yom Tov / Chol Hamoed. */
/* (hc_reading itself is declared in parshiot.h.) */

typedef struct {
    int rosh_dow;              /* 1=Sun .. 7=Sat */
    int year_length;           /* 0=SHORT 1=NORMAL 2=FULL */
    int pesach_dow;
    int leap;                  /* 0 or 1 */
    const hc_reading *israel;  /* schedule, terminated by 0xFFFF sentinel */
    const hc_reading *diaspora;
    int israel_len;            /* count of readings before sentinel */
    int diaspora_len;
} hc_year_type_entry;

extern const hc_year_type_entry HC_YEAR_TYPES[14];

extern const hc_reading HC_SCH_REG_MON_FULL_THU_I[];
extern const hc_reading HC_SCH_REG_MON_FULL_THU_D[];
extern const hc_reading HC_SCH_REG_MON_SHORT_TUE_I[];
extern const hc_reading HC_SCH_REG_MON_SHORT_TUE_D[];
extern const hc_reading HC_SCH_REG_TUE_NORMAL_THU_I[];
extern const hc_reading HC_SCH_REG_TUE_NORMAL_THU_D[];
extern const hc_reading HC_SCH_REG_THU_FULL_SUN_I[];
extern const hc_reading HC_SCH_REG_THU_FULL_SUN_D[];
extern const hc_reading HC_SCH_REG_THU_NORMAL_SAT_I[];
extern const hc_reading HC_SCH_REG_THU_NORMAL_SAT_D[];
extern const hc_reading HC_SCH_REG_SAT_FULL_TUE_I[];
extern const hc_reading HC_SCH_REG_SAT_FULL_TUE_D[];
extern const hc_reading HC_SCH_REG_SAT_SHORT_SUN_I[];
extern const hc_reading HC_SCH_REG_SAT_SHORT_SUN_D[];
extern const hc_reading HC_SCH_LEAP_MON_FULL_SAT_I[];
extern const hc_reading HC_SCH_LEAP_MON_FULL_SAT_D[];
extern const hc_reading HC_SCH_LEAP_MON_SHORT_THU_I[];
extern const hc_reading HC_SCH_LEAP_MON_SHORT_THU_D[];
extern const hc_reading HC_SCH_LEAP_TUE_NORMAL_SAT_I[];
extern const hc_reading HC_SCH_LEAP_TUE_NORMAL_SAT_D[];
extern const hc_reading HC_SCH_LEAP_THU_FULL_TUE_I[];
extern const hc_reading HC_SCH_LEAP_THU_FULL_TUE_D[];
extern const hc_reading HC_SCH_LEAP_THU_SHORT_SUN_I[];
extern const hc_reading HC_SCH_LEAP_THU_SHORT_SUN_D[];
extern const hc_reading HC_SCH_LEAP_SAT_FULL_THU_I[];
extern const hc_reading HC_SCH_LEAP_SAT_FULL_THU_D[];
extern const hc_reading HC_SCH_LEAP_SAT_SHORT_TUE_I[];
extern const hc_reading HC_SCH_LEAP_SAT_SHORT_TUE_D[];

#endif /* HC_GENERATED_PARSHIOT_DATA_H_ */