#include <stdio.h>
#include <stdlib.h>

long factorial(int n)
{
    long temp = n;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    for (int i=1;i<n-1;i++)
    {
        temp = temp * (n-i);
    }
    return temp;
}

int main(int argc, char* argv[])
{
    if (argc != 2) {
        fprintf(stderr, "Usage: ./factorial <value>\n");
        return 1;
    }

    int value = atoi(argv[1]);

    long result = factorial(value);

    printf("%d! = %ld\n", value, result);

    return 0;
}
