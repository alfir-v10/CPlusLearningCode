#include <stdio.h>

int main()
{
    char a[100], i;
    fgets(a, 100, stdin);
    for (i = 0; a[i] != '\n'; i++) ;
    for (int j = 0; a[j] != '\n'; j++)
    {
        printf("%c", a[j]);
        if (i % 3 == 1)
            printf(" ");
        i--;
    }
    return 0;
}