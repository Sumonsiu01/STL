#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    map<string,int>id;
    id["Sumon"] = 6;
    id["Alamin"] = 8;
    id["Akhter"] = 7;
    id["Fahim"] = 0;
    for(auto u:id)
        cout<<u.first<<" "<<u.second<<endl;
}
