#include "../src/symbols.h"
#include "../thirdparty/ctest.h"
#include <stdio.h>

CTEST(check_symbols, check1)
{
    char buf[BUFSIZ] = "(){}[]";

    ASSERT_EQUAL("OK", (*check_brackets(buf) ? "FAIL" : "OK"));
}
CTEST(check_symbols, check2)
{
    char buf[BUFSIZ] = "({])";

    ASSERT_EQUAL("FAIL", (*check_brackets(buf) ? "FAIL" : "OK"));
}
