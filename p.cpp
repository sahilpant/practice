#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i=1,d;
    cin>>a>>b>>c;
    while(1)
    {
        d=b*i;
        if((a*c)-d<=b*c)
        {
            break;
        }
        ++i;
    }
    cout<<i;
    return 0;
}