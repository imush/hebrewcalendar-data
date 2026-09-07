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


# ── Haftarot tables ────────────────────────────────────────────────

# From names/customs.json, in its order, which is the tree walked down --
# Ashkenaz and what hangs off it, then Sefard, then Romania. Listing them here
# instead is how the C library came to be missing seven of them: the file grew
# to 26 in the re-import and this copy stayed at 19, so Poznan, Romania,
# Persia, Libya, Algiers, Agadir and Pure Sephardim had no data at all.
CUSTOMS = list(load("names/customs.json"))

def _book_enum(en_name: str) -> str:
    # "II Kings" → HC_BOOK_II_KINGS
    return "HC_BOOK_" + en_name.upper().replace(" ", "_")


def emit_haftarot_header() -> str:
    parshiyot = load("names/parshiyot.json")
    tanach    = load("names/tanach_books.json")

    lines = [C_BANNER, "#ifndef HC_GENERATED_HAFTAROT_DATA_H_"]
    lines.append("#define HC_GENERATED_HAFTAROT_DATA_H_")
    lines.append("")
    lines.append('#include "parshiot.h"')
    lines.append("#include <stdint.h>")
    lines.append("")
    lines.append("/* All 18 exposed customs (opentorah's Custom.xml minus \"Common\"). */")
    lines.append("typedef enum hc_custom {")
    for c in CUSTOMS:
        lines.append(f"    HC_CUSTOM_{c},")
    lines.append("    HC_CUSTOM_COUNT")
    lines.append("} hc_custom;")
    lines.append("")
    lines.append("/* Books of Tanach used by haftarah references. */")
    lines.append("typedef enum hc_tanach_book {")
    lines.append("    HC_BOOK_NONE = 0,")
    for k in tanach.keys():
        lines.append(f"    HC_BOOK_{k},")
    lines.append("    HC_BOOK_COUNT")
    lines.append("} hc_tanach_book;")
    lines.append("")
    lines.append("/* English name of a Tanach book (NULL for HC_BOOK_NONE). Used to build")
    lines.append(" * Sefaria URLs on the consumer side. */")
    lines.append("const char *hc_tanach_book_name(hc_tanach_book b);")
    lines.append("")
    lines.append("/* One reference span within a (possibly multi-part) haftarah reading. */")
    lines.append("typedef struct {")
    lines.append("    uint8_t  book;      /* hc_tanach_book */")
    lines.append("    uint16_t from_ch, from_v, to_ch, to_v;")
    lines.append("} hc_haftarah_ref;")
    lines.append("")
    lines.append("/* Multi-part haftarah spans: a pointer + a count. */")
    lines.append("typedef struct {")
    lines.append("    const hc_haftarah_ref *refs;")
    lines.append("    int refs_count;")
    lines.append("} hc_haftarah_spans;")
    lines.append("")
    lines.append("/* Weekly haftarah by parsha × custom. Zero-length spans (refs_count == 0)")
    lines.append(" * signal 'no data' — should not occur for our 54 × 18 grid.")
    lines.append(" * Parsha index is the hc_parsha enum value (VEZOT_HABRACHA included). */")
    lines.append("extern const hc_haftarah_spans HC_HAFTAROT_WEEKLY[HC_PARSHA_COUNT][HC_CUSTOM_COUNT];")
    lines.append("")
    lines.append("/* Special-day haftarot: opentorah's SpecialReadings entries")
    lines.append(" * (RoshChodesh, ParshasShekalim, YomKippur, ...). Keyed by an")
    lines.append(" * \"Occasion_VARIANT\" string that mirrors the Java/Dart layers. */")
    lines.append("typedef struct {")
    lines.append("    const char *key;                                    /* e.g. \"YomKippur_AFTERNOON\" */")
    lines.append("    hc_haftarah_spans customs[HC_CUSTOM_COUNT];")
    lines.append("} hc_special_haftarah;")
    lines.append("")
    lines.append("extern const hc_special_haftarah HC_SPECIAL_HAFTAROT[];")
    lines.append("extern const int HC_SPECIAL_HAFTAROT_COUNT;")
    lines.append("")
    lines.append("/* Look up a special-haftarah entry by \"Occasion_VARIANT\" key. NULL if none. */")
    lines.append("const hc_special_haftarah *hc_special_haftarah_lookup(const char *key);")
    lines.append("")
    lines.append("#endif /* HC_GENERATED_HAFTAROT_DATA_H_ */")
    return "\n".join(lines)


