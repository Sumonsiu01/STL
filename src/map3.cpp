#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    vector<long long>v = {12,1212,234324556,76576,12};
    map<long long,int>cnt;
    for(auto u:v)cnt[u]++;
    for(auto u:cnt)
    cout<<u.first<< " "<<u.second<<endl;
}
