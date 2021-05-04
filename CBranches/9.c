#include <stdio.h>

int main()
{
    int a, s, b;

    scanf("%d", &a);
    s = (a % 10 == 0) || (a % 10 == 5) || (a % 10 == 6) ||
            (a % 10 == 7) || (a % 10 == 8) || (a % 10 == 9) ||
            ((10 <= a) && (a <= 14));
    b = (a % 10 == 1) && (a != 11);
    switch(s)
    {
        case 1: printf("Мне %d лет", a); break;
        default:
            switch(b)
            {
                case 1: printf("Мне %d год", a); break;
                default:
                    printf("Мне %d года", a); break;
            }
            break;
    }
    return 0;
}