def emit_haftarot_source() -> str:
    parshiyot = load("names/parshiyot.json")
    tanach    = load("names/tanach_books.json")
    haftarot  = load("schedules/haftarot.json")
    special   = load("schedules/special_haftarot.json")

    parsha_index = {k: f"HC_{k}" for k in parshiyot.keys()}

    lines = [C_BANNER, '#include "haftarot_data.h"', '#include <string.h>', '']
    lines.append("/* ── Tanach book names ──────────────────────────────────────── */")
    lines.append("static const char *const HC_TANACH_BOOK_NAMES[HC_BOOK_COUNT] = {")
    lines.append('    [HC_BOOK_NONE] = "",')
    for k, v in tanach.items():
        en = v["en"].replace('"', '\\"')
        lines.append(f'    [HC_BOOK_{k}] = "{en}",')
    lines.append("};")
    lines.append("")
    lines.append("const char *hc_tanach_book_name(hc_tanach_book b) {")
    lines.append("    if (b <= HC_BOOK_NONE || b >= HC_BOOK_COUNT) return NULL;")
    lines.append("    return HC_TANACH_BOOK_NAMES[b];")
    lines.append("}")
    lines.append("")

    # Emit one static array of refs per (parsha, custom) pair; then the top-level table.
    lines.append("/* ── Weekly parsha haftarot ──────────────────────────────────── */")
    weekly_ref_arrays = {}  # (pkey, custom) → C symbol name
    for pkey, byc in haftarot.items():
        for cname, parts in byc.items():
            # annotations sit beside the readings; they are display material
            # and the C library carries none of it
            if cname == "annotations":
                continue
            sym = f"HC_HAFT_W_{pkey}_{cname}"
            weekly_ref_arrays[(pkey, cname)] = sym
            lines.append(f"static const hc_haftarah_ref {sym}[] = {{")
            for r in parts:
                lines.append(
                    f"    {{ {_book_enum(r['book'])}, {r['fromCh']}, {r['fromV']}, "
                    f"{r['toCh']}, {r['toV']} }},"
                )
            lines.append("};")

    lines.append("")
    lines.append("const hc_haftarah_spans HC_HAFTAROT_WEEKLY[HC_PARSHA_COUNT][HC_CUSTOM_COUNT] = {")
    for pkey in parshiyot.keys():
        c_parsha = parsha_index[pkey]
        row = []
        for c in CUSTOMS:
            sym = weekly_ref_arrays.get((pkey, c))
            if sym:
                row.append(f"[HC_CUSTOM_{c}] = {{ {sym}, (int)(sizeof({sym})/sizeof({sym}[0])) }}")
            else:
                row.append(f"[HC_CUSTOM_{c}] = {{ NULL, 0 }}")
        lines.append(f"    [{c_parsha}] = {{ " + ", ".join(row) + " },")
    lines.append("};")
    lines.append("")

    # Special haftarot: same structure but keyed by string.
    lines.append("/* ── Special-day haftarot ──────────────────────────────────── */")
    special_arrays = []  # list of dicts: {key, per_custom → sym}
    for occ, variants in special.items():
        for variant, entry in variants.items():
            byc = entry["readings"]
            entry_key = f"{occ}_{variant}"
            per_c = {}
            for cname, parts in byc.items():
                sym = f"HC_HAFT_S_{entry_key}_{cname}"
                per_c[cname] = sym
                lines.append(f"static const hc_haftarah_ref {sym}[] = {{")
                for r in parts:
                    lines.append(
                        f"    {{ {_book_enum(r['book'])}, {r['fromCh']}, {r['fromV']}, "
                        f"{r['toCh']}, {r['toV']} }},"
                    )
                lines.append("};")
            special_arrays.append((entry_key, per_c))
    lines.append("")

    lines.append("const hc_special_haftarah HC_SPECIAL_HAFTAROT[] = {")
    for entry_key, per_c in special_arrays:
        parts = [f'.key = "{entry_key}"']
        for c in CUSTOMS:
            if c in per_c:
                sym = per_c[c]
                parts.append(f".customs[HC_CUSTOM_{c}] = {{ {sym}, (int)(sizeof({sym})/sizeof({sym}[0])) }}")
        lines.append("    { " + ", ".join(parts) + " },")
    lines.append("};")
    lines.append(f"const int HC_SPECIAL_HAFTAROT_COUNT = {len(special_arrays)};")
    lines.append("")

    lines.append("const hc_special_haftarah *hc_special_haftarah_lookup(const char *key) {")
    lines.append("    if (!key) return NULL;")
    lines.append("    for (int i = 0; i < HC_SPECIAL_HAFTAROT_COUNT; i++) {")
    lines.append("        if (strcmp(HC_SPECIAL_HAFTAROT[i].key, key) == 0)")
    lines.append("            return &HC_SPECIAL_HAFTAROT[i];")
    lines.append("    }")
    lines.append("    return NULL;")
    lines.append("}")
    lines.append("")
    return "\n".join(lines)



