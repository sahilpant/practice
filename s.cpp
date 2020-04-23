#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll sum=0;
    for(ll i=n-1;i>=0;--i)
    {
        b[n-1-i]=a[i];
    }
    for(ll i=0;i<=n-1;++i)
    {
        sum+=b[i]*a[i];
    }
    cout<<sum%10007;
    return 0;
}