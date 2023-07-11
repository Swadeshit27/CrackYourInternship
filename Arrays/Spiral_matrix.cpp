// time: O(n*m)  space: O(n*m) [no extra space]

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> ans;
        int cnt = 0;
        int startCol = 0, startRow = 0, endCol = m - 1, endRow = n - 1;
        while (cnt < n * m)
        {
            // print first row
            for (int col = startCol; cnt < n * m && col <= endCol; col++)
            {
                ans.push_back(matrix[startRow][col]);
                cnt++;
            }
            startRow++;
            // print last col
            for (int row = startRow; cnt < n * m && row <= endRow; row++)
            {
                ans.push_back(matrix[row][endCol]);
                cnt++;
            }
            endCol--;
            // print last row
            for (int col = endCol; cnt < n * m && col >= startCol; col--)
            {
                ans.push_back(matrix[endRow][col]);
                cnt++;
            }
            endRow--;
            // print first col
            for (int row = endRow; cnt < n * m && row >= startRow; row--)
            {
                ans.push_back(matrix[row][startCol]);
                cnt++;
            }
            startCol++;
            // cout<<cnt<<endl;
        }
        return ans;
    }
};