#include <bits/stdc++.h>
using namespace std;
vector<int>edge[10000];
int vertices,edges;
int main()
{
    int i,j,u,v;
    while(1)
    {
        cin>>vertices>>edges;
        while(edges--)
        {
            cin>>u>>v;
            edge[u].push_back(v);
            edge[v].push_back(u);  ///for undirected graph comment out this line
        }
        for(i=1;i<=vertices;i++)
        {
            cout<<i<<" : ";
            for(j=0;j<edge[i].size();j++)
            {
                cout<<edge[i][j]<<" ";
            }
            cout<<endl;
        }

        for(i=0; i<10000; i++)
        {
            edge[i].clear();
        }

    }
    return 0;
}

