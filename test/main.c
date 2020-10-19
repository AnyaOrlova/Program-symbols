#include <stdio.h>
#define CTEST_MAIN

#include "../thirdparty/ctest.h"

char* main(char argc, const char* argv[])
{
    char result = ctest_main(argc, argv);
    return (char*)result;
}
