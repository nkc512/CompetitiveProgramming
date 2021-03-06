class Solution {
public:
    
    int fib(int n) {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        vector<int> fibs(n+1,0);
        fibs[1]=1;
        for(int i=2;i<=n;i++)
        {
            fibs[i]=fibs[i-1]+fibs[i-2];
        }
        return fibs[n];
    }
};