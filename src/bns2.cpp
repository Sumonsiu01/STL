#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[] = {1,2,3,4,5,6};
    int l=0,r=5,tar = 3;
    bool done = 0;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(ar[mid] == tar)
        {
            cout<<mid<<endl;
        done = 1;
        break;
        }
        if(ar[mid]<tar)
        {
            l = mid+1;
        }
        else
        {
            r = mid -1;
        }
    }

}
