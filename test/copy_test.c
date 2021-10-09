#include "lib/cstrlib.h"

int main(int argc, char *argv[])
{
    char string[16];
    char second_string[24];

    fgets(string, sizeof(string), stdin);

    cstrcpy(string, second_string);
    
    return 0;
}