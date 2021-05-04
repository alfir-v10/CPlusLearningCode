#include <stdio.h>

int main()
{
    int i, max, min;
    scanf("%d", &i);
    max = min = i;
    while (i != 0)
    {
        if (max < i)
            max = i;
        if (i < min)
            min = i;
        scanf("%d", &i);
    }
    printf("%d %d", max, min);
    return 0;
}