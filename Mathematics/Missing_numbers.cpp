// Time: O(n)   Space: O(1)

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ans = 0;
        for (auto i : nums)
        {
            ans = ans ^ i;
        }
        for (int i = 0; i <= nums.size(); i++)
        {
            ans = ans ^ i;
        }
        return ans;
    }
};