#include <stdio.h>

int main()
{
    int a, x, y, z, d;
    scanf("%d", &a);
    x = a / 1000;
    y = a / 100 % 10;
    z = a / 10 % 10;
    d = a % 10;
    printf("%.2f", (float)(x * z) / (float)(y * d));
    return 0;
}