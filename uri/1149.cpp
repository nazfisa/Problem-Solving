#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,cnt=0;
    cin>>a;
    while(1)
    {
        cin>>n;
        if(n>0)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cnt+=a+i;
    }
    cout<<cnt<<endl;
}
