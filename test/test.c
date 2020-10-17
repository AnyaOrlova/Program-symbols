#include "../src/symbols.h"
#include "../thirdparty/ctest.h"

CTEST(file_check, file_exist)
{
    FILE* result = fopen("../input.txt", "r");
    if (result == NULL) {
        result = 0;
    }
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(file_check, file_dosnt_exist)
{
    FILE* result = fopen("input.txt", "r");
    if (result == NULL) {
        result = 0;
    }
    int expected = 0;
    ASSERT_EQUAL(expected, result);
}
CTEST(check, check_1)
{
    char expected[] = "{([])}";
    char result[] = "OK";
  /*  for (int i = 0; i < 5; i++) {
        result[i] = tolower(result[i]);
   */ }
  ASSERT_STR(expected, result);
  }
  CTEST(check, check_2)
  {
      char expected[] = "{[()";
      char result[] = "FAIL";
      /* for (int i = 0; i < 5; i++) {
           result[i] = tolower(result[i]);
       }*/
      ASSERT_STR(expected, result);
  }
