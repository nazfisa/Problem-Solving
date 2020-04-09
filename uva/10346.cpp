#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,divisor,divide,sum=0;

    while(scanf("%d %d",&n,&k)==2)
    {

        sum=n;
        while(n>=k)
        {
            divide=n/k;
            divisor=n%k;
            n=divide+divisor;
            sum+=divide;
        }

        cout<<sum<<endl;
    }
}
