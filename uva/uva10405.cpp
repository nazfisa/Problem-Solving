#include<bits/stdc++.h>
using namespace std;
int max (int a,int b)
{
    return (a>b)?a:b;
}
int lcs(char *x,char *y,int m,int n)
{
    int l[m+1][n+1];
    int i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)

    {if(i==0 || j==0)
        l[i][j]= 0;
    else if(x[i-1]==y[j-1])
    {
        l[i][j]=l[i-1][j-1]+1;
        }
    else
    {
        l[i][j]=max(l[i-1][j],l[i][j-1]);
        }}}
        return l[m][n];
}
int main()
{
    char x[1007],y[1007];
   int m,n;
    cin>>x;
    cin>>y;
    m=strlen(x);
    n=strlen(y);
    cout<<lcs(x,y,m,n)<<endl;
}


