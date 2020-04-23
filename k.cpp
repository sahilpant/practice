#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int n,ctr,ctr2=0,ctra=0,ctrt=0,ctrc=0,ctrg=0,ctrq=0;
    string str;
    cin>>n;
    cin>>str;
    if(n%4!=0)
    {
        cout<<"===";
        return 0;
    }
    ctr=(n/4);
    for(auto i=0;i<n;++i)
    {
        if(str[i]=='A')
        {
            ctra++;
        }
        else if(str[i]=='T')
        {
            ctrt++;
        }
        else if(str[i]=='G')
        {
            ctrg++;
        }
        else if(str[i]=='C')
        {
            ctrc++;
        }
        else if(str[i]=='?')
        {
            ctrq++;
        }
    }
    if(ctra>ctr||ctrt>ctr||ctrg>ctr||ctrc>ctr)
    {
        cout<<"===";
        return 0;
    }
    for(auto i=0;i<n;++i)
    {
        if(str[i]=='?')
        {
            if(ctra!=ctr)
            {
                str[i]='A';
                ctra++;
            }
            else if(ctrt!=ctr)
            {
                str[i]='T';
                ctrt++;
            }
            else if(ctrg!=ctr)
            {
                str[i]='G';
                ctrg++;
            }
            else if(ctrc!=ctr)
            {
                str[i]='C';
                ctrc++;
            }
        }
    }
    cout<<str;
return 0;    
}