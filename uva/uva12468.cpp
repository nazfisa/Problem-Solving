#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,sum1=0,i,j;
    while(scanf("%d%d",&i,&j)==2)
    {
        if(i==-1 && j==-1)
            break;
        if(i>j)
        {
            sum=i-j;
            sum1=((99-i)+(j-0)+1);
        }
        else
        {
            sum=j-i;
            sum1=((99-j)+(i-0)+1);
        }
        if(sum>sum1)
        {
            cout<<sum1<<endl;
        }
        else
            cout<<sum<<endl;
        sum=0;
        sum1=0;
    }
}
