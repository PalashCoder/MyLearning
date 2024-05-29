class Solution
{
public:
    int reverse(int x)
    {
        long revNo = 0;
        int sign = x < 0 ? -1 : 1;
        x = abs(x);
        while (x > 0)
        {
            int rem = x % 10;
            if (revNo > (INT_MAX - rem) / 10)
            {
                return 0;
            }
            revNo = (revNo * 10) + rem;
            x /= 10;
        }
        return sign * revNo;
    }
};