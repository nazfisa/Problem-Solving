#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--)
   {
    string a[100];
    int l;
    scanf("%s",a);
    l=strlen(a);
    if(a[l-1]=='M' && a[l-2]=='P')
    {
       // cout<<a[1];
        a[0]=1;
        a[1]=a[1]+2;
    }
for(int i=0;i<l;i++)
{
    printf("%c",a[i]);
}
}}
