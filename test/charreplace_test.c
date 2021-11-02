#include "lib/cstrlib.h"

int main(int argc, char *argv[])
{
    char string[16];

    fgets(string, sizeof(string), stdin);

    cstrcr(string, '-', ' ');

    printf("%s\n", string);

    return 0;
}