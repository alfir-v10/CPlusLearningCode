#include <stdio.h>

int main()
{
    char s[100];
    fgets(s, 100, stdin);
    int k = 0;
    while (s[k] != '\0')
    {
        if (k == 0 && s[k] == ' ')
            k++;
        else if (s[k] == ' ' && s[k] == '\0')
            k++;
        else if(s[k] == ' ' && s[k-1] == ' ')
            k++;
        else
            printf("%c", s[k++]);
    }
    return 0;
}