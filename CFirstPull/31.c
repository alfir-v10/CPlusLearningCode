#include <stdio.h>
#include <math.h>

int main()
{
    int a, k, x1, x2, x3, x4;
    scanf("%d %d", &k, &a);
    x1 = a / 100 / 10;
    x2 = a / 100 % 10;
    x3 = a % 100 / 10;
    x4 = a % 100 % 10;
    printf("%d", (x1 * (int)pow(k, 3) + x2 * (int)pow(k, 2) + x3 * (int)pow(k, 1) + x4 * (int)pow(k, 0)));
    return 0;
}