// time: O(log n) space: O(1)

class Solution
{
public:
    bool isPalindrome(int x)
    {

        int num = x;
        long long rev = 0;
        while (x > 0)
        {
            int dig = x % 10;
            rev = rev * 10 + dig;
            x = x / 10;
        }
        return num == rev;
    }
};