#include <stdio.h>

int main()
{
    int day, month;
    scanf("%d %d", &day, &month);
    int limit;
    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12 : limit = 31; break;
        case 2: limit = 28; break;
        default: limit = 30; break;
    }
    if (day > limit || day < 1 || month > 12 || month < 1)
        printf("error");
    else
        printf("correct");
    return 0;
}