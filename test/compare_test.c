#include "lib/cstrlib.h"

int main(int argc, char *argv[])
{
    char string[16];
    char second_string[24];

    fgets(string, sizeof(string), stdin);
    
    fgets(second_string, sizeof(second_string), stdin);

    if(cstrcmp(string, second_string) == 0)
        puts("Equals");
    else
        puts("Not equals");
    
    return 0;
}