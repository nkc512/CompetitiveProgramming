class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int pricelen=prices.size();
        int diff=0;
        int minv=prices[0];
        for(int i=0;i<pricelen;i++)
        {
            minv=min(minv,prices[i]);
            diff=max(diff,prices[i]-minv);
        }
        return diff;
    }
};