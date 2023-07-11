// Time: O(n)  Space:(n)[no extra space]

class Solution
{
public:
    string addBinary(string a, string b)
    {
        string ans = "";
        int i = a.size() - 1, j = b.size() - 1;
        char cnt = 0;
        while (i >= 0 || j >= 0)
        {
            int s = i >= 0 ? a[i] - '0' : 0;
            int p = j >= 0 ? b[j] - '0' : 0;
            int sum = s + p;
            if (cnt == 1)
            {
                sum += cnt;
                cnt = 0;
            }
            if (sum == 2)
            {
                sum = 0;
                cnt = 1;
            }
            if (sum == 3)
            {
                sum = 1;
                cnt = 1;
            }
            ans += sum + '0';
            i--;
            j--;
        }
        if (cnt != 0)
            ans += '1';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};