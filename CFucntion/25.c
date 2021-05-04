#include <math.h>

int abs_arr(int arr[], int n)
{
    arr[n];
    int a = 0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < 0)
        {
            arr[i] = fabs(arr[i]);
            ++a;
        }
    }
    return a;
}