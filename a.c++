#include<iostream>
using namespace std;
int main()
{
    long long int n,ctr1=0,ctr2=0;
    char ch;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ch;
        if(ch=='A')
        {
            ctr1++;
        }
        else
        {
            ctr2++;
        }
    }
    if(ctr1>ctr2)
    {
        cout<<"Anton";
    }
    else if (ctr2>ctr1)
    {
        cout<<"Danik";
    }
    else
    {
        cout<<"Friendship";
    }
    return 0;
}