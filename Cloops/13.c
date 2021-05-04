#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    while ( a != -9999 )
    {
        printf("%d ", a);
        scanf("%d", &a);
    }
    return 0;
}