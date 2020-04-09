#include<bits/stdc++.h>
using namespace std;
int main()
{
    int jump2=0,jump1=0;
    int i,sum1,sum2,x1,x2;
    cin>>sum1>>x1>>sum2>>x2;
    if(sum1>sum2 && x1>x2)
    {
        cout<<"NO"<<endl;
    }
    else  if(sum1<sum2 && x1<x2)
    {
        cout<<"NO"<<endl;
    }
    else  if(sum1==sum2 && x1<x2)
    {
        cout<<"NO"<<endl;
    }
     else  if(sum1==sum2 && x1>x2)
    {
        cout<<"NO"<<endl;
    }
     else  if(sum1<sum2 && x1==x2)
    {
        cout<<"NO"<<endl;
    }
     else  if(sum1==sum2 && x1>x2)
    {
        cout<<"NO"<<endl;
    }
    else
   {
    for(i=0;;i++)
    {
        if(jump1==jump2 && sum1==sum2)
        {
         cout<<"YES"<<endl;
         break;
        }
        sum1=sum1+x1;
        sum2=sum2+x2;
        jump1++;
        jump2++;

    }}


}
