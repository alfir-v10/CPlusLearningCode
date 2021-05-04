#include <stdio.h>

int main()
{
    int N, a, i;
    scanf("%d", &N);
    int array[26];
    for (i = 0; i < 26; i++)
        array[i] = 0;
    int b = 0;
    while (b < N * 2)
    {
        scanf("%c", &a);
        if (a >= 'a' && a <= 'z' && a != ' ')
            ++array[a - 'a'];
        if (a >= 'A' && a <= 'Z'  && a != ' ')
            ++array[a - 'A'];
        b++;
    }
    for (i = 0; i < 26; i++)
        printf("%d ", array[i]);
    return 0;
}