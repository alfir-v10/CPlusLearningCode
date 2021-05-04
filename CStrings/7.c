#include <stdio.h>

int main()
{
    int i;
    i = 0;
    while (getchar() != '\0')
        ++i;
    printf("%d", i);
    return 0;
}