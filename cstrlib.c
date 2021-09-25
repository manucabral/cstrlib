#include "cstrlib.h"

int cstrempty(unsigned char *string)
{
    return string[0] == '\0';
}

int cstrlen(unsigned char *string)
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