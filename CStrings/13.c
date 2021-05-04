#include <stdio.h>
#include <string.h>
int main()
{
    int c;
    char dir[10];
    int step;
    int x = 0;
    int y = 0;
    scanf("%d", &c);
    while (c > 0)
    {
        scanf("%s %d", &dir, &step);
        if (strcmp(dir, "North") == 0)
            x += step;
        if (strcmp(dir, "South") == 0)
            x -= step;
        if (strcmp(dir, "East") == 0)
            y += step;
        if (strcmp(dir, "West") == 0)
            y -= step;
        c--;
    }
    printf("%d %d", y, x);
    return 0;
}