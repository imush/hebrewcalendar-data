#!/usr/bin/env bash
# Export every reading opentorah produces, as the oracle the Java port checks
# itself against (hebrewcalendar testsrc/resources/opentorah-readings.tsv).
#
# The exporter is a Scala test, because that is the only way to reach the
# schedule: it needs opentorah's own classpath. It is not opentorah's, though,
# and does not belong in their tree -- so this drops it into a checkout, runs
# it, and takes it out again, leaving the checkout as it was found. Copying it
# in by hand is how it ended up in a PR once, and how it got lost once before
# that.
set -euo pipefail

checkout="${1:-}"
out="${2:-}"
if [ -z "$checkout" ] || [ -z "$out" ]; then
  echo "usage: $0 <path to opentorah checkout> <output .tsv>" >&2
  exit 1
fi

here="$(cd "$(dirname "$0")" && pwd)"
dest="$checkout/texts/src/test/scala/org/opentorah/schedule/tanach/ExportReadingsTest.scala"

# A copy of ours already in the checkout is used where it stands and left
# alone -- upstream carries one at the moment, having taken it in by mistake.
# Anything else there is not ours to touch.
borrowed=no
if [ -e "$dest" ]; then
  if ! cmp -s "$here/opentorah/ExportReadingsTest.scala" "$dest"; then
    echo "$dest exists and differs from ours -- refusing to touch it." >&2
    exit 1
  fi
else
  borrowed=yes
  cp "$here/opentorah/ExportReadingsTest.scala" "$dest"
fi

cleanup() { [ "$borrowed" = yes ] && rm -f "$dest"; }
trap cleanup EXIT
( cd "$checkout" \
  && EXPORT_READINGS="$(cd "$(dirname "$out")" && pwd)/$(basename "$out")" \
     EXPORT_COMMIT="$(git rev-parse HEAD)" \
     ./gradlew :opentorah-texts:test --tests '*ExportReadingsTest*' -q --rerun-tasks )

echo "OK  wrote $out from opentorah $(cd "$checkout" && git rev-parse --short HEAD)"
