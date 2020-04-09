#include<bits/stdc++.h>
using namespace std;
long fib(long );
int main()
{
    long fi;
    cin>>fi;
    cout<<fib( fi);
}
long fib(long fi){

if(fi==0|| fi==1)
{
    return fi;
}

return fib(fi-1)+fib(fi-2);



}