# ── Torah readings ─────────────────────────────────────────────────

def _st_enum(occasion: str, name: str) -> str:
    """"RoshChodesh", "torah" -> HC_ST_ROSH_CHODESH_TORAH."""
    import re as _re
    def snake(x):
        return _re.sub(r"(?<=[a-z0-9])(?=[A-Z])", "_", x).upper()
    return "HC_ST_" + snake(occasion) + "_" + snake(name)


def _span_row(r) -> str:
    return "{ %s, %d, %d, %d, %d }" % (
        _book_enum(r["book"]), r["fromCh"], r["fromV"], r["toCh"], r["toV"])


def _range_span(book: str, rng: str) -> str:
    """"1:1-2:3" in a named book -> a span literal."""
    a, b = rng.split("-")
    fc, fv = (int(x) for x in a.split(":"))
    tc, tv = (int(x) for x in b.split(":"))
    return "{ %s, %d, %d, %d, %d }" % (_book_enum(book), fc, fv, tc, tv)


CHUMASH_BOOKS = ["", "Genesis", "Exodus", "Leviticus", "Numbers", "Deuteronomy"]


def emit_torah_header() -> str:
    special = load("schedules/special_torah.json")
    lines = [C_BANNER, "#ifndef HC_GENERATED_TORAH_DATA_H_", "#define HC_GENERATED_TORAH_DATA_H_", "",
             '#include "parshiot.h"', '#include "haftarot_data.h"', "#include <stdint.h>", ""]
    lines.append("/* One span of Chumash: an aliyah, a fragment of one, or a maftir. */")
    lines.append("typedef hc_haftarah_ref hc_torah_span;")
    lines.append("")
    lines.append("/* The readings of one week: the seven aliyot of the Shabbat, the divisions")
    lines.append(" * Chabad and Ashkenaz make where they differ (NULL where they do not), the")
    lines.append(" * three of a Monday, a Thursday and Shabbat Mincha, and the maftir. */")
    lines.append("typedef struct {")
    lines.append("    uint8_t parsha1, parsha2;        /* hc_parsha; parsha2 is 0 unless joined */")
    lines.append("    const hc_torah_span *aliyot;             /* 7 */")
    lines.append("    const hc_torah_span *aliyot_chabad;      /* 7, or NULL */")
    lines.append("    const hc_torah_span *aliyot_ashkenaz;    /* 7, or NULL */")
    lines.append("    const hc_torah_span *weekday;            /* 3 */")
    lines.append("    hc_torah_span maftir;                    /* book HC_BOOK_NONE if none */")
    lines.append("} hc_chumash_reading;")
    lines.append("")
    lines.append("extern const hc_chumash_reading HC_CHUMASH[];")
    lines.append("extern const int HC_CHUMASH_COUNT;")
    lines.append("")
    lines.append("/* The week read for these parshiyot, or NULL. parsha2 is HC_PARSHA_NONE")
    lines.append(" * for a single week. */")
    lines.append("const hc_chumash_reading *hc_chumash_lookup(hc_parsha p1, hc_parsha p2);")
    lines.append("")
    lines.append("/* The readings of the special days, by occasion and name. A torah entry is")
    lines.append(" * a list of fragments the divisions are built from; a maftir is one span. */")
    lines.append("typedef enum hc_special_torah {")
    for occ, readings in special.items():
        for name in readings:
            lines.append(f"    {_st_enum(occ, name)},")
    lines.append("    HC_ST_COUNT")
    lines.append("} hc_special_torah;")
    lines.append("")
    lines.append("extern const hc_torah_span *const HC_SPECIAL_TORAH[HC_ST_COUNT];")
    lines.append("extern const uint8_t HC_SPECIAL_TORAH_LEN[HC_ST_COUNT];")
    lines.append("")
    lines.append("#endif /* HC_GENERATED_TORAH_DATA_H_ */")
    return "\n".join(lines) + "\n"


