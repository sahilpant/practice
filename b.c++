#include<iostream>
using namespace std;
int main()
{
    int n,ctr=0;
    cin>>n;
    char ch[100];
    for(int i=0;i<n;++i)
    {
        cin>>ch[i];
    }
    for(auto i=0;i<n-2;++i)
    {
        if(ch[i]=='x'&&ch[i+1]=='x'&&ch[i+2]=='x')
        {
            ctr++;
        }
    }
    cout<<ctr;
    return 0;
}