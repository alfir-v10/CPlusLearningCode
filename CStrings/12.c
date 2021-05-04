#include <stdio.h>

int main()
{
    char s1[100];
    char s2[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    int k = 0;
    int ham = 0;
    while (s1[k] != '\0' && s2[k] != '\0')
    {
        if (s1[k] != s2[k])
            ham++;
        k++;
    }
    printf("%d", ham);
    return 0;
}