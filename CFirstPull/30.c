#include <stdio.h>
#include <math.h>

int main()
{
    int a, x1, x2, x3, x4;
    scanf("%d", &a);
    x1 = a / 100 / 10;
    x2 = a / 100 % 10;
    x3 = a % 100 / 10;
    x4 = a % 100 % 10;
    printf("%d", (x1 * (int)pow(2, 3) + x2 * (int)pow(2, 2) + x3 * (int)pow(2, 1) + x4 * (int)pow(2, 0)));
    return 0;
}