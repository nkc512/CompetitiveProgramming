class Solution {
public:
    string pushDominoes(string dominoes) {
        int dominolen=dominoes.length();
        int i=0,j=0,k=0;
        int temp=0;
        while(i<dominolen)
        {
            //cout<<"while1:"<<i<<"\n";
            if(dominoes[i]=='.')
            {
                //cout<<"while1if1:"<<i<<"\n";
                i++;
                continue;
            }
            if(dominoes[i]=='L')
            {
                j=i-1;
                while(j>=0 && (dominoes[j]!='L'))
                {
                    dominoes[j]='L';
                    j--;
                }
                //j=i+1;
                i++;
                continue;
            }
            if(dominoes[i]=='R')
            {
                j=i+1;
                //cout<<"R1:"<<dominoes[i]<<"\n";
                int temp=0;
                while(j<dominolen && dominoes[j]!='L' )
                {
                    if(j<dominolen && dominoes[j]=='R')
                    {
                        temp=1;
                        break;
                    }
                    j++;
                }
                if(temp==1)
                {
                    while(i<j)
                    {
                        dominoes[i]='R';
                        i++;
                    }
                    continue;
                }
                if(j==dominolen)
                {
                    //cout<<"jdominolen before:"<<dominoes<<"\n";
                    while(i<dominolen)
                    {
                        dominoes[i]='R';
                        i++;
                    }
                    //cout<<"jdominolen after:"<<dominoes<<"\n";
                    continue;
                }
                else
                {
                    // cout<<"RL:"<<dominoes<<"\n";
                    
                    int mid=(j+i)/2;
                    if((j+i)%2==1)
                    { // odd means no stand
                        k=j;
                        while(i<=mid)
                        {
                            dominoes[i]='R';
                            i++;
                        }
                        while(j>mid)
                        {
                            dominoes[j]='L';
                            j--;
                        }
                        i=k;
                        i++;
                        //cout<<"RLodd:"<<dominoes<<"\n";
                        continue;
                    }
                    else
                    { // even means 1 stand
                        k=j;
                        while(i<mid)
                        {
                            dominoes[i]='R';
                            i++;
                        }
                        while(j>mid)
                        {
                            dominoes[j]='L';
                            j--;
                        }
                        i=k;
                        i++;
                        //cout<<"RLeven:"<<dominoes<<"\n";
                        continue;
                    }
                    
                    
                }
            }
            i++;
        }
        return dominoes;
    }
};