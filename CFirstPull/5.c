#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    double stakan = 249.5;
    double kapla = 0.05;
    double molek = 3e-23;
    double N_kapel;
    N_kapel = (stakan / kapla) * N;
    double N_molek;
    N_molek = ((kapla / molek) * N_kapel);
    printf("%.0f %.3e", N_kapel, N_molek);
    return 0;
}