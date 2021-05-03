#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);
    printf("%.0f", N * (pow(2, 30) - pow(10, 9)));
    return 0;
}