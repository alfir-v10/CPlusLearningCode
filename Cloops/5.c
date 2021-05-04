#include <stdio.h>

int main()
{
    int N, i, s;
    s = 0;
    scanf("%d", &N);
    if (N == 0)
        s = 1;
    else
    {
        for(i = 1; i <= N; i++)
        {
            if (s == 0)
                s = s + i;
            s = s * i;
        }
    }
    printf("%d", s);
    return 0;
}