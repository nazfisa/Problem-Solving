///Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,n1,n2,n3,n4,i,w,count=0,j=1;
    while(1)
    {
        cin>>a>>b>>w;
        if(a==0 && b==0 && w==0)
            break;

        for(i=1;i<=w;i++)
        {
            cin>>n1>>n2>>n3>>n4;
            for(long long int k=n1;k<=n3;k++)
            {
                count++;
            }
        }
        cout<<"Case "<<j<<" :"<<count<<endl;
        j++;}

}
