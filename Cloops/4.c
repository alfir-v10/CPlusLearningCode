#include <stdio.h>

int main()
{
    int N, k;
    scanf("%d %d", &k, &N);
    for(N; N >= k; N--)
        printf("%d ", N);
    return 0;
}