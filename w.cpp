#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;++i)
    {
        cin>>b[i];
    }
    int ctr = 0;//countng the number of cookies
    int val = 0;//to count the amount of magic powder used in each itteration of cookie making process
    while(k)
    {
        val = 0;
        for(int j=0;j<n;++j)
        {
            if(a[j]<=b[j])
            {
                b[j]-=a[j];
            }
            else
            {
                val = val + a[j] - b[j];
                b[j] = 0;
            }
        }
        if(val<=k)
        {
            k-=val;//subtracting the amount of magic powder used in each time of cookie
            ctr++;
        }
        else
        {
            break;
        }
        
    }
    cout<<ctr;
    return 0;
}