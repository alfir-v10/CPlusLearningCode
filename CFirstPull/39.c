#include <stdio.h>
#include <math.h>

int main()
{
    int k, T;
    float N0, l, N;
    scanf("%d", &k);
    N0 = 7.5e+10;
    T = 5570;
    l = log(2) / T;
    N = N0 * exp(-l * k) / 10e8;
    printf("%.2lf", N);
    return 0;
}