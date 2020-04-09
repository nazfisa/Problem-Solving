///not understand
#include<bits/stdc++.h>
using namespace std;
///char x[100],y[100];
///int m,n;
int max (int a,int b)
{
    return (a>b)?a:b;
}
int lcs(char *x,char *y,int m,int n)
{
    if(m==0 || n==0)
        return 0;
    if(x[m-1]==y[n-1])
    {
        cout<<m<<" "<<n<<endl;
        return 1+lcs(x,y,m-1,n-1);}
    else
    {
        cout<<m<<" "<<n<<endl;
        return max(lcs(x,y,m,n-1),lcs(x,y,m-1,n));}
}
int main()
{
    char x[100],y[100];
   int m,n;
    cin>>x;
    cin>>y;
    m=strlen(x);
    n=strlen(y);
    cout<<"Length of LCS is :"<<lcs(x,y,m,n);
}
