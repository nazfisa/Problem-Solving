#include<bits/stdc++.h>
using namespace std;
int main()
{
     float n,sum=0,avr;
    int i;
    while(1)
    {
        for(i=1;i<=12;i++)
        {
         scanf("%f",&n);
         sum=sum+n;
        }
        avr=sum/12;

        printf("$%0.2f\n",avr);
    }
}
