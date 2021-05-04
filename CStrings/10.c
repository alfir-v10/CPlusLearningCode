#include <stdio.h>
#include <math.h>

int main()
{
    char s[100];
    fgets(s, 100, stdin);
    int k = 0;
    while (s[k] != '\0')
        k++;
    int d = k-2;
    int sum = 0;
    k = 0;
    while (d >= 0)
    {
        sum  = sum + (s[k] - '0') * (int)pow(2, d);
        k++;
        d--;
    }
    printf("%d", sum);
    return 0;
}