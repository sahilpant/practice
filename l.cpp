#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll a[n];
    for(auto i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int m = n/2;
    if(n%2!=0)
    {
        cout<<a[m];
    }
    else
    {
        cout<<a[m-1];
    }
    
    return 0;
}