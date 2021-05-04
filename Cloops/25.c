#include <stdio.h>

int main()
{
    int a, b, d;
    scanf("%d %d", &a, &b);
    int a1 = a, b1 = b;
    while (b)
    {
        a %= b;
        d = a;
        a = b;
        b = d;
    }
    printf("%d", a1 * b1 / a);

    return 0;
}