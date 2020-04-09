#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, g,number,cnt=0,d=0,in=0,gd=0;
    while(1)
    {
        cin>>i>>g;
        cnt++;
        cin>>number;

        if(i>g)
        {
            in++;
            printf("Novo grenal (1-sim 2-nao)\n");
        }
        else if(g>i)
        {
            gd++;
            printf("Novo grenal (1-sim 2-nao)\n");
        }
        else
        {
            d++;
            printf("Novo grenal (1-sim 2-nao)\n");
        }
        if(number!=1)
        {
            break;
        }

    }
    printf("%d grenais\n",cnt);
    printf("Inter:%d\n",in);
    printf("Gremio:%d\n",gd);
    printf("Empates:%d\n",d);
    if(in>gd)
    {
        printf("Inter venceu mais\n");
    }
    else if(in<gd)
    {
        printf("Gremio venceu mais\n");
    }

}
