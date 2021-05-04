#include <stdio.h>

int main()
{
    char str[256];
    int x = 256, y = 0;
    fgets(str, 256, stdin);
    for (int i = 0; str[i] != EOF && str[i] != 0x00; ++i)
    {
        if (str[i] == '/' && str[i + 1] == '*')
            x = i;
        if (i > x && str[i] == '*' && str[i + 1] == '/')
        {
            y = i + 2;
            break;
        }
    }
    if (y)
    {
        for (; str[y] != EOF && str[y] != 0x00; ++y, ++x)
            str[x] = str[y];
        str[x] = '\0';
    }
    puts(str);
    return 0;
}