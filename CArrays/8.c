#include <stdio.h>

int main()
{
    int N, i, a;
    scanf("%d", &N);
    int n = N / 2;
    int x[n];
    int y[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        x[i] = a;
    }
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a);
        y[i] = a;
    }
    for (i = 0; i < n; i++)
        printf("%d ", y[i]);
    for (i = 0; i < n; i++)
        printf("%d ", x[i]);
    return 0;
}