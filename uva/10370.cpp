#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1002],i,n,number,sum,cnt1;
    double avrg;
    cin>>n;
    while(n--)
    {
        sum=0;
        cnt1=0;
        cin>>number;
        for(i=0;i<number;i++)
        {
            cin>>arr[i];
            sum+=arr[i];

        }
        avrg=(double)sum/(double)number;
        for(i=0;i<number;i++)
        {
            if(arr[i]>avrg)
            {
               cnt1++;
            }

        }
        printf("%.3lf%%\n",(double)cnt1*100.0/(double)number);}

}
