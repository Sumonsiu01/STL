//find frequency
#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int findfreq(vector<int>v,int x)
{
    map<long long,int>cnt;
    for(auto u:v)cnt[u]++;
    return cnt[x];
}
int main()
{
    //map<int,int>cnt;
    optimize();
    vector<int>v ={1,2,3,4,5,6,7,7,8,8,9,9,9};
    int freq = findfreq(v,9);
    cout<<freq<<endl;
}
