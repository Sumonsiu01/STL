#include<bits/stdc++.h>
using namespace std;
int a[] = {1,2,2,2,4,5,6};
int main()
{
    int l = 0,r = 6,tar = 3;
    int ans = 7;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(a[mid]>=tar)
        {
            ans = min(ans,mid);
            r = mid -1;
        }
        else
        {
            l = mid +1;
        }

    }
    cout<<ans<<endl;
}
