#include <stdio.h>
#include <string.h>


int main()
{
    char str1[50];
    char str2[50];
    int i, j;

    fgets(str1,50, stdin);
    fflush(stdin);
    fgets(str2, 50, stdin);

    for (i = 0; i < strlen(str1); ++i)
        for (j = 0; j < strlen(str2); ++j)
        {
            if (str1[strlen(str1) - 2] == str2[0] || str1[strlen(str1) - 2] == str2[0] + 32)
            {
                printf("yes");
                return 0;
            }
            else if (str2[strlen(str2) - 2] == str1[0] || str2[strlen(str2) - 2] == str1[0] + 32)
            {
                printf("yes");
                return 0;
            }
            else
                printf("no");
            return 0;
        }
    return 0;
}