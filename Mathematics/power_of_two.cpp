// Time: O(1)  Space: O(1)
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        return n > 0 && not(n & (n - 1));
    }
};