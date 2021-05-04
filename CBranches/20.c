#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if (a <= 6)
        printf("дошкольник");
    if (7 <= a && a <= 18)
        printf("школьник");
    if (19 <= a && a <= 59)
        printf("рабочий");
    if (a >= 60)
        printf("пенсионер");
    return 0;
}