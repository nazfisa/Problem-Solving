#include<bits/stdc++.h>
using namespace std;
int i,j,n,m,b[100][100];
char x[100],y[100];
int lcslength()
{
    m=strlen(x);
    n=strlen(y);
    for(i=0;i<=m;i++)
        b[i][0]=0;
     for(i=0;i<=m;i++)
        b[0][i]=0;
    for(i=1;i<=m;i++)
        for(j=0;j<=n;j++)
    {
         if(x[i-1]==y[j-1])
         {
             b[i][j]=b[i-1][j-1]+1;
         }
         else if(b[i-1][j]>=b[i][j-1])
         {
             b[i][j]=b[i-1][j];
         }
         else
             b[i][j]=b[i][j-1];
    }
    return b[m][n];
}
int main()
{
   gets(x);
   gets(y);
   cout<<lcslength();

}
