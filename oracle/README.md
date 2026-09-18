# The opentorah oracles

What opentorah itself answers, exported from it and used by the consumers to
check their own answers. One copy of each, so the Java library and the C
library are held to the same standard rather than each to its own.

## Readings

`opentorah-readings.tsv` is every reading opentorah produces — all customs,
both lands, Jewish years 5780–5860, night, morning and Mincha — exported from
opentorah itself and used by the consumers to check their own answers against
it. One copy, so the Java library and the C library are held to the same
standard rather than each to its own.

Regenerate it with `hebrewcalendar/testsrc/oracle/export_readings.sh`, which
drops the exporter into an opentorah checkout, runs it, and takes it out again.
The header records the opentorah commit it came from.

## Dates

`opentorah-dates.tsv` is every Jewish month opentorah reckons over years
5700-5900 -- its name, its length, and the Gregorian date it begins on. The
months pin the days inside them, so a port that starts a month a day late, or
runs one a day long, disagrees here first; two centuries fit in 67 KB.

Regenerate it with `hebrewcalendar/testsrc/oracle/export_dates.sh`, the same
way.
