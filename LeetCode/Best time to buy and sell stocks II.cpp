class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pricelen=prices.size();
        int i=0,profit=0,buy;
        while(i<pricelen-1)
        {
            profit+=max(prices[i+1]-prices[i],0);
            i++;
        }
        return profit;
    }
};