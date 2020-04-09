#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    int l;
    cin>>l;
    while(l--)
   {
    cin>>s;
    int a,j=0;
    a=s.length();

    int aaa= s[0];
    int aab= s[1];
    int aac= s[a-1];
    int aad= s[a-2];

    if(abs(aaa-aab)==abs(aac-aad))
    {
        cout<<"funny"<<endl;
    }
    else
        cout<<"Not Funny"<<endl;}
}
