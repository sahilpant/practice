#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ch[n][200];
    for(int i=0;i<n;++i)
    {
        cin>>ch[i];
    }
    for(auto i=0;i<n;++i)
    {
        if(strlen(ch[i])>10)
        {
            cout<<ch[i][0]<<strlen(ch[i])-2<<ch[i][strlen(ch[i])-1];
        }
        else
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
    return 0;
}    