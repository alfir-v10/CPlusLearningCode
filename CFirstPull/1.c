#include <stdio.h>
#include <math.h>

int main()
{
    int x, a, b, c;
    scanf("%d", &x);
    a = (int)pow(x, 2);
    b = a * 6;
    c = pow(x, 3);
    printf("%d %d %d", a, b, c);
    return 0;
}