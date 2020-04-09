#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,k,d,p;
    while(cin>>t)
    {
        for(i=1;i<=t;i++)
        {
            cin>>n>>k>>p;
            d=k+p;
            while(d>n)
            {
                d=d-n;
            }
            printf("Case %d: %d\n",i,d);

        }
    }


}
