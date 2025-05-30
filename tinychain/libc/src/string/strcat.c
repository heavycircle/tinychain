#include "string/strcat.h"

char *strcat(char *dest, const char *src)
{
    char *tmp = dest;

    while (*dest)
        dest++;
    while ((*dest++ = *src++) != '\0')
        /* nothing */;
    return tmp;
}
