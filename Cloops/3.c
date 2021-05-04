#include <stdio.h>

int main()
{
    int N, k, i;
    i = 0;
    scanf("%d %d", &k, &N);
    for(k; k <= N; k++)
    {
        if (k > 0)
        {
            i++;
            printf("%d ", k);
        }
    }
    printf("\n%d", i);
    return 0;
}