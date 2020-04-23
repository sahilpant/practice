#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll a[n];
    for(auto i=0;i<n;++i)
    {
        cin>>a[i];
        if(i!=0)
        {
            a[i]=a[i]+a[i-1];
        }
    }
    ll m;
    cin>>m;
    ll x;
    for(auto i=0;i<m;++i)
    {
        cin>>x;
        int l=0,r=n-1,mid;
        while(r>=l)
        {
            mid = (l+r)/2;
            if(x<=a[mid])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<l+1<<"\n";
    }
    return 0;
}