#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    switch(a)
    {
        case 1: printf("%d", b); break;
        case 2: printf("%d", (b / 10) * (b % 10)); break;
        case 3: printf("%d", (b / 100) * (b / 10 % 10) * (b % 10)); break;
        case 4: printf("%d", (b / 1000) * (b / 100 % 10) * (b / 10 % 10) * (b % 10)); break;
    }
    return 0;
}