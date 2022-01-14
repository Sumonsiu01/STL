#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s  = "ILoveMyCountry";

    s.erase(s.begin()+0,s.begin()+3); /// it will delete index  0 to 2(remember it don't count index from 0
    for(auto u:s)
        cout<<u;
}
