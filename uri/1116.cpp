#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    double a,b,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf",&a,&b);
        if(b==0)
        {
            cout<<"divisao impossivel"<<endl;
        }
        else
            {
                sum=(a/b);
                printf("%0.1lf\n",sum);
            }
    }
}
