#include <stdio.h>

int main()
{
    int a, b, c, d, f, i, j;
    scanf("%d", &a);
    int array[a][a];
    for (i = 0; i < a; i++)
    {
        for(j = 0; j < a;j++)
        {
            scanf("%d", &c);
            array[i][j] = c;
        }
    }
    scanf("%d", &d);
    for (i = 0; i < a; i++)
    {
        b = d;
        while (b > 0)
        {
            int tmp = array[i][a-1];
            for (j = a - 1; j > 0; --j)
                array[i][j] = array[i][j-1];
            array[i][0] = tmp;
            b--;
        }
    }
    for (m = 0; m < a; m++)
    {
        for(n = 0; n < a; n++)
            printf("%d ", array[m][n]);
        printf("\n");
    }

    return 0;
}