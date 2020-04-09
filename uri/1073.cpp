#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
       {
          a=pow(i,2);
          cout<<i<<"^2 = "<<a<<endl;
       }

    }
}
