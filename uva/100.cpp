#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c_l=1,i,n1,j,n2,m=0,temp;
    while(scanf("%d%d",&n1,&n2)==2){
            cout<<n1<<" "<<n2<<" ";
            if(n1>n2)
            {
                temp=n1;
                n1=n2;
                n2=temp;
            }
    i=n1;
    while(i<=n2)
    {
    j=i;
     c_l=1;
        while(j>1)
        {
            if(j%2==1)
            {
                j=((3*j)+1);
            }
            else if(j%2==0)
            {
                j=j/2;
            }
            c_l++;
        }

        if(m<=c_l)
            {
               m=c_l;
            }

            i++;

    }
    printf("%d\n",m);
    }

}
