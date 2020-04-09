#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,n,in=0,out=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a>=10 && a<=20)
        {
            in++;
        }
        else
            out++;

    }
    cout<<in<<" in"<<endl;
    cout<<out<<" out"<<endl;
}
