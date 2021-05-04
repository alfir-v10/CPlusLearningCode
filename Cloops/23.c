#include <stdio.h>

int main()
{
    double e;
    scanf("%lf", &e);
    int k = 1;
    int b = 1;
    int f;
    double summ = 1.0;
    while (1.0 / b > e)
    {
        summ += (double)1.0  / b;
        k++;
        f = 1;
        b = 1;
        while (f <= k)
        {
            b = f * b;
            f++;
        }
    }
    summ += (double)1.0 / b;
    printf("%.8f", summ);
    return 0;
}