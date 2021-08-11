class Solution {
public:
    long long KthBit(long long n, long long k)
    {
        return ((n & (1 << (k))) >> (k));
    }
    long long findIntegers(long long int n) {

        long long int fibs[]={1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,
                    2584,4181,6765,10946,17711,28657,46368,75025,121393,
                    196418,317811,514229,832040,1346269,2178309,3524578,
                    5702887,9227465,14930352,24157817,39088169,63245986};
        long long int v=n,temp;
        long long int k=30,prev=0;
        long long int r = 0;
        long long int ans=0;
        while(k>=0 && v>=0)
        {
            if(KthBit(v,k)==1)
            {
                ans+=fibs[k];
                if(prev)
                {
                    return ans;
                }
                
                prev=1;
                
            }
            else
                prev=0;
            v=v&~(1<<k);
            k--;
        }
        return ans+1;
    }
};