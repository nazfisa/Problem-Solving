#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,bf,bs,n,ans=0;
    cin>>n;
    bf=n;
    for(i=0;;i++)
    {
        if(bf<3)
           {
             break;
           }
        bs=bf%3;
        bf=bf/3;
        ans=ans+bf;
        bf+=bs;

    }
    cout<<ans+n<<" ";
}
