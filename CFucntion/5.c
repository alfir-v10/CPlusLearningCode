#include <stdio.h>

int factorial(int p)
{
    int n = 1, i;
    for (i = 1; i <= p; i++)
        n *= i;
    return n;
}

int combin(int n, int k)
{
    int c, nk;
    nk = n - k;
    c = factorial(n) / (factorial(k) * factorial(nk));
    return c;
}

int main(void){
    int n = 0, k = 0;
    scanf("%d%d", &n, &k);
    printf("%d",combin(n,k));
    return 0;
}
