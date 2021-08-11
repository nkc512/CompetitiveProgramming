class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int slen=s.length();
        int i=0;
        int onetozero=0,changes=0;
        while(i<slen)
        {
            if(s[i]=='0')
            {
                if(onetozero)
                {
                    changes++;
                }
            } 
            if(s[i]=='1')
                onetozero++;
            //consider s=1100000010111110 i=4, we would change first 2 1s instead of 0s.
            changes=min(changes, onetozero);
            i++;
        }
        return changes;
    }
};