#include "cstrlib.h"

int cstrempty(unsigned char *string)
{
    return string[0] == '\0';
}

size_t cstrlen(unsigned char *string)
{
    int count = 0;
    while (*string++ != '\0')
        count++;
    return count;
}

char cstrget(unsigned char *string, int index)
{
    if (index < 0 || index >= cstrlen(string))
        return '\0';
    return string[index];
}

char cstrgetf(unsigned char *string)
{
    return string[0];
}

int cstrcmp(unsigned char *alpha, unsigned char *beta)
{
    while (*alpha != '\0' && *beta != '\0' && *alpha == *beta)
    {
        alpha++;
        beta++;
    }
    return *alpha - *beta;
}

int cstrcpy(unsigned char *string, unsigned char *dest)
{
    while (*string != '\0')
        *dest++ = *string++;
    return cstrcmp(string, dest);
}

char *cstradd(unsigned char *dest, unsigned char *string)
{
    char *aux = dest;
    while (*++aux);
    --aux;
    while (*aux++ = *string++);
    return dest;
}
