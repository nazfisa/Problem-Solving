#include<bits/stdc++.h>
using namespace std;
int main()
{
    double pos=0,neg=0,zero=0,p,ne,z;
    long long int n;
    cin>>n;
    long long int i,a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            zero++;
        }
       else if(a[i]>0)
        {
           pos++;
        }
       else if(a[i]<0)
        {
            neg++;
        }
    }

    z=zero/n;
    p=pos/n;
    ne=neg/n;
    printf("%0.6lf\n %0.6lf\n %0.6lf\n",p,ne,z);
}
