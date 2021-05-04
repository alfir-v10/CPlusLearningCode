int is_prime(int k)
{
    for (int i = 2; i <= (k / 2); i++)
        if ((k % i) == 0)
            return 0;
    return 1;
}