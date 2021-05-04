#include <stdio.h>

int main ()
{
    int a, b, i, j,  diag1, diag2;
    diag1 = 0;
    diag2 = 0;
    scanf ("%d", &a);
    int array[a][a];
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            scanf ("%d", &b);
            array[i][j] = b;
        }
    }
    int c = 1;
    for (i = 0; i < a; i++)
    {
        for (j = c; j < a; j++)
            diag1 = diag1 + array[i][j];
        c++;
    }
    c = 1;
    for (i = a-1; i > 0; i--)
    {
        for (j = c; j < a; j++)
            diag2 = diag2 + array[i][j];
        c++;
    }
    if (diag1 < diag2)
        printf ("%d %d", diag1, diag2);
    else
        printf ("%d %d", diag2, diag1);
    return 0;
}