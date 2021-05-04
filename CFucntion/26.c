int minmax(int arr[], int n, int fl)
{
    int a = arr[0];
    if (fl == 1)
    {
        for (int i = 0; i < n; ++i)
        {
            if(arr[i] > a)
                a = arr[i];
        }
        return(a);
    }
    if(fl == 0)
    {
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] < a)
                a = arr[i];
        }
        return(a);
    }
}
