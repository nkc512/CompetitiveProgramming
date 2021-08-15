// Velocity incorrect
#include<bits/stdc++.h>
#include<iostream>
#define ll long long
#define ld long double
#define fori(n) for(ll i=0;i<n;i++)
using namespace std;

// ctrl+shift+b for execution
// tools build system c++14
ld positive(ld val)
{
    if(val<0)
        val=-val;
    return val;
}

void solve(){
    int t;
    cin>>t;
    ll coordinatescount,queries;
    ld x,y,velocity,time,area;
    while(t--)
    {
        cin>>coordinatescount>>queries;
        vector<pair<ld,ld>> coordinates;
        fori(coordinatescount)
        {
            cin>>x>>y;

            coordinates.push_back(make_pair(x,y));
            //cout<<coordinates[i].first<<"\t"<<coordinates[i].second<<"\n";
        }

        ld x1,y1,x2,y2,x3,y3,s,temp;
        x1=coordinates[0].first;
        y1=coordinates[0].second;
        area=0;
        for(ll i=1;i<coordinatescount-1;i++)
        {
            x2=coordinates[i].first;
            y2=coordinates[i].second;
            x3=coordinates[i+1].first;
            y3=coordinates[i+1].second;
            temp=(x1*(y2-y3));
            temp+=(x2*(y3-y1));
            temp+=(x3*(y1-y2));
            area+=positive(temp)/2;
        }
        fori(queries)
        {
            cin>>velocity>>time;
            cout<<area*velocity*time<<"\n";

        }

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
