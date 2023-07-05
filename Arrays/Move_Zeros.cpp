
// Time : O(n)    Space:O(1)

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int nonZero = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[j], nums[nonZero++]);
            }
        }
        // int i=0,n=nums.size(),k=0;
        // while(k<n){
        //     if(nums[k]!=0){
        //       swap(nums[k],nums[i++]);
        //     }
        //     k++;
        // }
    }
};