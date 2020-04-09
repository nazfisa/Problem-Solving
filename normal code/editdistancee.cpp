#include<bits/stdc++.h>
using namespace std;
int a[100][100],i,j,m,n,ed[100][100];
char c[100][100];
string s1,s2;
void print(int i,int j)
{
    if(c[i][j]=='R')
    {
        print(i-1,j-1);
        cout<<"Replace"<<endl;
    }
    else if(c[i][j]=='E')
    {

    print(i-1,j);
        cout<<"Remove"<<endl;}
    else if(c[i][j]=='I')
    {
        print(i,j-1);
        cout<<"Insert"<<endl;}
       /* else
        {

        print(i-1,j-1);
            cout<<"Copy"<<endl;}*/
}
/*int min(int x,int y)
{
    return min (x,y);

}*/
int editdistance(string s1,string s2,int m,int n)
{
    ///int ed[m+1][n+1];
    ///int i,j;
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==0)
            {
                ed[i][j]=j;
            }
            else if(j==0)
            {
                ed[i][j]=i;
            }
            else if(s1[i-1]==s2[j-1])
            {
                ed[i][j]=ed[i-1][j-1];
                c[i][j]='C';
            }
            else if((ed[i-1][j-1]<ed[i-1][j])&&(ed[i-1][j-1]<ed[i][j-1]) )
            {
                ed[i][j]=1+(ed[i-1][j-1]);
                c[i][j]='R';
            }
            else if((ed[i-1][j-1]>ed[i-1][j])&&(ed[i-1][j]<ed[i][j-1]))
            {
                ed[i][j]=1+(ed[i-1][j]);
                c[i][j]='E';
            }
            else
            {
                ed[i][j]=1+(ed[i][j-1]);
                c[i][j]='I';
            }
        }
    }
   void print(int m,int n);
    return ed[m][n];
    /// void print(int m,int n);
}
int main()
{
    ///string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<editdistance(s1,s2,s1.length(),s2.length());
}
