#include <stdio.h>

int main()
{
    int k, a, b;
    scanf("%d %d %d", &k, &a, &b);
    printf("%d", (a + b) % k);
    return 0;
}