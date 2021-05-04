void minmax(int * x, int * y)
{
    int tmp;
    if (x - y < 0)
    {
        tmp = *x;
        *x = *y;
        *y = tmp;
    }
}