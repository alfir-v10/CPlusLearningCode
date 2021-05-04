#include <stdio.h>

int main()
{
    int N, i, n0, n1,n2;
    scanf("%d", &N);
    n0 = 0;
    n1 = 1;
    for (i = 0; i < N; i++)
    {
        n2 = n0 + n1;
        n0 = n1;
        n1 = n2;
    }
    printf("%d", n0);
    return 0;
}
