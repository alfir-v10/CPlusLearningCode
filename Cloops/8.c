#include <stdio.h>

int main()
{
    int a, b, i;
    scanf("%d %d", &a, &b);
    for(a; a <= b; a++)
    {
        for (i = 1; i <= a; i++)
            printf("%4d", a);
    }
    return 0;
}