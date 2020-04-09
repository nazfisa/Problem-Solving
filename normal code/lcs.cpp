#include<bits/stdc++.h>
using namespace std;
int i,j,m,n,c[100][100];
char x[100],y[100],b[100][100];
void printlcs(int i,int j)
{
    if(i==0||j==0)
        return;
    else if(b[i][j]=='a')
    {
        printlcs(i-1,j-1);
        cout<<x[i-1];
    }
    else if(b[i][j]=='b')
         printlcs(i-1,j);
    else
         printlcs(i,j-1);
}
void lcslength()
{
    m=strlen(x);
    n=strlen(y);
    for(i=0; i<=m; i++)
              c[i][0]=0;
    for(i=0; i<=n; i++)
              c[0][i]=0;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {

             if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='a';
            }
            else
            {if(c[i-i][j]>=c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]='b';
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]='d';
            }
        }}
    }
   printlcs(m,n);
}
int main()
{
  cout<<"Enter first :"<<endl;
  gets(x);
  cout<<"enter 2nd :"<<endl;
  gets(y);
  cout<<"Answer :";
  lcslength();
}
