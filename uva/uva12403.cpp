#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int i,j=0,t;
    char a[100];
    cin>>t;
    while(t--)
    {
        cin>>a;

        if(strcmp("donate",a)==0)
        {cin>>i;
           j=j+i;}
           else if(strcmp("report",a)==0)
                cout<<j<<endl;

    }
}
