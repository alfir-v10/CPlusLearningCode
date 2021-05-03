#include <stdio.h>
#include <math.h>
int main()
{
    int h;
    double s;
    int r1, r0;
    double pi = 3.14159265358979323846;
    scanf("%d %d", &r1, &r0);
    h = fabs(r0 - r1);
    s = pi * (pow(r0, 2) - pow(r1, 2)) * 100;
    printf("%d %.2f", h, s);
    return 0;
}