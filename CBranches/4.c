#include <stdio.h>

int main()
{
    float a, b, s;
    char c;
    scanf("%c %f %f", &c, &a, &b);
    switch(c)
    {
        case '+':
            s = a + b;
            printf("%.2f\n", s);
            break;
        case '*':
            s = a * b;
            printf("%.2f\n", s);
            break;
        case '/':
            s = a / b;
            printf("%.2f\n", s);
            break;
        case '-':
            s = a - b;
            printf("%.2f\n", s);
            break;
        default:
            printf("ERROR!\n");
            break;
    }
    return 0;
}