///wrong answer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a=0,b=1,count=0,i,n,t;
    cin>>n;

        for(i=0;i<n;i++)
        {
            b=a+b;
            a=b-a;
        }
    cout<<"The Fibonacci number for "<<n<<" is "<<b<<endl;

}
