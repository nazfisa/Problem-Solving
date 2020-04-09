#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a1=0,a,j;

    for(i=1;i<=100;i++)
    {
        scanf("%d",&a);
        if(a1<a)
        {
            a1=a;
            j=i;
        }
    }
    printf("%d\n%d\n",a1,j);
}
