///completed
#include<bits/stdc++.h>
using namespace std;
int i,j,n,m,b[1007][1007];
char x[1007],y[1007];
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

{ int z=1;
    while(1)
{  gets(x);
   if(strcmp(x,"#")==0)
    break;
   gets(y);
   cout<<"Case #"<<z<<": you can visit at most "<<lcslength()<<" cities."<<endl;
   z++;}
}

