#include <stdio.h>
#include <math.h>

int main()
{
    int x1, x2, x3, x4, x5, ch2;
    scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);
    ch2 = (int)fabs(x1 % 2) + (int)fabs(x2 % 2) + (int)fabs(x3 % 2) +
            (int)fabs(x4 % 2) + (int)fabs(x5 % 2);
    printf("%d", ch2 - (5 - ch2));
    return 0;
}