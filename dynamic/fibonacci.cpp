#include<bits/stdc++.h>
using namespace std;

int dp[20];

int F( int n ) {
if( n == 0 ) return 0;
if( n == 1 ) return 1;
if( dp[n]!=-1 ) return dp[n];
else
{
dp[n] = F( n-1 ) + F( n-2 );
return dp[n];
}
}

int main()
{
    for(int i=0;i<20;i++)
    dp[i]=-1;
    int n;
   cin>>n ;
   cout<<F(n);
}
