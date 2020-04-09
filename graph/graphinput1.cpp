#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=3,e=3,i,j,l,a[100][100],cost;
    for(i=1;i<=n;i++)
        for(j=1;i<=e;i++)
        a[i][j]=0;
    for(l=1;l<=3;l++)
    {
        cin>>i>>j>>cost;
        a[i][j]=cost;
        a[j][i]=cost;
    }
    for(i=1;i<=n;i++)
      {for(j=1;j<=e;j++)
       {cout<< a[i][j]<<" ";}
       cout<<endl;}
}
