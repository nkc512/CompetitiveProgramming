#include<bits/stdc++.h>
#include<iostream>
#define ll long long
#define ld long double
#define fori(n) for(ll i=0;i<n;i++)
using namespace std;

// ctrl+shift+b for execution
// tools build system c++14

void solve(){
    ll t;
    ll n,p,k,zero,pmodk,res;
    cin>>t;
    string s1;
    while(t--)
    {
        cin>>n>>p>>k;
        pmodk=p%k;
        zero=n/k;
        res=pmodk*zero+p/k+min(n%k,pmodk)+1;
        cout<<res<<"\n";
    }

}
// p mod k = i=>(0->k)

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}