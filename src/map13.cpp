//codeforces registration probelem
#include<bits/stdc++.h>
using namespace std;
#define optimize()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    int n;
    cin>>n;
    map<string,int>reg;
    while(n--)
    {
        string s;
        cin>>s;
        if(reg[s] == 0)
            cout<<"OK"<<endl;
            else
            cout<<s<<reg[s]<<endl;
        reg[s]++;
    }
}
