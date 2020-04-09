#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,r;
    int l,i,j=0,k=0,n;
    cin>>n;
    while(n--)
   {
        cin>>s;
    l=s.length();
  for(i=1;i<l;i++)
    {
        if(s[i-1]==s[i])
        {

            k=k+1;
        }

    }

        cout<<k<<endl;
    k=0;
   }
}
