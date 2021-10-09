#include "lib/cstrlib.h"

int main(int argc, char *argv[])
{
    char string[16];

    fgets(string, sizeof(string), stdin);

    puts(cstradd(string, "todo bien?"));
    
    return 0;
}