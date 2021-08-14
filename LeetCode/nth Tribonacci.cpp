class Solution {
public:
    int tribonacci(int n) {
        vector<int> trib(n+1,0);
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 1;
        trib[0]=0;
        trib[1]=1;
        trib[2]=1;
        for(int j=3;j<=n;j++)
        {
            trib[j]=trib[j-1]+trib[j-2]+trib[j-3];
        }
        return trib[n];
        
    }
};