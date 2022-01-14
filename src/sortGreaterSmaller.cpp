#include<bits/stdc++.h>

using namespace std;

int main()

{

    vector<int>v = {24,5,5,6,76,7};

    sort(v.begin(),v.end(),greater<int>());
    for(auto u:v)
        cout<<u<<endl;
}
