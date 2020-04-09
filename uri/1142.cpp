#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,cnt=0;
    cin>>x;
    for(int i=1;x!=cnt;i++)
    {
        if(i%4==0)
        {
            printf("PUM\n");
            cnt+=1;
        }
        else
        {
            cout<<i<<" ";

        }
    }
}
