class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> xset;
        set<int> yset;
        int ylen=matrix.size(),i;
        int xlen=matrix[0].size();
        
        for(int i=0;i<ylen;i++)
        {
            for(int j=0;j<xlen;j++)
            {
                if(matrix[i][j]==0)
                {
                    xset.insert(j);
                    yset.insert(i);
                }
            }
        }
        for(int i:xset)
        {
            for(int j=0;j<ylen;j++)
            {
                matrix[j][i]=0;
            }
        }
        for(int i:yset)
        {
            for(int j=0;j<xlen;j++)
            {
                matrix[i][j]=0;
            }
        }
    }
};