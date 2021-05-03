#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", a - a / 60 * 60);
    return 0;
}