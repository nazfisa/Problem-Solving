#include <bits/stdc++.h>
using namespace std;
vector<int>edge[10000],cost[10000];
int vertices,edges;
const int INF = 1000000000;
int main()
{
    int i,j,u,v,weight;
    while(1)
    {
        cin>>vertices>>edges;
        while(edges--)
        {
            cin>>u>>v>>weight;
            edge[u].push_back(v);
            /// edge[v].push_back(u);  ///for undirected graph comment out this line
            cost[u].push_back(weight);
            ///cost[v].push_back(weight); ///for undirected graph comment out this line
        }
        for(i=1;i<=vertices;i++)
        {
            cout<<i<<" : ";
            for(j=0;j<edge[i].size();j++)
            {
                cout<<edge[i][j]<<"("<<cost[i][j]<<") ";
            }
            cout<<endl;
        }

        for(i=0; i<10000; i++)
        {
            edge[i].clear();
            cost[i].clear();
        }

    }
    return 0;
}

