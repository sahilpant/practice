#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(auto i=0;i<n;++i)
    {
        cin>>a[i];
    }
    int ctr=0;
    sort(a,a+n);
    for(auto i=0;i<n;++i)
    {
        if(a[i]!=a[i+1])
        {
            b[ctr]=a[i];
            ctr++;
        }
    }
    int ctr2=0;
    for(auto i=0;i<ctr;++i)
    {
        if(b[i]!=0)
        {
            ctr2++;
        }
    }
    cout<<ctr2;
    return 0;
}