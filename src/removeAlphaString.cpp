#include<bits/stdc++.h>
using namespace std;

int main()

{

    string s = "Sumon";

    s.erase(remove(s.begin(),s.end(),'o'),s.end());

    cout<<s<<endl;
}
