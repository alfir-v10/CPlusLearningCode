#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    switch(a)
    {
        case 1: printf("%d", b); break;
        case 2: printf("%d", 31 + b); break;
        case 3: printf("%d", 31 + 28 + b); break;
        case 4: printf("%d", 31 * 2 + 28 + b); break;
        case 5: printf("%d", 31 * 2 + 28 + 30 + b); break;
        case 6: printf("%d", 31 * 3 + 28 + 30 + b); break;
        case 7: printf("%d", 31 * 3 + 28 + 30 * 2 + b); break;
        case 8: printf("%d", 31 * 4 + 28 + 30 * 2 + b); break;
        case 9: printf("%d", 31 * 5 + 28 + 30 * 2 + b); break;
        case 10: printf("%d",31 * 5 + 28 + 30 * 3 + b); break;
        case 11: printf("%d",31 * 6 + 28 + 30 * 3 + b); break;
        case 12: printf("%d",31 * 6 + 28 + 30 * 4 + b); break;
    }
    return 0;
}