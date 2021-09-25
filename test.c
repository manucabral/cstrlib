#include "cstrlib.h"

int main(int argc, char *argv[])
{
    char string[16];

    gets(string);
    
    printf("%d\n", cstrempty(string));
    printf("%d\n", cstrlen(string));
    printf("%c\n", cstrget(string, 0));
    return 0;
}
