#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],b[m];
    for(ll i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(ll i=0;i<m;++i)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    ll l,r,mid=(l+r)/2;
    for(ll i=0;i<m;++i)
    {
        l=0;r=n-1;
        while(r>=l)
        {
            mid=(l+r)/2;
            if(a[mid]<=b[i])
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
        }
        cout<<r+1<<" ";
    }
    return 0;
} 