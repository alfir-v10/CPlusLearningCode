#include <stdio.h>

int main()
{
    int a, k, i;

    k = 0;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if ((a % i) == 0)
        {
            k++;
            printf("%d ", i);
        }
    }
    printf("\n%d", k);
    return 0;
}