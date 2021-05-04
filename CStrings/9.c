#include <stdio.h>

int main()
{
    char f;
    char str1[100];
    int k;
    f = getchar();
    gets(str1);
    gets(str1);
    for (k = 0; k < 100; k++)
    {
        if (str1[k] == f)
        {
            printf("%d", k);
            return 0;
        }
    }
    printf("-1");
    return 0;
}