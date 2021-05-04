#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int i, j, k, l;
    int array[N][N];
    for (i = 0; i < N; i++)
    {
        k = 1;
        l = N;
        for (j = 0; j < N; j++)
        {
            if (i % 2 == 0)
            {
                array[i][j] = k;
                k++;
            }
            else
            {
                array[i][j] = l;
                l--;
            }
        }
    }
    for (i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
            printf("%d ", array[i][j]);
        printf("\n");
    }
    return 0;
}