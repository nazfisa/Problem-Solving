#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l,i,count=0;
    l=s.length();
    for(i=0;i<l;i++)
    {
        if(s[i]!='S')
        {

            count++;
        }
        else if(s[i+1]!='O')
        {
            count++;
        }
        else if(s[i+2]!='S')
        {
            count++;
        }
        i+=2;
    }
    cout<<count<<endl;
}
