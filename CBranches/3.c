#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int s;
    scanf("%d", &s);
    switch (s % 2) {
        case 0 : printf("Не любит\n"); break;
        case 1 : printf("Любит\n"); break;
        default: break;
    }
    return 0;
}