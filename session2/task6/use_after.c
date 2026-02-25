/* Program with a 'use after free' bug */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char* argv[])
{
    char* str = malloc(100);
    strcpy(str, "Hello World!");

    free(str);

    printf("String is: %s\n", str);  // shouldn't use memory after freeing it!

    return 0;
}
