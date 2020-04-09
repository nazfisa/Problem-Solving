#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,c,d,t;

    cin>>t;
    int a[t];


        for(int i=0; i<t; i++)
        {           cin>>a[i];
            if(a[i]>=0 && a[i]<=35)
            {
                cout<<a[i]<<endl;
            }
            else if(a[i]>=36 && a[i]<=100)
            {
                if( a[i]%5>2)
                {

                    b=a[i]%5;

                    c=5-b;

                    cout<<a[i]+c<<endl;
                }

                else
                    cout<<a[i]<<endl;

            }
        }
    }


