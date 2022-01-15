#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Sumon";
    string s2 = s;

    reverse(s.begin(),s.end());

    if(s ==  s2 )
        cout<<"palindrom"<<endl;
    else
        cout<<"Not Palindrom"<<endl;
}
