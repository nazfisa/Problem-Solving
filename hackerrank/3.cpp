#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum1=0,sum2=0,sum;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;)
    {
        for(j=0;j<n;)
        {
            sum1=sum1+a[i][j];
            i++;
            j++;
        }
    }

    for(i=0;i<n;)
    {
        for(j=n-1;j>=0;)
        {
            sum2=sum2+a[i][j];
            i++;
            j--;
        }
    }

  sum=abs(sum1-sum2);
  cout<<sum;
}
