#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%.0f\'%.0f\" = %.2fm.", a, b, (a * 12 * 25.4 + b * 25.4) / 1000);
    return 0;
}