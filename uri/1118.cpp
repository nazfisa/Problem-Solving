#include<bits/stdc++.H>
using namespace std;
int main()
{
    double x,n1=0.0,t;
    int cnt=0,n2,z=0,flag=0;
    while(1){
        while(cnt==2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            cin>>n2;
            if(n2==1)
            {
                n1=0;
                z=0;
                cnt=0;

            }
            if(n2==2)
            {
                flag=1;
                break;
            }
        }
        if(flag==1){
            break;
        }
        cin>>x;
        if(x<0 || x>10){
            printf("nota invalida\n");

        }
        else if(z==0)
        {
            n1=x;
            z=1;
        }
        else{
            printf("media = %0.2lf\n",((n1+x)/2.00));
            cnt=2;

        }
    }

}
