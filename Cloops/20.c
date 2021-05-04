#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    int i = 1;
    while (pow(2, i) <= a)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}