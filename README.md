# hebrewcalendar-data

Reference data for Hebrew calendar tools: learning schedules, parsha
metadata, and cross-language translations of parshiyot, holidays, months,
zmanim, and tractate names.

This package is used by both the C and the Java calendar libraries.

The data lives as human-readable JSON. Small Python generators produce
language-native constant modules under `generated/` (committed to the
repo, so downstream consumers need no Python at build time).

## Layout

- `schedules/` — algorithmic reference data
  - `tanya.json` — daily Tanya boundaries (non-leap + leap variants)
  - `rambam_mt.json` — 88 Mishneh Torah halachot with chapter counts
  - `sefer_hamitzvot.json` — Sefer HaMitzvot 339-day cycle
  - `daily_chumash.json` — weekly parsha split into 7 daily aliyot
  - `sefirah_sotah.json` — Masechet Sotah daf during Sefirat HaOmer
  - `daf_yomi.json` — 40 Bavli tractates with per-cycle last-daf counts
  - `tehillim_monthly.json` — 30-day Psalms division
  - `tehillim_elul.json` — Chabad Elul supplement rule
  - `parsha_pairs.json` — 7 canonical doubling pairs
  - `parsha_year_schedules.json` — week → parsha per year-type × geo
  - `aliyot.json` — pesukim per aliyah per parsha
  - `special_maftirs.json` — Rosh Chodesh, four parshiyot, Chanukah, etc.
- `names/` — reference translations (side-by-side per key)
  - `parshiyot.json`, `holidays.json`, `months.json`, `weekdays.json`,
    `zmanim.json`, `tractates.json`, `learning_modules.json`
- `ui/` — cross-platform strings shared by site and app
  - `tabs.json`, `common.json`, `candles.json`, `yahrzeit.json`
- `schema/` — JSON Schema definitions for CI validation
- `codegen/` — per-language generators (`to_dart.py`, `to_java.py`, ...)
- `generated/` — committed generator output; consumers depend on these

## Conventions

**Every enum-like value uses a stable SCREAMING_SNAKE_CASE key**, never a
display string. Translations live in a `names/…json` file keyed by the
same identifier, with each language as a separate field:

```jsonc
// names/tanya_sections.json
{
  "IGGERET_HAKODESH": { "en": "Iggeret HaKodesh", "he": "אגרת הקודש" }
}

// schedules/tanya.json — references the key, not the display name
{ "leap": false, "month": 6, "day": 10,
  "section": "IGGERET_HAKODESH", "chapter": 12, ... }
```

Rationale: transliterated display names contain apostrophes, spaces,
and casing variants that change over time. A stable key decouples data
identity from presentation. This applies uniformly to every enum-valued
field — parshiyot, halachot, tractates, holidays, months, zmanim,
learning modules, everything.

Codegen converts the canonical key to each language's idiomatic form:
Dart `iggeretHakodesh`, Java `IGGERET_HAKODESH`, Scala `IggeretHakodesh`,
C `TANYA_SECTION_IGGERET_HAKODESH`.

## Consuming

Each consumer adds this repo as a git submodule and points its build at
the appropriate `generated/<lang>/` tree.

- **Dart / Flutter**: add a `path:` dependency in `pubspec.yaml`:
  ```yaml
  dependencies:
    hebrewcalendar_data:
      path: hebrewcalendar-data/generated/dart
  ```
- **Java (Maven)**: add `generated/java` as an extra source root via
  `build-helper-maven-plugin`.
- **Scala (sbt)**: `Compile / unmanagedSourceDirectories +=
  baseDirectory.value / "hebrewcalendar-data" / "generated" / "scala"`.
- **C (CMake)**: `target_sources(... generated/c/data.c)` plus a matching
  `target_include_directories`.

## Updating

1. Edit JSON under `schedules/`, `names/`, or `ui/`.
2. Run `./generate.sh` (regenerates every language target).
3. Commit source + regenerated output in one commit.
4. In each consumer that wants the update: `git submodule update
   --remote hebrewcalendar-data` and commit the submodule bump.

## License

BSD 3-Clause. See LICENSE.
