# This tests for what looks like a problem in the HTTP parser:
# it gets confused whether it's in a header or not; it should
# not report that weird.
#
# @TEST-EXEC: bro -r $TRACES/http-byteranges.trace %INPUT
# @TEST-EXEC: grep -q http_no_crlf_in_header_list weird.log && exit 0 || exit 1

# The base analysis scripts are loaded by default.
#@load base/protocols/http

