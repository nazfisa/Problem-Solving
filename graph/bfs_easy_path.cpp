#include <bits/stdc++.h>
using namespace std;
vector< vector< int > >adj_list;

int main()
{
    int vertices,edges,u,v,i,j;
    cin>>vertices>>edges;
    for(i=0;i<edges;i++)
    {
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    for(i=0;i<=vertices;i++)
    {
        cout<<i<<" : ";
        for(j=0;j<adj_list[i].size();j++)
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }
    int source;
    cin>>source;
    queue <int > q;
    q.push(source);
    vector<bool> visited(false);
    visited[source]=1;
    cout<<source<<" ";
    while(!q.empty())
    {
        u= q.front();
        q.pop();
        for(j=0;j<adj_list[u].size();j++)
        {
            if(visited[adj_list[u][j]]==false)
            {
                cout<<adj_list[u][j]<<" ";
                q.push(adj_list[u][j]);
                visited[adj_list[u][j]]=true;
            }
        }
    }
    return 0;
}
