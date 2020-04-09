#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visited[100];
int level[100];
int parent[100];
void bfs(int s,int n)
{
    for(int i=0; i<n; i++)
    {
        visited[i]=0;
    }
    queue<int>q;
    q.push(s);
    visited[s]=1;
    level[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        cout<<u<<": ";
        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];
            cout<<"v "<<v<<" ";
            if(visited[v]==0)
            {
                level[v]=level[u]+1;
                parent[v]=u;
                visited[v]=1;
                q.push(v);

            }
        }
        cout<<endl;
        //cout<<u;
        q.pop();
    }

    printf("\n%d to %d distance %d\n",s,n,level[n]);
}
int main()
{
    int node,edge,x,y;
    cin>>node>>edge;
    for(int j=1; j<=edge; j++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    for(int i = 1; i <= node; ++i)
    {
        cout << "Adjacency list of node " << i << ": ";
        for(int j = 0; j < adj[i].size(); ++j)
        {
            cout << adj[i][j] << " ";
        }
        cout<<endl;
    }
    bfs(1,3);
}

