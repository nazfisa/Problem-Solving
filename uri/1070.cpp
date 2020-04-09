#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0;
    cin>>n;
    for(i=n;;i++){
        if(i%2==1)
        {
            cout<<i<<endl;
            count++;
        }
        if(count==6)
            break;
    }
}
