class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long total = 0; // Use long long to avoid overflow for large values of N
        for (int i = 1; i <= N; i++)
        {
            total += (N / i) * i;
        }
        return total;
    }
};