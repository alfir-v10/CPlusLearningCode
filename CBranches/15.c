#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    float r1, r2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    r1 = sqrt(pow(x1, 2) + pow(y1, 2));
    r2 = sqrt(pow(x2, 2) + pow(y2, 2));
    if (r1 < r2)
        printf("1");
    else
        printf("2");
    return 0;
}