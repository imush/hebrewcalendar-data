#!/usr/bin/env python3
"""Emit C header + source under generated/c/.

  parshiot_data.h  — declarations for PARSHA_NAMES, per-year-type
                     schedule arrays, YEAR_TYPES dispatch table.
  parshiot_data.c  — the actual initializers.

The C library's parshiot.c consumes these declarations and no longer
owns the data.
"""
from common import ROOT, load, BANNER

C_DIR = ROOT / "generated" / "c"

C_BANNER = (
    "/*\n"
    " * GENERATED FILE — DO NOT EDIT.\n"
    " * Source: hebrewcalendar-data — regenerate with ./generate.sh\n"
    " */\n"
)


def sched_id_to_symbol(year_type_id: str, side: str) -> str:
    """LEAP_MON_FULL_SAT + israel → HC_SCH_LEAP_MON_FULL_SAT_I"""
    suffix = "I" if side == "israel" else "D"
    return f"HC_SCH_{year_type_id}_{suffix}"


def year_length_ordinal(name: str) -> int:
    return {"SHORT": 0, "NORMAL": 1, "FULL": 2}[name]


def emit_header() -> str:
    lines = [C_BANNER, "#ifndef HC_GENERATED_PARSHIOT_DATA_H_"]
    lines.append("#define HC_GENERATED_PARSHIOT_DATA_H_")
    lines.append("")
    lines.append('#include "parshiot.h"')
    lines.append("")
    lines.append("/* Localized display name for each parsha (English canonical form).")
    lines.append(" * NULL for HC_PARSHA_NONE and HC_PARSHA_COUNT. */")
    lines.append("extern const char *const HC_PARSHA_NAMES[HC_PARSHA_COUNT];")
    lines.append("")
    lines.append("/* One weekly reading slot in a year-type schedule.")
    lines.append(" * p1 == HC_PARSHA_NONE means Yom Tov / Chol Hamoed. */")
    lines.append("/* (hc_reading itself is declared in parshiot.h.) */")
    lines.append("")
    lines.append("typedef struct {")
    lines.append("    int rosh_dow;              /* 1=Sun .. 7=Sat */")
    lines.append("    int year_length;           /* 0=SHORT 1=NORMAL 2=FULL */")
    lines.append("    int pesach_dow;")
    lines.append("    int leap;                  /* 0 or 1 */")
    lines.append("    const hc_reading *israel;  /* schedule, terminated by 0xFFFF sentinel */")
    lines.append("    const hc_reading *diaspora;")
    lines.append("    int israel_len;            /* count of readings before sentinel */")
    lines.append("    int diaspora_len;")
    lines.append("} hc_year_type_entry;")
    lines.append("")
    lines.append("extern const hc_year_type_entry HC_YEAR_TYPES[14];")
    lines.append("")

    schedules = load("schedules/parsha_year_schedules.json")
    for yt in schedules["yearTypes"]:
        for side in ("israel", "diaspora"):
            sym = sched_id_to_symbol(yt["id"], side)
            lines.append(f"extern const hc_reading {sym}[];")
    lines.append("")
    lines.append("#endif /* HC_GENERATED_PARSHIOT_DATA_H_ */")
    return "\n".join(lines)


def emit_source() -> str:
    parshiyot = load("names/parshiyot.json")
    schedules = load("schedules/parsha_year_schedules.json")

    lines = [C_BANNER, '#include "parshiot_data.h"', "", "/* ── PARSHA_NAMES ────────────────────────────────────────────── */", ""]
    lines.append("const char *const HC_PARSHA_NAMES[HC_PARSHA_COUNT] = {")
    lines.append('    [HC_PARSHA_NONE] = "",')
    for key, entry in parshiyot.items():
        c_enum = f"HC_{key}"
        # Escape any embedded quotes in the English name (none currently).
        en = entry["en"].replace('"', '\\"')
        lines.append(f'    [{c_enum:20}] = "{en}",')
    lines.append("};")
    lines.append("")

    # Emit each schedule array with a sentinel terminator matching what
    # parshiot.c currently uses (SCH_END = {0xFF, 0xFF}). Keep the same
    # value so any code that grep'd for the sentinel keeps working.
    def emit_schedule(sym: str, weeks: list) -> list:
        out = [f"const hc_reading {sym}[] = {{"]
        for wk in weeks:
            if not wk:
                out.append("    { HC_PARSHA_NONE, HC_PARSHA_NONE },")
            elif len(wk) == 1:
                out.append(f"    {{ HC_{wk[0]}, HC_PARSHA_NONE }},")
            else:
                out.append(f"    {{ HC_{wk[0]}, HC_{wk[1]} }},")
        out.append("    { (hc_parsha)0xFF, (hc_parsha)0xFF },")
        out.append("};")
        return out

    lines.append("/* ── Year-type schedule arrays ────────────────────────────────── */")
    lines.append("")
    for yt in schedules["yearTypes"]:
        lines.append(f"/* {yt['letter']} : {yt['id']} */")
        for side in ("israel", "diaspora"):
            sym = sched_id_to_symbol(yt["id"], side)
            lines.extend(emit_schedule(sym, yt[side]))
        lines.append("")

    lines.append("/* ── Dispatch table ─────────────────────────────────────────── */")
    lines.append("")
    lines.append("const hc_year_type_entry HC_YEAR_TYPES[14] = {")
    for yt in schedules["yearTypes"]:
        il = sched_id_to_symbol(yt["id"], "israel")
        di = sched_id_to_symbol(yt["id"], "diaspora")
        ord_ = year_length_ordinal(yt["yearLength"])
        leap = 1 if yt["leap"] else 0
        lines.append(
            f"    {{ {yt['roshHashanaDow']}, {ord_}, {yt['pesachDow']}, {leap}, "
            f"{il}, {di}, {len(yt['israel'])}, {len(yt['diaspora'])} }},  /* {yt['letter']} */"
        )
    lines.append("};")
    lines.append("")
    return "\n".join(lines)


def main():
    C_DIR.mkdir(parents=True, exist_ok=True)
    (C_DIR / "parshiot_data.h").write_text(emit_header(), encoding="utf-8")
    (C_DIR / "parshiot_data.c").write_text(emit_source(), encoding="utf-8")
    print(f"OK  c     → {C_DIR.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
