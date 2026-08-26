#!/usr/bin/env bash
# Regenerate every language target from the JSON sources.
# Consumers depend on the committed generated/ output; they never run this.
set -euo pipefail
cd "$(dirname "$0")"

python3 tests/validate_tanya.py
python3 tests/validate_parshiyot.py
python3 tests/validate_parsha_year_schedules.py
python3 tests/validate_hebrew_months.py
python3 tests/validate_special_maftirs.py
python3 tests/validate_hebrew_year_exceptions.py
python3 tests/validate_daf_yomi.py
python3 tests/validate_zmanim.py
python3 tests/validate_holidays.py
python3 codegen/to_dart.py
python3 codegen/to_c.py
# Add codegen/to_java.py, to_scala.py, to_c.py as they land.
