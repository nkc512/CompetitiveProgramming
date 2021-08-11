class Solution {
public:
    int trap(vector<int>& height) {
        
        int lefti=0,righti=0,maxv=0, res=0;
        int heightl=height.size();
        if(heightl<=2)
            return 0;
        for(int i=0;i<heightl;i++)
        {
            if(height[i]>=maxv)
            {
                if(height[i]>maxv)
                {
                    lefti=i;
                    maxv=height[i];
                    righti=i;
                }    
                else
                {
                    righti=i;
                }
            }
        }
        maxv=height[0];
        for(int i=1;i<lefti;i++){
            if(height[i]<maxv)
            {
                res+=(maxv-height[i]);
            }
            if(maxv<height[i])
            {
                maxv=height[i];
            }
        }
        maxv=height[heightl-1];
        for(int i=heightl-1;i>righti;i--){
            if(height[i]<maxv)
            {
                res+=(maxv-height[i]);
            }
            if(maxv<height[i])
            {
                maxv=height[i];
            }
        }
        //cout<<righti<<"\t"<<lefti<<"\n";
        maxv=height[righti];
        for(int i=lefti+1;i<righti;i++)
        {
            res+=(maxv-height[i]);
            //cout<<"for loop"<<res<<"\n";
        }
        return res;
        
    }
};