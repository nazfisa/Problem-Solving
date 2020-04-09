#include<stdio.h>
int main()
{
    int i,count=0;
    double n, sum=0.0,avr;
    for(i=0;i<6;i++)
    {
        scanf("%lf",&n);
        if(n>0.0)
        {
            sum+=n;
            count++;
        }
    }
    avr=sum/(double)count;
    printf("%d valores positivos\n%0.1lf\n",count,avr);
}
