#include <stdio.h>

int main()
{
    int N, a;
    scanf("%d", &N);
    int x[N];
    int i = 1;
    while (scanf("%d", &a) != EOF)
    {
        x[i] = a;
        i++;
    }
    for(i = 0; i < N; N--)
        printf("%d ", x[N]);
    return 0;
}