class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        vector<int> vecr;
        for(int i=0;i<numRows;i++)
        {
            vecr.clear();
            vecr=vector<int>(i+1,1);
            if(vec.size()>0)
            {
                for(int j=1;j<=i/2;j++)
                {
                    vecr[j]=vec[i-1][j-1]+vec[i-1][j];
                    vecr[i-j]=vecr[j];
                }
            }
            vec.push_back(vecr);
            
        }
        return vec;
    }
};