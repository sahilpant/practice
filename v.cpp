#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n = 5,q = 5;
    //cin>>n>>q;
    ll a[5]={1,2,1,2,1},b[5]={3,10,1,1,1};
    /*for(ll i=0;i<n;++i)
    {
        cin>>a[i];
        if(i!=0)
        {
            a[i]+a[i-1];
        }
    }
    for(ll i=0;i<q;++i)
    {
        cin>>b[i];
    }*/
    ll sum = 0;
    ll l,r,mid; 
    for(ll i=0;i<q;++i)
    {
        sum+=b[i];
        l = 0;r = n-1;
        if(l<r)
        {
            mid = (l+r)/2;
            if(a[mid]>=sum)
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        if(l==n)
        {
            cout<<n-1<<"\n";
            sum = 0;
        }
        else
        {
            cout<<(n-(r+1+1))<<"\n";
        }
    }
    return 0;
}