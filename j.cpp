#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n,i,j,ctr=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll max=a[n-1],min=a[0];
    for(i=0;i<n;++i)
    {
        if(a[i]>min&&a[i]<max)
        {
            ctr++;
        }
    }
    cout<<ctr;
    return 0;
}