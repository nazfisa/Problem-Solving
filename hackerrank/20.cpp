#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,t,a,b;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x>>y>>z;
        a=abs(z-x);
        b=abs(z-y);
        if(a<b)
        {
            cout<<"Cat A"<<endl;
        }
       else if(a>b)
        {
            cout<<"Cat B"<<endl;
        }
        else
           cout<<"Mouse C"<<endl;
    }
}
