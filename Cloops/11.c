#include <stdio.h>

int main(void)
{
    int N, i;
    scanf("%d", &N);
    int max = 0;
    int number = 0;
    for (i = 1; i <= N; i++)
    {
        scanf("%d", &number);
        if (max < number)
            max = number;
    }
    printf("%d\n", max);
    return 0;
}