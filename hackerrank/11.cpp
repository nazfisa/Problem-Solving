#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,min,max,t,count1=0,count2=0;
    cin>>t;
    long long int a[t];
    cin>>a[0];
    min=max=a[0];
    for(i=1;i<t;i++)
    {
        cin>>a[i];
        if(a[i]<min)
        {
            count1++;
            min=a[i];
        }
        else if(a[i]>max)
        {
            count2++;
            max=a[i];
        }
    }
    cout<<count2<<" "<<count1<<endl;
}
