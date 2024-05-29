class Solution
{
public:
    bool isPalindrome(int x)
    {
        int mainNo = x, revNo = 0;
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
        if (mainNo == revNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};