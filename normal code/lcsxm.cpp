#include<bits/stdc++.h>
using namespace std;
long long int c[1000][1000],m,i,j,n;
char x[1000],y[1000],b[1000][1000];

void lcsprint(int i,int j)
{
    if(i==0 ||j==0)
    {
        return ;
    }
    else if(b[i][j]=='c')
    {
        lcsprint(i-1,j-1);
        printf("%c",x[i-1]);
    }
    else if(b[i][j]=='u')
        lcsprint(i-1,j);
    else
        lcsprint(i,j-1);

}
void lcslength(void)
{
     m=strlen(x);
     n=strlen(y);
     for(i=0;i<=m;i++)
     {
         c[i][0]=0;
     }
     for(i=0;i<=n;i++)
        c[0][i]=0;
     for(i=1;i<=m;i++)
     {
         for(j=1;i<=n;j++)
         {

              if(x[i-1]==y[j-1])
             {
                 c[i][j]=c[i-1][j-1]+1;
                 b[i][j]='c';
             }
             else
             {if(c[i-1][j]>=c[i][j-1])
             {
                 c[i][j]=c[i-1][j];
                 b[i][j]='u';
             }
             else
             {
                 c[i][j]=b[i][j-1];
                 b[i][j]='l';
             }}
         }
     }
     lcsprint(m,n);
}
int main()
{
    gets(x);
    gets(y);
    lcslength();

}
