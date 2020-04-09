#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,j=1,k,l,t,b,sum1=0,sum=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>b;

            l=b/30;
            sum=sum+((l+1)*10);

            k=b/60;
            sum1=sum1+((k+1)*15);
        }
        if(sum<sum1)
        {
            cout<<"Case "<<j<<": "<<"Mile "<<sum<<endl;
        }
       else if(sum==sum1)
        {
            cout<<"Case "<<j<<": "<<"Mile juice "<<sum<<endl;
        }
        else
        {
            cout<<"Case "<<j<<": "<<"juice "<<sum1<<endl;
        }
        sum=0;
        sum1=0;
        j++;

    }
}
