#include <stdio.h>

int main() {
    int a;
    int b;
    scanf("%d", &b);
    scanf("%d", &a);
    while (a != -9999)
    {
        if (b < a)
            b = a;
        else
        {
            printf("NO");
            return 0;
        }
        scanf("%d", &a);
    }
    printf("YES");
    return 0;
}