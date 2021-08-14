class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pricelen=prices.size(),sum=0,i=0;
        vector<int> ls(pricelen,100000),rs(pricelen, 0);
        int minv=prices[0],maxv=prices[pricelen-1];
        int diff=0;
        for(int i=0;i<pricelen;i++)
        {
            if(minv>prices[i])
            {
                minv=prices[i];
            }
            ls[i]=minv;
        }
        for(int i=pricelen-1;i>=0;i--)
        {
            if(maxv<prices[i])
            {
                maxv=prices[i];
            }
            rs[i]=maxv;
        }
        
        for(int i=0;i<pricelen;i++)
        {
            diff=max(diff,rs[i]-ls[i]);
        }
        
        return diff;
    }
};