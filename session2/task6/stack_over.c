/* Program with a stack-based buffer overrun */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char* argv[])
{
    char str[10];
    strcpy(str, "Hello World!");

    printf("String is: %s\n", str);

    return 0;
}
