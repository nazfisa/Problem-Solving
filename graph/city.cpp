#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int > v[100];
    int n,e,x,y,j,i;
    cin>>n>>e;
    for( i=0;i<e;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
    }
    for(i=1;i<=n;i++)
    {
        cout<<i<<":";
        for(j=0;j<v[i].size();j++)
        {
           /// if(j==v[i].size()-1)
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}

