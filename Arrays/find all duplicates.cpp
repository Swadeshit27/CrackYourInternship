// best solution
// time:O(n)  Space: O(1)

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (nums[abs(nums[i]) - 1] < 0)
            {
                ans.push_back(abs(nums[i]));
            }
            else
                nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
        }

        return ans;
    }
};

// better solution
// time:O(n)  Space: O(n)
vector<int> findDuplicates(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n + 1, 0);
    vector<int> output;
    for (int i = 0; i < n; i++)
        ans[nums[i]]++;
    for (int i = 0; i <= n; i++)
    {
        // cout<<ans[i]<<" "<<i<<endl;
        if (ans[i] > 1)
            output.push_back(i);
    }
    return output;
}