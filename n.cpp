#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll s,n,i,j;
    cin>>s>>n;
    ll a[n],b[n];
    for(i=0;i<n;++i)
    {
        cin>>a[i]>>b[i];
    }

    ll temp;int flag = 1;
    for(i=0;i<n;++i)
    {
        for(j=0;j<n-1;++j)
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
    for(i=0;i<n;++i)
    {
       
        if(s>a[i])
        {
            s+=b[i];
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;  
}