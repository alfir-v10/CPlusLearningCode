#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50];
    char str2[50];
    int i, j, a;

    fgets(str1, 50, stdin);
    fflush(stdin);
    fgets(str2, 50, stdin);
    while (strlen(str1) == strlen(str2))
    {
        for (a = 0; a < strlen(str1); ++a)
        {
            if ((str1[a] == 32 && str2[a] != 32) || (str2[a] == 32 && str1[a] != 32))
            {
                printf("no");
                return 0;
            }
        }
        for (i = 0, j = 0; i < strlen(str1) && j < strlen(str2); ++i, ++j)
        {
            if (str1[i] != str2[j] && str1[i] != str2[j] + 32 && str1[i] !=32)
                if (str2[i] != str1[j] && str2[i] != str1[j] + 32 && str2[i] !=32)
                {
                    printf("no");
                    return 0;
                }
            continue;
        }
        printf("yes");
        return 0;
    }
    printf("no");
    return 0;
}