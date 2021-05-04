#include <stdio.h>

int main()
{
    int n, k, m = 1000, m1, x = -1000, x1, i, j;
    scanf("%d %d", &n, &k);
    int a[n][k], b[k];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            b[j] = i == 0 ? 0 : b[j];
            scanf("%d", &a[i][j]);
            b[j] += a[i][j];
        }
    }
    for (i = 0; i < k; i++)
    {
        m1 = m > b[i] ? i : m1;
        m = m > b[i] ? b[i] : m;
        x1 = x < b[i] ? i : x1;
        x = x < b[i] ? b[i] : x;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
            printf("%d ", j == m1 ? a[i][x1] : j == x1 ? a[i][m1] : a[i][j]);
        printf("\n");
    }
}