#include <stdio.h>

int main()
{
    int k, a, b, c, d;
    scanf("%d %d %d %d %d", &k, &a, &b, &c, &d);
    int n = 26;
    printf("%d %d %d %d", (a + k) % n, (b + k) % n, (c + k) % n, (d + k) % n);
    return 0;
}