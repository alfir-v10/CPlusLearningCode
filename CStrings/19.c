#include <stdio.h>

int main(void)
{
    char s[100];
    gets(s);
    char s1[] = "Hello, ";
    strcat(s1, s);
    printf("%s", s1);
}