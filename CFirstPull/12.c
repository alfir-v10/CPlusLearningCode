#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", 1 - 2 * (a % 2));
    return 0;
}