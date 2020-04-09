#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,n1,n2,sum=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        cin>>n1>>n2;
        if(n1>n2)
        {
            temp=n2;
            n2=n1;
            n1=temp;
        }
        for(j=n1+1;j<n2;j++)
        {
            if(j%2==1)
            {
                sum+=j;
            }
        }
        printf("%d\n",sum);
        sum=0;
    }
}
