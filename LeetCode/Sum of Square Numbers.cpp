class Solution {
public:
    bool judgeSquareSum(int c) {
        long root=sqrt(c);
        long i=0,j=root,sum;
        while(i<=j)
        {
            sum=i*i+j*j;
            if(sum==c)
                return true;
            if(sum<c)
            {
                i++;
            }
            else
                j--;
        }
        return false;
    }
};