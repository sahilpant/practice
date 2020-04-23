#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l1,l2;
    string str1,str2;
    cin>>str1>>str2;
    l1=str1.length();
    l2=str2.length();
    if(str1==str2)
    {
        cout<<"-1";
    }
    else
    {
        if(l1==1&&l2==1)
        {
            cout<<l1;
        }
        else if(l1>l2)
        {
            cout<<l1;
        }
        else if(l2>l1)
        {
            cout<<l2;
        }
        else
        {
            cout<<l1;
        }
    }
    return 0;   
}