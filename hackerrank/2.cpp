#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum=0;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
       sum=sum+a[i];

    }
    cout<<sum;
}
