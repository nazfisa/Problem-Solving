#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    double a,sum=0.0,av;
    while(1)
    {
        cin>>a;
        if(a<0)
        {
            break;
        }
        else{
           sum=sum+a;
           cnt++;
        }
    }
    av=sum/double(cnt);
    printf("%0.2lf\n",av);
}
