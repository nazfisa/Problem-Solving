#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t, j,l=1,flag=1;
    int a[1000];
    cin>>t;
    while(t--)
    {
        for(i=0;i<10;i++)
            cin>>a[i];
        for(i=1;i<10;i++)
        {
            if(a[i-1]<=a[i])
               {
                flag++;
                }
               else if(a[i-1] >=a[i])
               {
                l++;
                }


        }
        cout<<"Lumberjacks:"<<endl;
        if((flag==10 &&l==1)||(flag==1 &&l==10))
            cout<<"Ordered"<<endl;
        else
            cout<<"Unordered"<<endl;
            flag=1;
            l=1;
    }
}
