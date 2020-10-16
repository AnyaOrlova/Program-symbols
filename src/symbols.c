#include "symbols.h"
#include <ctype.h>
#include <stdio.h>

char* check_brackets(const char* symbol)
{
    switch (*symbol) {
    case '\0':
    case ')':
    case '}':
    case ']':
        return (char*)symbol;
    case '(': {
        char* ret = check_brackets(symbol + 1);
        return (*ret == ')') ? check_brackets(ret + 1) : (char*)symbol;
    }
    case '{': {
        char* ret = check_brackets(symbol + 1);
        return (*ret == '}') ? check_brackets(ret + 1) : (char*)symbol;
    }
    case '[': {
        char* ret = check_brackets(symbol + 1);
        return (*ret == ']') ? check_brackets(ret + 1) : (char*)symbol;
    }
    default:
        return check_brackets(symbol + 1);
    }
}
