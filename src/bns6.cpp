#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {2,3,3,3,4,4};
    int lo = lower_bound(v.begin(),v.end(),3)-v.begin();
    cout<<lo<<endl;
}
