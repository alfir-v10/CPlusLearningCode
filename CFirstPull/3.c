#include <stdio.h>

int main()
{
    int k;
    scanf("%d", &k);
    int h = k / 3600;
    int m = (k - h * 3600) / 60;
    printf("%d %d", h, m);
    return 0;
}