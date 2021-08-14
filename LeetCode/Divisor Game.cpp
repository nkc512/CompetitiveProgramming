class Solution {
public:
    vector<int> dp=vector<int>(1001,-1);
    int help(int n)
    {
        if(n==1) return 0;
        if(dp[n]!=-1)
            return dp[n];
        for(int i=1;i<sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(help(n-i)==0) return dp[n]=1;
            }
        }
        return dp[n]=0;
    }
    bool divisorGame(int n) {
        return help(n);
    }
};