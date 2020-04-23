#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=1;
    cin>>n;
    char ch[n][101];
    for(int i=0;i<n;++i)
    {
        cin>>ch[i];
    }
    cout<<"NO";
    for(auto i=1;i<n;++i)
    {
        flag=1;
        for(auto j=i-1;j>=0;--j)
        {
            if(strcmp(ch[i],ch[j])==0)
            {
                cout<<endl<<"YES";
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            cout<<endl<<"NO";
        }
    }
    return 0;
}