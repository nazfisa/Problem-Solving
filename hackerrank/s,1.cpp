#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,flag;
    string s;
    cin>>s;
    int aa=s.size();
    for(i=0;i<aa;i++)
    {
        if(s[i]=='h' &&s[i]!='a' &&s[i]!='c'&&s[i]!='k'&&s[i]!='e'&&s[i]!='r'&&s[i]!='n'&&s[i]!='k')
            flag=1;
        for(int j=i+1;j<aa;j++)
        {
             if(s[i]=='a' &&s[i]!='h' &&s[i]!='c'&&s[i]!='k'&&s[i]!='e'&&s[i]!='r'&&s[i]!='n'&&s[i]!='k')
                flag++;
        }
        for(int k=j+1;k<aa;k++)
        {
             if(s[i]=='c' &&s[i]!='h' &&s[i]!='k'&&s[i]!='e'&&s[i]!='r'&&s[i]!='a'&&s[i]!='n'&&s[i]!='k')
                flag++;
        }
        for(int l=k+1;l<aa;l++)
        {
             if(s[i]=='k' &&s[i]!='h' &&s[i]!='c'&&s[i]!='e'&&s[i]!='r'&&s[i]!='a'&&s[i]!='n'&&s[i]!='k')
                flag++;
        }
        for(int m=l+1;m<aa;m++)
        {
             if(s[i]=='e' &&s[i]!='h' &&s[i]!='c'&&s[i]!='k'&&s[i]!='a'&&s[i]!='r'&&s[i]!='n'&&s[i]!='k')
                flag++;
        }
        for(int n=m+1;n<aa;n++)
        {
             if(s[i]=='r' &&s[i]!='h' &&s[i]!='c'&&s[i]!='k'&&s[i]!='e'&&s[i]!='a'&&s[i]!='n'&&s[i]!='k')
                flag++;
        }
        for(int o=n+1;o<aa;o++)
        {
             if(s[i]=='r' &&s[i]!='h' &&s[i]!='c'&&s[i]!='k'&&s[i]!='e'&&s[i]!='a'&&s[i]!='n'&&s[i]!='k')
                flag++;
        }
        for(int p=o+1;p<aa);p++)
        {
             if(s[i]=='a' &&s[i]!='h' &&s[i]!='c'&&s[i]!='k'&&s[i]!='e'&&s[i]!='r'&&s[i]!='n'&&s[i]!='k')
                flag++;
        }
        for(int q=p+1;q<aa);q++)
        {
             if(s[i]=='n' &&s[i]!='h' &&s[i]!='c'&&s[i]!='k'&&s[i]!='e'&&s[i]!='r'&&s[i]!='a'&&s[i]!='k')
                flag++;
        }
        for(int r=q+1;r<aa;r++)
        {
             if(s[i]=='k' &&s[i]!='h' &&s[i]!='c'&&s[i]!='k'&&s[i]!='e'&&s[i]!='r'&&s[i]!='a'&&s[i]!='n')
                flag++;
        }
    }
    if(flag==10)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
