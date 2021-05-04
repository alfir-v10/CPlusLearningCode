#include <stdio.h>

int main()
{
    int N, i, a;
    scanf("%d", &N);
    int x[N];
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a);
        x[i] = a;
    }
    int j = 0;
    for (i = 0; i < N; i++)
        j += x[i];
    double s = (double)j / N;
    int right = 0, left = 0;
    for (i = 0; i < N; i++)
    {
        if (x[i] > s)
            right += 1;
        else
            left += 1;
    }
    int x_right[right];
    int x_left[left];
    int r = 0, l = 0;
    for (i = 0; i < N; i++)
    {
        if (x[i] > s)
        {
            x_right[r] = x[i];
            r++;
        }
        else
        {
            x_left[l] = x[i];
            l++;
        }
    }
    for (r = 0; r < right; r++)
        printf("%d ", x_right[r]);
    for (l = 0; l < left; l++)
        printf("%d ", x_left[l]);
    return 0;
}