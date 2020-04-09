#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, even,EC=0,odd,OC=0,positive,PC=0,negative,NC=0, number;
    for(i=0;i<5;i++)
    {
        scanf("%d",&number);
        if(abs(number)%2==0)
            EC++;
        if(abs(number)%2==1)
            OC++;
        if(number>0)
            PC++;
        if(number<0)
            NC++;


    }

        printf("%d valor(es) par(es)\n",EC);
        printf("%d valor(es) impar(es)\n",OC);
        printf("%d valor(es) positivo(s)\n",PC);
        printf("%d valor(es) negativo(s)\n",NC);
}
