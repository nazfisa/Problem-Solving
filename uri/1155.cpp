#include<bits/stdc++.h>
using namespace std;
int main()
{
    double s,sum=1;
    for(int i=2;i<=100;i++)
    {
       sum+=(1/double(i));
    }
    printf("%0.2lf\n",sum);
}
