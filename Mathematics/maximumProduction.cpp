// Time: O(n)   Space: O(1)

class Solution
{
public:
    int maximumProduct(vector<int> &nums)
    {
        int maxi1 = INT_MIN, maxi2 = 0, maxi3 = 0;
        int mini1 = INT_MAX, mini2 = 0;
        for (auto i : nums)
        {
            if (i >= maxi1)
            {
                maxi3 = maxi2;
                maxi2 = maxi1;
                maxi1 = i;
            }
            else if (i >= maxi2)
            {
                maxi3 = maxi2;
                maxi2 = i;
            }
            else if (i >= maxi3)
            {
                maxi3 = i;
            }
            if (i <= mini1)
            {
                mini2 = mini1;
                mini1 = i;
            }
            else if (i < mini2)
            {
                mini2 = i;
            }
        }
        // cout<<maxi1<<" "<<maxi2<<" "<<maxi3<<endl;
        // cout<<mini1<<" "<<mini2<<" "<<mini3<<endl;
        return max((maxi1 * maxi2 * maxi3), (maxi1 * mini2 * mini1));
    }
};