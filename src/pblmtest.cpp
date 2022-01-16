#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int findfreq(vector<int>v,int n)
{
    map<int,int>cnt;
    for(auto u:v)cnt[u]++;
    return cnt[n];

}

int main()
{
    optimize();
    int p;
    vector<int>v = {1,2,3,4,5,6,6777,8,989,0,0,0,0,0,0,};
    cin>>p;
    int freq = findfreq(v,p);
    cout<<freq<<endl;

}
/*int main()
{
    optimize();
    vector<long long>v = {12,1212,234324556,76576,12};
    map<long long,int>cnt;
    for(auto u:v)cnt[u]++;
    for(auto u:cnt)
    cout<<u.first<< " "<<u.second<<endl;
    cout<u.first<< " "<<u.second<<endl;
}*/