def emit_torah_source() -> str:
    chumash = load("schedules/chumash_aliyot.json")["readings"]
    special = load("schedules/special_torah.json")
    parshiyot = load("names/parshiyot.json")
    key_of = {k: i for i, k in enumerate(parshiyot)} if isinstance(parshiyot, dict) \
             else {k: i for i, k in enumerate(parshiyot)}

    lines = [C_BANNER, '#include "torah_data.h"', "#include <string.h>", ""]

    def arr(sym, book, ranges):
        lines.append(f"static const hc_torah_span {sym}[] = {{")
        for r in ranges:
            lines.append("    " + _range_span(book, r) + ",")
        lines.append("};")

    for r in chumash:
        book = CHUMASH_BOOKS[r["book"]]
        arr(f"HC_CH_{r['id']}_A", book, r["aliyot"])
        if "aliyotChabad" in r:   arr(f"HC_CH_{r['id']}_C", book, r["aliyotChabad"])
        if "aliyotAshkenaz" in r: arr(f"HC_CH_{r['id']}_K", book, r["aliyotAshkenaz"])
        arr(f"HC_CH_{r['id']}_W", book, r["aliyotWeekday"])
    lines.append("")
    lines.append("const hc_chumash_reading HC_CHUMASH[] = {")
    for r in chumash:
        book = CHUMASH_BOOKS[r["book"]]
        ps = r["parshiyot"]
        p1 = "HC_PARSHA_" + ps[0]
        p2 = ("HC_PARSHA_" + ps[1]) if len(ps) > 1 else "HC_PARSHA_NONE"
        ch = f"HC_CH_{r['id']}_C" if "aliyotChabad" in r else "NULL"
        ak = f"HC_CH_{r['id']}_K" if "aliyotAshkenaz" in r else "NULL"
        mf = _range_span(book, r["maftir"]) if r.get("maftir") else "{ HC_BOOK_NONE, 0, 0, 0, 0 }"
        lines.append(f"    {{ {p1}, {p2}, HC_CH_{r['id']}_A, {ch}, {ak}, HC_CH_{r['id']}_W, {mf} }},")
    lines.append("};")
    lines.append("const int HC_CHUMASH_COUNT = (int)(sizeof(HC_CHUMASH)/sizeof(HC_CHUMASH[0]));")
    lines.append("")
    lines.append("const hc_chumash_reading *hc_chumash_lookup(hc_parsha p1, hc_parsha p2) {")
    lines.append("    for (int i = 0; i < HC_CHUMASH_COUNT; i++)")
    lines.append("        if (HC_CHUMASH[i].parsha1 == p1 && HC_CHUMASH[i].parsha2 == p2)")
    lines.append("            return &HC_CHUMASH[i];")
    lines.append("    return NULL;")
    lines.append("}")
    lines.append("")
    for occ, readings in special.items():
        for name, e in readings.items():
            sym = "HC_STD_" + _st_enum(occ, name)[len("HC_ST_"):]
            frags = e["fragments"] if e["kind"] == "torah" else [e["ref"]]
            lines.append(f"static const hc_torah_span {sym}[] = {{")
            for f in frags:
                lines.append("    " + _span_row(f) + ",")
            lines.append("};")
    lines.append("")
    lines.append("const hc_torah_span *const HC_SPECIAL_TORAH[HC_ST_COUNT] = {")
    for occ, readings in special.items():
        for name in readings:
            e = _st_enum(occ, name)
            lines.append(f"    [{e}] = HC_STD_{e[len('HC_ST_'):]},")
    lines.append("};")
    lines.append("const uint8_t HC_SPECIAL_TORAH_LEN[HC_ST_COUNT] = {")
    for occ, readings in special.items():
        for name, e0 in readings.items():
            e = _st_enum(occ, name)
            n = len(e0["fragments"]) if e0["kind"] == "torah" else 1
            lines.append(f"    [{e}] = {n},")
    lines.append("};")
    return "\n".join(lines) + "\n"


def main():
    C_DIR.mkdir(parents=True, exist_ok=True)
    (C_DIR / "parshiot_data.h").write_text(emit_header(), encoding="utf-8")
    (C_DIR / "parshiot_data.c").write_text(emit_source(), encoding="utf-8")
    (C_DIR / "haftarot_data.h").write_text(emit_haftarot_header(), encoding="utf-8")
    (C_DIR / "haftarot_data.c").write_text(emit_haftarot_source(), encoding="utf-8")
    (C_DIR / "torah_data.h").write_text(emit_torah_header(), encoding="utf-8")
    (C_DIR / "torah_data.c").write_text(emit_torah_source(), encoding="utf-8")
    print(f"OK  c     → {C_DIR.relative_to(ROOT)}")


if __name__ == "__main__":
    main()
