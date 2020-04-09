#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a[5], i,j,k,max=0,t;
for(i=0;i<=5;i++)
    {
        a[i]=0;
    }
    cin>>t;
    long long int b[t];
    for(i=0;i<t;i++)
    {
        cin>>b[i];

        if(b[i]==1)
        {
            a[0]=a[0]+1;

        }
       else if(b[i]==2)
        {
            a[1]=a[1]+1;
        }
       else if(b[i]==3)
        {
            a[2]=a[2]+1;
        }
        else if(b[i]==4)
        {
            a[3]=a[3]+1;
        }
       else if(b[i]==5)
        {
            a[4]=a[4]+1;
        }
    }

     max=a[0];

    for(i=1;i<5;i++)
    {
       if(max<a[i])
       {
           max=a[i];
       }
    }
     for(i=0;i<5;i++)
    {
       if(max==a[i])
       {
           max=a[i];
           cout<<i+1<<endl;
           break;
       }
    }

}
