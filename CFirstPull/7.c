#include <stdio.h>

int main()
{
    int a, x, y, z;
    scanf("%d", &a);
    x = a / 100;
    y = a / 10 % 10;
    z = a % 10;
    printf("%d%d%d", z, y, x);
    return 0;
}