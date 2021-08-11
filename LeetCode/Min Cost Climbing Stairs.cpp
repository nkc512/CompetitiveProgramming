class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,0);
        int len=cost.size()+1;
        for(int i=2;i<len;i++)
        {
            dp[i]=min(cost[i-1]+dp[i-1],cost[i-2]+dp[i-2]);
        }
        return dp[len-1]; 
    }
};