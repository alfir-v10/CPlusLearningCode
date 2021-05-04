void sum_digits(int * x)
{
    int sum = 0;
    for (int i = *x; i > 0; i = (i / 10))
        sum = sum + i % 10;
    *x = sum;
}