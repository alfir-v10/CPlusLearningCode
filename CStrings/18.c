#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i;
    while (scanf("%s", s) != EOF)
    {
        for (i = strlen(s) - 1; i >= 0; printf("%c", s[i--]));
        printf(" ");
    }
}