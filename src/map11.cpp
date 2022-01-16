//good sequence
#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int i,a,n;
    map<int,int>cnt;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        cnt[a]++;
    }
    int ans=0;
    for(auto u:cnt)
        if(u.second>=u.first)
            ans+=(u.second - u.first);
        else
            ans+=u.second;
    cout<<ans;
}
