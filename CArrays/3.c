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
    for (i = 0; i < N; i++){
        if (x[i] % 2  == 0)
            printf("%d ", x[i]);
    }
    for(i = 0; i < N; i++)
    {
        if (x[i] % 2 != 0)
            printf("%d ", x[i]);
    }
    return 0;
}