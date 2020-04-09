#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b=0,c=0,n,sum=0,i,j,k,l;

    int a[6][6];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
   for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           for(k=i;k<=i+2;k++)
           {
               b++;
               for(l=j;l<=j+2;l++)
               {
                   if(i==1 && b==2)
                   {
                       b=0;
                       sum+=a[k][l+2];
                       break;
                   }
                  else if(i!=1 && b==3)
                   {
                       b=0;
                       sum+=a[k][l+2];
                       break;
                   }
                   else
                   {
                       sum+=a[k][l];
                   }
               }
           }
           cout<<sum<<" ";

           if(c<sum)
            c=sum;

        }
    }
    cout<<c<<endl;
}
