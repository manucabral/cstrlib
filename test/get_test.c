#include "lib/cstrlib.h"

int main(int argc, char *argv[])
{
    char string[16];
    fgets(string, sizeof(string), stdin);
    
    printf("%c\n", cstrget(string, 0));
    
    return 0;
}