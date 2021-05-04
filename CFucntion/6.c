#include <stdio.h>

int sequence_multipliers(int p)
{
    int i;
    if (p > 1)
    {
        for(i =- 9999; i <= p; i++)
        {
            if (p == i * (i + 1) * (i + 2))
                return i;
        }
    }
    else
        return -1;
}

int main(void){
    int n;
    scanf("%d", &n);
    printf("%d", sequence_multipliers(n));
    return 0;
}