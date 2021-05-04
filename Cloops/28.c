#include <stdio.h>

int main() {
    int n, cnt = 0;
    while (scanf("%d", &n) && n > 0)
        cnt=1;
    printf(n == -9999 && cnt ? "YES" : "NO");
    return 0;
}