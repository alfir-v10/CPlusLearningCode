#include <stdio.h>

int main(void)
{
    int a = 0, k = 0;
    int res = 1;
    scanf("%d %d", &a, &k);
    while (k)
    {
        if (k % 2 == 0)
        {
            k /= 2;
            a *= a;
        }
        else
        {
            k--;
            res *=a;
        }
    }
    printf("%d\n", res);
    return 0;
}