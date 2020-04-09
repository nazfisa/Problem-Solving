#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n1,n2,cnt=0;
    cin>>n1>>n2;
    if(n1>n2){
    for(int i=n2+1;i<n1;i++)
    {
        if(i%5==2 || i%5==3)
        {
            cout<<i<<endl;
        }
    }}
    else if(n2>n1)
    {
        for(int i=n1+1;i<n2;i++)
    {
        if(i%5==2 || i%5==3)
        {
            cout<<i<<endl;
        }
    }
    }

}

