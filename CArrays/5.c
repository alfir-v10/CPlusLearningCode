#include <stdio.h>

int main()
{
    int N, i, a;
    scanf("%d", &N);
    int x[N];
    for(i = 0; i < N; i++)
    {
        scanf("%d", &a);
        x[i] = a;
    }
    int j = 0;
    for(i = 0; i < N; i++)
    {
        if (x[0] < x[i] && x[i] < x[N - 1])
        {
            printf("%d ", x[i]);
            j++;
        }
    }
    if (j == 0)
        printf("%d", j);
    return 0;
}