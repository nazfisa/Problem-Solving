#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,a[100][100],sum=0,t;
    cin>>t;
    while(t--)
    {
        cin>>k;
        for(i=0;i<k;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
            sum=sum+(a[i][j-1]*a[i][j-3]);
        }
        cout<<sum<<endl;
        sum=0;
    }
}
