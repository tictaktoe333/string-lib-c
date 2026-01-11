#include <cstdlib>
#include "strlen.h"

char* strcopy(const char* src) {
    char* dest = (char*)malloc(strlen(src) + 1);
    char* dest_start = dest;
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return dest_start;
}