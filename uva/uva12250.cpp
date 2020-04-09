#include<bits/stdc++.h>
using namespace std;
int main()
{

    char a[1000];
    int i=1;
    while(gets(a))
    {
        if(strcmp(a,"#")==0)
            break;
        else if(strcmp(a,"HELLO")==0)
        {
            cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
        }
        else if(strcmp(a,"HOLA")==0)
            {
            cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
        }
        else if(strcmp(a,"HALLO")==0)
            {
            cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
        }
        else if(strcmp(a,"BONJOUR")==0)
            {
            cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
        }
        else if(strcmp(a,"CIAO")==0)
            {
            cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
        }
        else if(strcmp(a,"ZDRAVSTVUJTE")==0)
            {
            cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
        }
        else
           cout<<"Case "<<i<<": "<<"UNKNOWN"<<endl;
i++;
    }
}
