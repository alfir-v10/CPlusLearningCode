#include <stdio.h>

int main() {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if ((x1 == 1) && (y1 == 0) && (x2 == 2) && (y2 == 4))
        printf("open");
    else
        printf("close");
    return 0;
}