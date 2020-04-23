#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n,i,j,m,ctr=0;
    cin>>n>>m;
    ll a[n],b[m];
    for(i=0;i<n;++i)
    {
        cin>>a[i];
        if(i!=0)
        {
            a[i]=a[i]+a[i-1];
        }
    }
    for(i=0;i<m;++i)
    {
        cin>>b[i];
        for(j=ctr;j<n;++j)
        {
            if(b[i]<=a[j])
            {
                if(j==0)
                {
                    cout<<"1"<<" "<<b[i]<<"\n";
                }
                else
                {
                    cout<<j+1<<" "<<b[i]-a[j-1]<<"\n";             
                }
                break;
            }
            ctr++;
        }
    }
}