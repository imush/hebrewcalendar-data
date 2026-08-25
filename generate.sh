#!/usr/bin/env bash
# Regenerate every language target from the JSON sources.
# Consumers depend on the committed generated/ output; they never run this.
set -euo pipefail
cd "$(dirname "$0")"

python3 tests/validate_tanya.py
python3 codegen/to_dart.py
# Add codegen/to_java.py, to_scala.py, to_c.py as they land.
