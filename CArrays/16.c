#include <stdio.h>

int main ()
{
    int a, b,d, i, j, cum;
    scanf ("%d", &a);
    scanf ("%d", &d);
    int array[a][d];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < d; j++)
        {
            scanf ("%d", &b);
            array[i][j] = b;
        }
    }
    j = d - 1;
    while (j >= 0)
    {
        cum = 0;
        for (i = 0; i < a; i++)
            cum = cum + array[i][j];
        printf("%d ", cum);
        j--;
    }
    return 0;
}