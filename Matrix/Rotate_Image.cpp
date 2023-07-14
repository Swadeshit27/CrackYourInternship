// Time : O(n *m) Space : O(1)

                           class Solution
{
public:
    void rotate(vector<vector<int>> &m)
    {
        int row = m.size();
        int col = m[0].size();
        // Time: O(n*m) Space: O(1)
        for (int i = 0; i < row; i++)
        {
            for (int j = i + 1; j < col; j++)
            {
                swap(m[i][j], m[j][i]);
            }
        }
        for (int i = 0; i < row; i++)
        {
            reverse(m[i].begin(), m[i].end());
        }

        // Time: O(n*m) Space: O(n*m)
        // vector<vector<int>>ans=m;
        // for(int j=0;j<row;j++){
        //     for(int i=0;i<col;i++){
        //         m[i][col-j-1]=ans[j][i];
        //     }
        // }
    }
};