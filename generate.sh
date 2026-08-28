#!/usr/bin/env bash
# Regenerate every language target from the JSON sources.
# Consumers depend on the committed generated/ output; they never run this.
set -euo pipefail
cd "$(dirname "$0")"

python3 tests/validate_tanya.py
python3 tests/validate_parshiyot.py
python3 tests/validate_parsha_year_schedules.py
python3 tests/validate_jewish_months.py
python3 tests/validate_special_maftirs.py
python3 tests/validate_hebrew_year_exceptions.py
python3 tests/validate_daf_yomi.py
python3 tests/validate_zmanim.py
python3 tests/validate_jewish_special_days.py
python3 tests/validate_haftarah_occasions.py
python3 tests/validate_rambam_mt.py
python3 tests/validate_sefer_hamitzvot.py
python3 codegen/parse_opentorah_chumash.py
python3 tests/validate_chumash_aliyot.py
python3 codegen/parse_opentorah_haftarot.py
python3 tests/validate_haftarot.py
python3 codegen/parse_opentorah_special_haftarot.py
python3 tests/validate_special_haftarot.py
python3 codegen/to_dart.py
python3 codegen/to_c.py
python3 codegen/to_java.py
# Add codegen/to_java.py, to_scala.py, to_c.py as they land.
