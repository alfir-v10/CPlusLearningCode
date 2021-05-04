#include <stdio.h>

int main()
{
    int n;
    int k = 1;
    scanf("%d", &n);
    while ((k != n) && (k <= n) && (n != 0))
        k *= 2;
    if (k == n)
        printf("YES");
    else
        printf("NO");
    return 0;
}