#include<bits/stdc++.h>

using namespace std;

#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{

    optimize();
    vector<int>c = {12,3,4,5,6};
    sort(c.begin(),c.begin()+4);
    for(auto u:c)
        cout<<u<<endl;
}
