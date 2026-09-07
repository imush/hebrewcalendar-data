# The readings oracle

`opentorah-readings.tsv` is every reading opentorah produces — all customs,
both lands, Jewish years 5780–5860, night, morning and Mincha — exported from
opentorah itself and used by the consumers to check their own answers against
it. One copy, so the Java library and the C library are held to the same
standard rather than each to its own.

Regenerate it with `hebrewcalendar/testsrc/oracle/export_readings.sh`, which
drops the exporter into an opentorah checkout, runs it, and takes it out again.
The header records the opentorah commit it came from.
