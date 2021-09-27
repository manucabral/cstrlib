#include "cstrlib.h"

int main(int argc, char *argv[])
{
    char string[16];
    char second_string[24];

    fgets(string, sizeof(string), stdin);
    
    printf("%d\n", cstrempty(string));
    printf("%d\n", cstrlen(string));
    printf("%c\n", cstrget(string, 0));

    cstrcpy(string, second_string);

    if(cstrcmp(string, second_string) == 0)
        puts("Equals");
    else
        puts("Not equals");
    
    return 0;
}