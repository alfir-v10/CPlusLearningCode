#include <stdio.h>

int main(void)
{
    char str1[40];
    char str2[20];
    scanf("%s", str1);
    scanf("%s", str2);
    printf("%s.%s", str1, str2);
    return 0;
}