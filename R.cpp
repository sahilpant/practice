#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(ll i=0;i<n-2;++i)
    {
        if(a[i]+a[i+1]>a[i+2])
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}