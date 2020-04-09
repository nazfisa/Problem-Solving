#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[101],b[100],i,j,k=0,l,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        b[i]=1;
    }
    for(i=0;i<t;i++)
    {
        if(b[i]==1)
        {


        j=i+1;
      if(b[j]==1)
            {
        for(;j<t;j++)
        {

                if(a[i]==a[j])
                {
                    k++;
                    b[j]=2;
                    break;
                }
            }
        }
    }}
    cout<<k<<endl;

}
