#include <stdio.h>
int main()
{
    char s[10];
    fgets(s, 10, stdin);
    printf(s[0] + s[1] + s[2] == s[3] + s[4] + s[5] ? "yes" : "no");
}