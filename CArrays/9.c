#include <stdio.h>

int main()
{
    int N, i, a;
    scanf("%d", &N);
    int x[N];
    int max = 0, min = 0;
    int i_max, i_min;
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a);
        x[i] = a;
        if (max==0 && min==0)
            max = min = a;
        if (max <= a)
        {
            max = a;
            i_max = i;
        }
        if (min >= a)
        {
            min = a;
            i_min = i;
        }
    }
    int c = x[i_max];
    x[i_max] = x[i_min];
    x[i_min] = c;
    for (i = 0; i < N; i++)
        printf("%d ", x[i]);
    return 0;
}