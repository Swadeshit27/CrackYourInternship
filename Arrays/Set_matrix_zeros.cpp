// Time : O(n*m)    Space:O(1)

class Solution
{
public:
    void setZeroes(vector<vector<int>> &m)
    {
        int r = m.size();
        int c = m[0].size();
        bool fr = false, fc = false; 
        // find zeros and update first row and column
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (m[i][j] == 0)
                {
                    //    check there present any zero in first row or column
                    if (i == 0)
                        fr = true;
                    if (j == 0)
                        fc = true;
                    //    update first row and columns
                    m[i][0] = 0;
                    m[0][j] = 0;
                }
            }
        }
        //    update rest of elements
        for (int i = 1; i < r; i++)
        {
            for (int j = 1; j < c; j++)
            {
                if (m[i][0] == 0 || m[0][j] == 0)
                {
                    m[i][j] = 0;
                }
            }
        }
        //    update first row
        if (fr)
        {
            for (int i = 0; i < c; i++)
            {
                m[0][i] = 0;
            }
        }
        //    update first column
        if (fc)
        {
            for (int i = 0; i < r; i++)
            {
                m[i][0] = 0;
            }
        }
    }
};
