#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,o,i,p,b,h,m=0,k,w,a[100];
    char fl[100];
    cin>>p>>b>>h>>w;
    while(t--)
    {
        for(int l=0;l<h;l++)
        {
            k=0;
            cin>>n;
            for(i=0;i<w;i++)
            {
                cin>>a[i];
            }
            for(i=0;i<w;i++)
            {
                if(a[i]==0)
                   {
                fl[m]=1;
                m++;
                }
                else if(a[i]>=p)
                {
                    k=k+n;
                }
            }


            }
             o=strlen(fl);
            for(i=1;i<o;i++)
            {if(fl[i]==1 || k>b)
                cout<<"at home\n";
                break;}
            if(b>k)
                cout<<k;


    }
}
