#include "cstrlib.h"

int cstrempty(UC *string)
{
    return string[0] == '\0';
}

size_t cstrlen(UC *string)
{
    int count = 0;
    while (*string++ != '\0')
        count++;
    return count;
}

char cstrget(UC *string, int index)
{
    if (index < 0 || index >= cstrlen(string))
        return '\0';
    return string[index];
}

char cstrgetf(UC *string)
{
    return string[0];
}

int cstrcmp(UC *alpha, UC *beta)
{
    while (*alpha != '\0' && *beta != '\0' && *alpha == *beta)
    {
        alpha++;
        beta++;
    }
    return *alpha - *beta;
}

int cstrcpy(UC *string, UC *dest)
{
    while (*string != '\0')
        *dest++ = *string++;
    return cstrcmp(string, dest);
}

char *cstradd(UC *dest, UC *string)
{
    char *aux = dest;
    while (*++aux);
    --aux;
    while (*aux++ = *string++);
    return dest;
}

void cstrcr(UC *source, CC search, CC replace)
{
    while(*source++ != '\0')
    {
        if(*source == search)
            *source = replace;
    }
};
