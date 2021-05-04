#include <stdio.h>

int factorial(int k)
{
    int n = 1, i;
    for (i = 1; i <= k; i++)
        n *= i;
    return n;
}

int main(void)
{
    int f;
    scanf("%d", &f);
    printf("%d", factorial(f));
    return 0;
}

