#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    while (a > 0)
    {
        printf("%c", 91 - a);
        a--;
    }
    return 0;
}