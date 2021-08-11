class Solution {
public:
    string longestPalindrome(string s) {
        int slen=s.length();
        int count,maxc=0;
        string res;
        if(slen<=1)
            return s;
        int j;
        for(int i=1;i<slen;i++)
        {
            if(s[i-1]==s[i])
            {
                j=0;
                while((i-j-1)>=0 && (i+j)<slen && s[i-j-1]==s[i+j])
                {
                    j++;
                }
                count=2*j;
                if(count>maxc)
                {
                    maxc=count;
                    res=s.substr(i-j,count);
                }
            }
            //odd
            if(s[i-1]==s[i+1])
            {
                j=0;
                while((i-j-1)>=0 && (i+j+1)<slen && s[i-j-1]==s[i+j+1])
                {
                    j++;
                }
                count=2*j+1;
                if(count>maxc)
                {
                    maxc=count;
                    res=s.substr(i-j,count);
                }
                
            }
        }
        if(res.length()<1)
            res=s.substr(0,1);
        return res;
    }
};