#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", 1 - 2 * (int)fabs(a % 2));
    return 0;
}