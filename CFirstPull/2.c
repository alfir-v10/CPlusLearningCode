#include <stdio.h>

int main()
{
    int r, h;
    double Vk, Vc;
    double pi = 3.14159265358979323846;
    scanf("%d %d", &r, &h);
    Vk = h * pi * r * r;
    Vc = (1.0 / 3.0) * h * pi * r * r;
    printf("%.2f %.2f", Vk, Vc);
    return 0;
}