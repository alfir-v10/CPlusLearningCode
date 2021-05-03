#include <stdio.h>

int main()
{
    int a, b;
    int x, y;
    scanf("%d %d", &a, &b);
    x = (a / b) % 10;
    y = (int)((float)a / (float)b * 10) % 10;
    printf("%d %d", x, y);
    return 0;
}