#include <stdio.h>
#include <string.h>
#define N 50

int main ()
{
    char arr1[N];
    char arr2[N];
    int a = 0, i, j;
    int len1, len2;

    fgets (arr1, N, stdin);
    fgets (arr2, N, stdin);
    len1 = strlen(arr1);
    len2 = strlen(arr2);
    for (i = 0; i < len2; ++i)
    {
        for (j = 0; j < len1; ++j)
        {
            if (arr1[i] == arr2[j])
            {
                ++a;
                break;
            }
        }
    }
    printf(a == strlen(arr1) ? "yes" : "no");
    return 0;
}