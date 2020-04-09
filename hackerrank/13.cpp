#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,count=0;
    cin>>t>>k;
    int a[t];
    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<t; i++)
    {
        for(int j=i+1; j<t; j++)
        {
            if(((a[i]+a[j])%k)==0)
            {
                count++;
            }
        }
    }
    cout<<count<<endl;
}
