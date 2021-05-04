#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int b = a;
    int i = 1;
    while (a /= 10)
        i++;
    int k = 0;
    while (k < i)
    {
        printf("%d", b % 10);
        b = b / 10;
        k++;
    }
    return 0;
}