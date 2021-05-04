int gcd(int x, int y)
{
    int nod = 1;
    for (int i = 1; i <= (x > y ? y : x); i++)
        (!(x % i) && !(y % i) && i > nod) ? nod = i : 0;
    return nod;
}

void reduce_fraction(int * a, int * b)
{
    int tmp;
    tmp = *a;
    *a = (*a / gcd(*a, *b));
    *b = (*b / gcd(tmp, *b));
}