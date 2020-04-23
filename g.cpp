#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    char ch;
    cin>>s1>>s2;
    int l=s1.length();
    for(auto i=0;i<l;++i)
    {
        if(s2[i]>s1[i])
        {
            cout<<"-1";
            return 0 ;
        }
    }    
    for(auto i=0;i<l;++i)
    {
        if(s2[i]==s1[i])
        {
            if(s1[i]!='z')
            {    
                ch=s1[i]+1;
                cout<<ch;
            }
            else
            {
                cout<<s1[i];
            }       
        }
        else
        {
            cout<<s2[i];
        }
    }
    return 0;
}