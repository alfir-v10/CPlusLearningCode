#include <stdio.h>

int main()
{
    int N, k;
    scanf("%d %d", &k, &N);
    for(k; k <= N; k++)
    {
        if (k > 0)
            printf("%d ", k);
    }
    return 0;
}