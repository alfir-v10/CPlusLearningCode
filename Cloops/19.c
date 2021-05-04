#include <stdio.h>

int main()
{
    int a;
    int i = 1;
    scanf("%d", &a);
    while ((a / 10) != 0)
    {
        a = a / 10;
        i++;
    }
    printf("%d", i);
    return 0;
}