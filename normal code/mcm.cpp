#include<bits/stdc++.h>
using namespace std;
int m[100][100],s[100][100],p[100];
print(int i,int j)
{
    if(i==j)
        printf("A%d",i);
    else
    {
        printf("{");
        print(i,s[i][j]);
        print(s[i][j]+1,j);
        printf("}");
    }
}
void mcm(int n)
{
    int l,i,j,k,q;
    for(i=0;i<=n;i++)
        m[i][i]=0;
    for(l=2;l<=n;l++)
    {
        for(i=1;i<=n-l+1;i++)
        {
            j=i+l-1;
            m[i][j]=99999;
            for(k=i;k<j;k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
            }
            if(q<m[i][j])
            {
                m[i][j]=q;
                s[i][j]=k;
            }
        }
    }
    print(1,n);
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        printf("p%d =",i);
        scanf("%d",&p[i]);
    }
    mcm(n);
}
