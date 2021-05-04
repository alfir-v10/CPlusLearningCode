#include <stdio.h>

int main()
{
    int a, b, i;
    i = 1;
    scanf("%d", &b);
    scanf("%d", &a);
    while (a != -9999)
    {
        if (b < a)
        {
            b = a;
            i++;
        }
        else
        {
            printf("%d", i + 1);
            return 0;
        }
        scanf("%d", &a);
    }
    printf("0");
    return 0;
}