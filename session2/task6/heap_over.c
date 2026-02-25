/* Program with a heap-based buffer overrun */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char* argv[])
{
    char* str = malloc(10);
    strcpy(str, "Hello World!");

    printf("String is: %s\n", str);

    free(str);

    return 0;
}
