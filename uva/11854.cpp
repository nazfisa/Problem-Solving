#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int a,b,c,ab,cc;
    while(1)
    {
       cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
        {
            break;
        }
        else
        {
            if((a*a)+(b*b)==(c*c)||(a*a)+(c*c)==(b*b) || (c*c)+(b*b)==(a*a))
            {
                cout<<"right"<<endl;
            }
            else
            {
                cout<<"wrong"<<endl;
            }
        }
    }

}
