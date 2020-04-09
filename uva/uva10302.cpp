#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int ans=0,n;
    while (scanf("%lld",&n)==1)
    {
            n=n*n*n;
            ans=ans+n;
        printf("%lld\n",ans);
    }
}
