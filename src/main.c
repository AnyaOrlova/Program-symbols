#include "symbols.h"
#include <malloc.h>
#include <stdio.h>

char* check_brackets(const char* symbol);

int main(void)
{
    char buf[BUFSIZ];
    while (printf("String: ") && fgets(buf, BUFSIZ, stdin) && *buf != '\n')
        printf("%s\n", (*check_brackets(buf)) ? "FAIL" : "OK");
    return 0;
}
