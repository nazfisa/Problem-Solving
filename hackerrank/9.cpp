#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,m,n,d,a,b,c,e,f,count=0,count1=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>c>>d;
    for(int i=0;i<c;i++)
    {
        cin>>m;
        e=m+a;
        if(e>=s && e<=t)
        {
            count++;
        }
        e=0;
    }
     for(int i=0;i<d;i++)
    {
        cin>>n;
        f=b+n;
        if(f>=s && f<=t)
        {
            count1++;
        }
        e=0;
    }
    cout<<count<<endl;
    cout<<count1<<endl;
}
