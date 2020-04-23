#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,pos1,pos2;
    cin>>n1>>n2;
    string str;
    cin>>str;
    for(auto i=0;i<n1;++i)
    {
        if(str[i]=='G')
        {
            pos1=i;
        }
        else if(str[i]=='T')
        {
            pos2=i;
        }
    }
    int cmp;
    if(pos1>pos2)
    {
        cmp=pos1-pos2;
        for(auto i=pos1;i>pos2;i-=n2)
        {
            if(str[i]=='#')
            {    
                cout<<"NO";
                return 0;
            }    
        }
        if((cmp%n2)==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cmp=pos2-pos1;
        for(auto i=pos1;i<pos2;i+=n2)
        {
            if(str[i]=='#')
            {    
                cout<<"NO";
                return 0;
            }    
        }
        if((cmp%n2)==0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }   
    }
    return 0;
}