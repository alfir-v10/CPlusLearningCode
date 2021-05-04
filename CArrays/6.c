#include <stdio.h>

int main()
{
    int N, i, a;
    scanf("%d", &N);
    int x[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a);
        x[i] = a;
    }
    int j = 0;
    for(i = 0; i < N; i++)
        j += x[i];
    printf("%.2f", (double)j / N);
    return 0;
}