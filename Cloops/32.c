#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    while (a != 2517)
        scanf("%d", &a);
    scanf("%d", &a);
    while (a != -9999)
    {
        printf("%d ", a);
        scanf("%d", &a);
    }
    return 0;
}