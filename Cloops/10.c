#include <stdio.h>

int main()
{
    int a, k, i;
    k = 0;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        if ((a % i) == 0)
            k++;
    }
    if (k == 2)
        printf("1\n");
    else
        printf("0\n");
    return 0;
}