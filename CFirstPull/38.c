#include <stdio.h>
#include <math.h>

int main()
{
    int h;
    float r, z;
    r = 1.29;
    z = 1.25e-4;
    scanf("%d", &h);
    printf("%.2f", r * exp(-h * z));
    return 0;
}