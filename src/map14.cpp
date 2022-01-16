//codeforces radio station
#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    int n,m;
    map<string,string>ipad;
    cin>>n>>m;
    while(n--)
    {
        string s,ip;
        cin>>s>>ip;
        ipad[ip] = s;
    }
    while(m--)
    {
        string s1,ip;
        cin>>s1>>ip;
        ip.pop_back();
        cout<<s1<<" "<<ip<<"; #"<<ipad[ip]<<endl;
    }
}
