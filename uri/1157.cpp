#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,cnt=1;
    cin>>x;
    for(i=1;i<=x;i++)
    {
       if(x%i==0)
       {
           cout<<i<<endl;
           cnt++;
       }
    }
}
