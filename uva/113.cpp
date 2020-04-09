#include<bits/stdc++.h>
using namespace std;
int main()
{
  /*  double a,b,c=1,i=1;
    while(1){

    while(scanf("%lf%lf",&a,&b)==2)
    {
        if(c==b)
        {
            break;
        }
        c=c*a;
        i++;
    }
    printf("%lf\n",c);
}
*/
double a,b,s;
while(scanf("%lf%lf",&a,&b)==2)
{
    s=pow(b,1/a);
    printf("%.0lf\n",s);
}
}
