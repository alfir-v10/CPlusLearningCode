#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    scanf("%d", &N);
    int i = 1;
    while ((int)pow(i, 2) <= N)
    {
        printf("%d ", (int)pow(i, 2));
        i++;
    }
    return 0;
}