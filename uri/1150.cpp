#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,cnt=0,sum=0;
    cin>>a;
    while(1)
    {
        cin>>n;
        if(n>a)
        {
            break;
        }
    }
    for(int i=0;sum<=n;i++)
    {
        sum+=a+i;
        cnt+=1;
    }
    cout<<cnt<<endl;
}
