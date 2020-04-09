#include<bits/stdc++.h>
using namespace std;
int main(){

int n1,n2,i,j,temp,sum=0;
while(1)
{
    cin>>n1>>n2;
    if(n1<=0 ||n2<=0)
        break;
    else
    {
        if(n1>n2)
        {
            temp=n2;
            n2=n1;
            n1=temp;
        }
        for(i=n1;i<=n2;i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("Sum=%d\n",sum);
        sum=0;
    }
}
}
