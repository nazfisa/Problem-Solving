///accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e,f,g,h,i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a%3==0)
        {
            c=a;
        }
        else if(a%3!=0)
        {
            e=a/3;
            f=3*e;
            c=f;
        }
        if(b%3==0)
        {
            g=b;
        }
        else if(b%3!=0)
        {
            h=b/3;
            i=3*h;
            g=i;
        }
        j=(g*c)/9;
        cout<<j<<endl;
    }
}
