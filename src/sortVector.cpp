#include<bits/stdc++.h>
using namespace std;


int main()

{

    vector<string>v;

    v.push_back("Sumon");

    v.push_back("Alamin");
    v.push_back("Akhter");
    v.push_back("Rafi");
    sort(v.begin(),v.end());

    for(auto u:v)
        cout<<u<<endl;
}
