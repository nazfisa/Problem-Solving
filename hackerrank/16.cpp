#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,t,ac,ch,k,sum=0;
    cin>>t>>k;
    long long int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    cin>>ac;
    for(i=0;i<t;i++)
    {
        if(i!=k)
        {
            sum=sum+a[i];
        }
    }
    cout<<sum<<endl;
    k=sum/2;


    if(ac==k)
    {
        cout<<"Bon Appetit"<<endl;
    }
    else
       {
         ch=abs(ac-k);
       cout<<ch<<endl;
       }
}
