#include <stdio.h>

void square(int n, char c)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%c", c);
        printf("\n");
    }
}
int main(void){
    int n;
    char c;
    scanf("%d %c", &n, &c);
    square(n, c);
    return 0;
}