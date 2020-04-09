///not completed
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=1,b=1,count=0,i,n1,n2,t;
    cin>>t;
    while(t--)
    {
    cin>>n1,n2;
        for(i=2;i<n2;i++)
        {
            b=a+b;
            a=b-a;
           if(n1<=b && n2>=b)
               {
                   count++;
               }
        }
   // cout<<"The Fibonacci number for "<<n<<" is "<<b<<endl;
   cout<<count;
    }
}

