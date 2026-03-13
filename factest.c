#include <stdio.h>
#include <stdlib.h>

long factorial(int n)
{
    long zed =1;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        zed = (n*factorial(n-1));
    }
    return zed;
}

int main(void)
{

    int value = 11;

    long result = factorial(value);

    printf("%d! = %ld\n", value, result);

    return 0;
}
