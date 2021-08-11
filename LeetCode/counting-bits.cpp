class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ones(n+1,0);
        int count,j=1,k=0;
        if(n==0)
            return ones;
        ones[1]=1;
        for(int i=2;i<=n;i++)
        {
            if(i==j*2)
            {
                j=j<<1;
            }
            count=ones[i&~(j)]+1;
            ones[i]=count;
        }
        return ones;
    }
};