#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;

    while(1)
    {
        cin>>a;
        if(a==0)
        {
            break;
        }
        else
        {
            for(i=1; i<a; i++)
            {
                printf("%d ",i);
            }
            cout<<i<<endl;
        }
    }


}
