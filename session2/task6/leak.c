/*
   Program with a memory leak (compare with noleak.c)

   Note: this is inconsequential here, because the program terminates quickly.
   In programs that do other work, particularly if they are long-lived, this
   could be a serious issue.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char* argv[])
{
    char* str = malloc(100);
    strcpy(str, "Hello World!");

    printf("String is: %s\n", str);

    return 0;
}
