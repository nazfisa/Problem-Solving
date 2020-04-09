#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max=0,t1,t2,p,c,j,i;
    cin>>p>>t1>>t2;
    int a[t1],b[t2];
    for(i=0; i<t1; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<t2; i++)
    {
        cin>>b[i];
    }

    for(i=0; i<t1; i++)
    {
      for(j=0; j<t2; j++)
        {
                c=a[i]+b[j];
                if(c>max)
                {
                    if(c<=p)
                {
                    max=c;
                }
            }
        }
    }
    if(c>p)
    {
        cout<<"-1"<<endl;
    }
    else
   cout<<max<<endl;
}
