#include<bits/stdc++.h>
using namespace std;
int main()
{
    double s=1;
    int i,j=2;
    for(i=3;i<=39;)
    {
        s=s+(double(i)/double(j));
        j=j+j;
        i=i+2;
    }
    printf("%0.2lf\n",s);
}
