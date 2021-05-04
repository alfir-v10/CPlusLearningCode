#include <stdio.h>

int main()
{
    int a, b, k, i;
    scanf("%d %d", &a, &b);
    i = 0;
    for(a; a <= b; a++)
    {
        for (k = 0; k <= i; k++)
            printf("%5d", a);
        i++;
    }
    return 0;
}