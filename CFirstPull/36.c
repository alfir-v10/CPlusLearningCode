#include <stdio.h>

int main()
{
    int a, x1, x2, x3, x4;
    scanf("%d", &a);
    x1 = a / 100 / 10;
    x2 = a / 100 % 10;
    x3 = a % 100 / 10;
    x4 = a % 100 % 10;
    printf("%d%d%d%d", (x3 + 7) % 10, (x4 + 7) % 10, (x1 + 7) % 10, (x2 + 7) % 10);
    return 0;
}