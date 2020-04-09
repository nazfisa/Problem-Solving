#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a=0,g=0,d=0;
    while(1)
    {
        cin>>x;
        if(x==1)
        {
            a++;
        }
        else if(x==2)
        {
            g++;
        }
        else if(x==3)
        {
            d++;
        }
        else if(x==4)
        {
            break;
        }

    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",a);
    printf("Gasolina: %d\n",g);
    printf("Diesel: %d\n",d);
}
