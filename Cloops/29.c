#include <stdio.h>

int main()
{
    int a, b, d;
    scanf("%d",&a);
    b = a;
    while (scanf("%d", &a) != EOF)
    {
        if (b != a)
        {
            b = a;
            printf("%d ", b);
        }
    }
    return 0;
}