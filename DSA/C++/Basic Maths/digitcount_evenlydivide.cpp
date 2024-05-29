int evenlyDivides(int N)
{
    int count = 0;
    int mainNum = N;
    while (N > 0)
    {
        int rem = N % 10;
        N = N / 10;
        if (rem != 0 && mainNum % rem == 0)
        {
            count++;
        }
    }
    return count;
}