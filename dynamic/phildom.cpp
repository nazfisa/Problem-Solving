#include<bits/stdc++.h>
using namespace std;
char a[100],b[100];
int m,n,i,j,l,k,c[100][100];
int max(int x,int y)
{
    return (x>y)?x:y;
}
int lps()
{
  m=strlen(a);
  ///n=strlen(b);
  for(i=0;i<m;i++)
        c[i][i]=1;
  for(l=2;l<=m;l++)
  {
      for(i=0;i<m-l+1;i++)
      {
          j=i+l-1;
          if(a[i]==a[j] && l==2)
            c[i][j]=2;
           else if(a[i]==a[j])
            c[i][j]=c[i+1][j-1]+2;
            else
                c[i][j]=max(c[i][j-1],c[i+1][j]);
      }
  }
  return c[0][m-1];
}
int main()
{
   gets(a);
   ///gets(b);
   cout<<lps();

}
