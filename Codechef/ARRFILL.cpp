// Runtime Error
#include<bits/stdc++.h>
#include<iostream>
#define ll long long
#define ld long double
#define fori(n) for(ll i=0;i<n;i++)
using namespace std;

// ctrl+shift+b for execution
// tools build system c++14

void solve(){
    ll t,m,n,x,y;
    set<ll> setc;
    vector<pair<ll,ll>> vec;
    vector<ll> a;
    ll sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        a.clear();
        vec.clear();
        setc.clear();
        a=vector<ll>(n+1,0);
        sum=0;
        for(ll i=0;i<m;i++)
        {
            cin>>x>>y;
            vec.push_back(make_pair(x,y));
        }
        sort(vec.rbegin(),vec.rend());
        //cout<<n<<":n\t"<<m<<":m\n";
        for(auto it:vec)
        {
            x=it.first;
            y=it.second;
            if(setc.find(y)!=setc.end())
                continue;
            setc.insert(y);
            //cout<<x<<":x\t"<<y<<":y\n";
            for(ll j=1;j<=n;j+=1)
            {
                if(j%y!=0 && a[j]==0)
                {
                    a[j]=x;
                    sum+=x;
                }

            }
        }
        cout<<sum<<"\n";
    }
}

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
