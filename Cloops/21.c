#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int i = 1;
    while(pow(2, i) < a)
        i++;
    printf("%d ", i);
    return 0;
}