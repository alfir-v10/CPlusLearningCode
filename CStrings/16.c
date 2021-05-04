#include <stdio.h>

int main()
{
    char c;
    short int type = 0, dot = 0;

    scanf("%c", &c);
    type = c == '+' || c == '-' || 48 <= c && c <= 57;

    while (type && scanf("%c", &c) != EOF && c && c != '\n')
    {
        if (!(c == '.' || 48 <= c && c <= 57)) type = 0;
        if (type == 2 && c == '.')
            type = 0;
        else if (c == '.')
        {
            dot = 1;
            type = 2;
        }
        else
            dot = 0;
    }
    printf(type == 1 ? "int" : type == 2 && !dot ? "float" : "error");
    return 0;
}