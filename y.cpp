#include <bits/stdc++.h>

using namespace std;

int breakBits(string N){
    int l=N.length(),x=0,sum=0,ctr=0;
    for(int i=l;i>=0;--i)
    {
        sum+=N[i]*pow(2,x);
        if(sum%5==0&&sum!=0)
        {
            ctr++;
            i--;
            sum=0;
        }
        x++;
    }
    if(ctr>0)return ctr;
    else if(ctr==0)return (-1);
}
int main(){
    string N="100100";
    //cin>>N;
    int result;
    result = breakBits(N);
    cout<<result;
    return 0;
}