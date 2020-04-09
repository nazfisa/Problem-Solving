#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visited[100];
void bfs(int s,int n)
{
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
    }
    queue<int>q;
    q.push(s);
    visited[s]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();i++)
        {
            if(visited[adj[u][i]]==0)
            {
                int v=adj[u][i];
          ///      cout<<u<<" ";
                visited[v]=1;
                q.push(v);
            }
        }
    }
    for(int i=0;i<=n;i++)
   {
        cout<<visited[i]<<endl;
}
}
int main()
{
    int node,edge,x,y;
    cin>>node>>edge;
    for(int j=1;j<=edge;j++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(2,4);
}
