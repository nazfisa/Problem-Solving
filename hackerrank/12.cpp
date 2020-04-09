#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count=0,i,j,t,m,sum=0,d;
    cin>>t;
    int a[t];
    for(i=0; i<t; i++)
    {
        cin>>a[i];
    }

    cin>>m>>d;
    for(i=0; i<t; i++)
    {
     for(j=i;j<d;j++)
     {
         sum+=a[j];

     }
     if(sum==m)
     count++;
     d++;
     sum=0;

    }
    cout<<count<<endl;

}
