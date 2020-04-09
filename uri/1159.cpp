#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;

    while(1)
    {
        sum=0;
        cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            if(n%2==0)
            {
                for(int i=1; i<=5; i++)
                {
                    sum=sum+n;
                    n+=2;
                }
            }
            else
            {
                n=n+1;
                for(int i=1; i<=5; i++)
                {
                    sum=sum+n;
                    n+=2;
                }
            }


        }

    cout<<sum<<endl;
    }
}
