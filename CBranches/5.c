#include <stdio.h>

int main()
{
    int     a, b;
    char    c;
    float   s;

    scanf("%d %d %c", &a, &b, &c);
    switch(c)
    {
        case '+':
            s = (float)a + b;
            printf("%.2f\n", s);
            break;
        case '*':
            s = (float)a * b;
            printf("%.2f\n", s);
            break;
        case '/':
            switch(b)
            {
                case 0: printf("ERROR!"); break;
                default:
                    s = (float)a / b;
                    printf("%.2f\n", s);
                    break;
            }
            break;
        case '-':
            s = (float)a - b;
            printf("%.2f\n", s);
            break;
        default:
            printf("ERROR!\n");
            break;
    }
    return 0;
}