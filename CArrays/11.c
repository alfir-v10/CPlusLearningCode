#include <stdio.h>

int main()
{
    int N, M, a;
    scanf("%d %d", &N, &M);
    int i, j;
    int array[N][M];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            scanf("%d", &a);
            array[i][j] = a;
        }
    }
    for (j = 0; j < M; j++)
    {
        for (i = 0; i < N; i++)
            printf("%d ", array[i][j]);
        printf("\n");
    }
    return 0;
}