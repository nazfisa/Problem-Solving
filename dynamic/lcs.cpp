#include<bits/stdc++.h>
using namespace std;
int i,j,m,n,c[100][100],b[100][100];
char x[100],y[100];
int lcslength()
{
    m=strlen(x);
    n=strlen(y);
    for(i=0;i<=m;i++)
        c[i][0]=0;
    for(i=0;i<=n;i++)
        c[0][i]=0;
        for(i=1;i<=m;i++)
        {
            for(j=0;j<=n;j++)
            {
                if(x[i-1]==y[j-1])
                {
                    c[i][j]=c[i-1][j-1]+1;

                }
                else if(c[i-1][j]>=c[i][j-1])
                {
                    c[i][j]=c[i-1][j];
                }
                else
                {
                    c[i][j]=c[i][j-1];
                }
            }
            return c[m][n];
        }
}
int main()
{
    while(1)
    {
        gets(x);
        gets(y);
        int k=lcslength();
        cout<<k;
    }
}
