
/// COMPLEXITY: 0(v*v)
/// not good

#include <bits/stdc++.h>
using namespace std;
vector<int>edge[10000],cost[10000];
int vertices,edges;
const int INF = 1000000;
void dijkstra(int source);
int main()
{
    int i,u,v,weight;
        cin>>vertices>>edges;
        while(edges--)
        {
            cin>>u>>v>>weight;
            edge[u].push_back(v);
            edge[v].push_back(u);  ///for undirected graph comment out this line
            cost[u].push_back(weight);
            cost[v].push_back(weight); ///for undirected graph comment out this line
        }

        dijkstra(1);

        for(i=0; i<10000; i++)
        {
            edge[i].clear();
            cost[i].clear();
        }

    return 0;
}

void dijkstra(int source){
    queue <int > q;
    int u,v,i;
    q.push(source);
    vector<int> distance(100000,INF);
    distance[source]=0;
    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(i=0;i<edge[u].size();i++)
        {
            v=edge[u][i];
            if(distance[v]>cost[u][i]+distance[u])
            {

                distance[v]=cost[u][i]+distance[u];
                q.push(v);
            }
        }
    }
    for(i=2;i<=vertices;i++)
    {
    cout<<distance[i]<<" ";
    }
    cout<<endl;

}
