#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    if(((y%400)==0) ||((y%4)==0 && (y%100)!=0) &&(y>=1700 && y<=2700))
    {
        cout<<"12.09."<<y<<endl;
    }
    else
        cout<<"13.09."<<y<<endl;
}