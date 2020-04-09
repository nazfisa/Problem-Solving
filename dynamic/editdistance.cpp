#include<bits/stdc++.h>
using namespace std;
int min(int x,int y,int z)
{
    return min(min(x,y),z);
}
int editdistance(string s1,string s2,int m,int n)
{
    int i,j;
    int ed[m+1][n+1];
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
                }
                else
                {
                    ed[i][j]=1+min(ed[i-1][j-1],ed[i][j-1],ed[i-1][j]);
                }
            }
        }
        return ed[m][n];
}
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout<<editdistance(s1,s2,s1.length(),s2.length());
}
