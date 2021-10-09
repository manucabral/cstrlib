#include "lib/cstrlib.h"

int main(int argc, char *argv[])
{
    char string[16];

    fgets(string, sizeof(string), stdin);
    
    printf("%d\n", cstrempty(string));
    
    return 0;
}