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
    for (i = 1; i <= N / 2 + 1; i++)
    {
        if (x[i] != x[N - i + 1])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}