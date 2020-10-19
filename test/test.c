#include "../src/symbols.h"
#include "../thirdparty/ctest.h"
#include <stdio.h>

CTEST(check, check_1)
{
    char expected[] = "{()}";
    char result[] = "OK";

    ASSERT_EQUAL(expected, result);
}

CTEST(check, check_2)
{
    char expected[] = "{([)}";
    char result[] = "FAIL";

    ASSERT_EQUAL(expected, result);
}
