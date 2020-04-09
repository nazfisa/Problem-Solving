#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j=0,a,b,k=1;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cin>>b;
        for(i=a;i<=b;)
        {
            if((i%2)==1)
            {j=i+j;
            i=i+2;}
            else
            i++;
        }
        cout<<"Case "<<k<<": "<<j<<endl;
        k++;
        j=0;
    }
}
