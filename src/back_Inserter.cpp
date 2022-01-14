#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "sumon";
    string a = "Alamin";

    copy(a.begin()+2,a.begin()+4,back_inserter(s));
    cout<<s<<endl;
}
