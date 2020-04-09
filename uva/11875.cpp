#include<bits/stdc++.h>
using namespace std;
int main()
{
    int player,captain,n,member,cnt,cn,i=0;
    cin>>n;
    while(n--)
    {

        i++;
        cnt=0;
        cin>>member;
        cn=member/2;
        cn++;
        while(member--)
        {
           cin>>player;
           cnt++;
           if(cn==cnt)
           {
               captain=player;
           }

        }
        cout<<"Case "<<i<<": "<<captain<<endl;
    }
}
