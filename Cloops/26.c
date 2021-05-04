#include <stdio.h>

int main()
{
    int a = 1;
    while (a)
    {
        scanf("%d", &a);
        if(a > 0 && a != 0)
            printf("%d ", a);
    }
    return 0;
}