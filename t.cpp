#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll n;
    ll k;
    cin>>n>>k;
    int a[n],b[n];
    for(auto i=0;i<n;++i)
    {
        cin>>a[i];
        b[i]=i+1;
    }
    int temp=0;
    for(auto i=0;i<n-i;++i)
    {
        for(auto j=0;j<n;++j)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
 
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    ll sum=0,ctr=0;
    for(auto i=0;i<n;++i)
    {
        if(sum+a[i]<=k)
        {
            sum+=a[i];
            ctr++;
        }
        else
        {
            break;
        }
        
    }
    cout<<ctr<<"\n";
    for(auto i=0;i<ctr;++i)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}  