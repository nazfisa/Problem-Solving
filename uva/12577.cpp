#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=1;
    char s[100];
    while(1)
    {
      cin>>s;
      if(strcmp(s,"*")==0)break;
      else if(strcmp(s,"Umrah")==0)
        cout<<"Case "<<i<<": Hajj-e-Asghar"<<endl;
      else if(strcmp(s,"Hajj")==0)
        cout<<"Case "<<i<<": Hajj-e-Akbar"<<endl;

      i++;
    }


}
