#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,t;
    char a[10000];
    cin>>t;
    while(t--)
    {
        cin>>a;
        j=strlen(a);
        if(strcmp(a,"1")==0)
           cout<<"+"<<endl;
        else if(strcmp(a,"4")==0)
            cout<<"+"<<endl;
        else if(strcmp(a,"78")==0)
            cout<<"+"<<endl;
        else if(a[j-1]=='5' && a[j-2]=='3')
            cout<<"-"<<endl;
        else if(a[0]=='9'&& a[j-1]=='4')
            cout<<"*"<<endl;
        else if(a[0]=='1'&&a[1]=='9'&&a[2]=='0')
            cout<<"?"<<endl;
    }
}
