#include<bits/stdc++.h>
typedef double db;
typedef long long ll;
using namespace std;
int main()
{
    cout<<fixed;
    ll temp,n,n1,n2;
    cin>>n>>n1>>n2;
    if(n1>n2)
    {
        temp=n1;
        n1=n2;
        n2=temp;
    }
    ll i,j,j1,a[n],b[n1],c[n2];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=0,j=n-1;i<n1;++i,--j)
    {
        b[i]=a[j];
    }
    for(i=0,j1=j;i<n2;++i,--j)
    {
        c[i]=a[j];
    }
    db sum=0,sum1=0,sum2=0;
    for(i=0;i<n1;++i)
    {
        sum1+=b[i];
    }
    sum1=(db)sum1/n1;
    for(i=0;i<n2;++i)
    {
        sum2+=c[i];
    }
    sum2=(db)sum2/n2;
    sum=(db)sum1+sum2;
    cout<<sum;
    return 0;
}