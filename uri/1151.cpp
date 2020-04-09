#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,c,cnt=2;
    a=0;
    b=1;
    cin>>n;
    cout<<a<<" ";
    while(cnt!=n)
    {

        cout<<b<<" ";
        c=b;
        b=a+b;
        a=c;
        cnt++;
    }
    cout<<b<<endl;
}
