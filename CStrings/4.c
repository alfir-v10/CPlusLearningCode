#include <stdio.h>

int main()
{
    int a;
    scanf("%c", &a);
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        printf("en");
    else if(a >= '0' && a <= '9')
        printf("digit");
    else
        printf("error");
    return 0;
}