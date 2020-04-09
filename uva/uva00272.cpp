///Accepted
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,count=0,n;
    char a[100000];
    while(gets(a))
    {
        n=strlen(a);
        for(i=0;i<n;i++)
        {if(a[i]=='"')
        {
            count++;
            if(count%2==1)
            cout<<"``";
            else if(count%2==0)
                cout<<"''";

    }
    else
            printf("%c",a[i]);
            }
            cout<<endl;
            }

}
