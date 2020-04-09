///Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,a[10000],n,temp,count=0;
    cin>>t;
    while(t--){
            cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i-1;j++)
        {
            if(a[j]<a[j-1])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
                count++;
            }
        }
    }
    cout<<"Optimal train swapping takes "<<count<<" swaps."<<endl;
    count=0;
    }
}
