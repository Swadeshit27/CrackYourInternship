// Time : O(n)    Space:O(1)

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxprofit = 0, min = prices[0];
        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < min)
            {
                min = prices[i];
            }
            if (prices[i] - min > maxprofit)
            {
                maxprofit = prices[i] - min;
            }
        }
        return maxprofit;
    }
};