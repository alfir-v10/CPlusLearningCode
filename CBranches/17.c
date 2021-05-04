#include <stdio.h>

int main()
{
    int x1, y1, x2;
    scanf("%d %d %d", &x1, &y1,  &x2);
    if ((x1 == 2 || y1 == 2 || x2 == 2) &&
        (y1 == 8 || x1 == 8 || x2 == 8) &&
        (x2 == 4 || x1 == 4 || y1 == 4))
        printf("open");
    else
        printf("close");
    return 0;
}