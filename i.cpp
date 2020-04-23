#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n>26)
    {
        cout<<"-1";
        return 0;
    }
    string str;
    char ch;
    cin>>str;
    ll ctr=0;
    for(ll i=0;i<n;++i)
    {
        ch=str[i];
        for(ll j=i+1;j<n;++j)
        {
            if(ch==str[j])
            {
                ctr++;
                break;
            }    
        }
    }
    cout<<ctr;
    return 0;
}