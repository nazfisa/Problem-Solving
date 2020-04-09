///not completed
#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    long long int m;
    if(n<=100)
    {
        return f(f(n+11));
    }
    else if(n>=101)
    {
        return f(n-11);
    }

}
int main()
{
    long long int i,j,n,k;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        else
        {
            cout<<f(n);
        }
    }
}
