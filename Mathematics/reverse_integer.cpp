// time: O(n) where n is the length of the integer space: O(1)

class Solution
{
public:
    int reverse(int x)
    {
        long long rev = 0;
        while (x > 0 || x < 0)
        {
            int dig = x % 10;
            rev = rev * 10 + dig;
            x = x / 10;
        }
        if (rev >= INT_MAX || rev <= INT_MIN)
            return 0;
        return rev;
    }
};