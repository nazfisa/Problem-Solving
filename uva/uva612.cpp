///NOT COMPLETED
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,temp,n,count=0;
    char a[1000];
    cin>>t;
    while(t--){
           /* cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }*/
    cin>>a;
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
    cout<<count;
    count=0;
    }
}

