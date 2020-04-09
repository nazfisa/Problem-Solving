#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6],len,T,n;
    char ch[1000];
    cin>>n;
    while(n--)
    {
        T=0;
        for(int i=0; i<6; i++)
        {
            a[i]=0;
        }

        cin>>ch;
        len=strlen(ch);
        for(int i=0; i<len; i++)
        {
            if(ch[i]=='M')
            {
                a[0]++;
            }
            else if(ch[i]=='A')
                a[1]++;
            else if(ch[i]=='R')
                a[2]++;
            else if(ch[i]=='G')
                a[3]++;
            else if(ch[i]=='I')
                a[4]++;
            else if(ch[i]=='T')
                a[5]++;
        }

        a[0]=a[0]/1;
        a[1]=a[1]/3;
        a[2]=a[2]/2;
        a[3]=a[3]/1;
        a[4]=a[4]/1;
        a[5]=a[5]/1;

        if(a[0]>=1 && a[1]>=1 && a[2]>=1 && a[3]>=1 && a[4]>=1 && a[5]>=1)
        {
            sort(a,a+5);
            cout<<a[0]<<endl;
        }
        else
        {
            cout<<T<<endl;
        }


    }


}
