#include<bits/stdc++.h>
using namespace std;
long fact(long);
int main()
{
    long fac;
    cin>>fac;
    cout<<"FACTORIAL "<<fac<<" is "<<fact(fac);
    cout<<"FACTORIAL "<<fac<<" is "<<fact(fac);

}
long fact(long num)
{
    long fact;
    if(num==0)
        return 1;
    fact=num*(num-1);
    return fact;
}
