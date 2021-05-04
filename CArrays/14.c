#include <stdio.h>

int main()
{
    int a, b, i , j, diag1, diag2;
    diag1 = 1;
    diag2 = 1;
    scanf("%d", &a);
    int array[a][a];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            scanf("%d", &b);
            array[i][j] = b;
        }
    }
    j = 0;
    for (i = 0; i < a; i++)
    {
        diag1 = diag1 * array[i][j];
        j++;
    }
    j = a - 1;
    for ( i = 0; i < a; i++)
    {
        diag2 = diag2 * array[i][j];
        j--;
    }
    if (diag1 > diag2)
        printf("%d %d", diag1, diag2);
    else
        printf("%d %d", diag2, diag1);
    return 0;
}