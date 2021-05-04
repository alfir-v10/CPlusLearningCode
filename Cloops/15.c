#include <stdio.h>

int main()
{
    int a;
    int b = 0;
    scanf("%d", &a);
    while (a != 0)
    {
        b += a;
        scanf("%d", &a);
    }
    printf("%d ", b);
    return 0;
}