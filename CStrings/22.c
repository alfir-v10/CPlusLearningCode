#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], s1[100];
    gets(s);
    fflush(stdin);
    gets(s1);
    printf(strcmp(s, s1) ? "no" : "yes");
}