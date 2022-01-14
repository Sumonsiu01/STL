#include<bits/stdc++.h>
using namespace std;

int main()

{
    string s = "Sumon";
    s.erase(s.end() - 2);//it will delete from the last
    for(auto u:s)
        cout<<u;
}
