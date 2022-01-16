#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    map<int,bool>get;
    vector<int>v = {2,3,5,6,7,2};
    for(auto u:v)get[u] = 1;
    for(auto u:get)
        cout<<u.first<<" " <<u.second<<endl;
}
