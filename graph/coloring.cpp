#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10000];

 int visited[10000];
 int Colored[10000];
void bfs(int s,int n)
{

    int flag=0;
    for(int i=0; i<n; i++)
    {
        visited[i]=0;
        Colored[i]=0;
    }
    queue<int>q;
    q.push(s);
    visited[s]=1;
    Colored[s]=1;
    while(!q.empty())
    {
        int u=q.front();

        for(int i=0; i<adj[u].size(); i++)
        {
            int v=adj[u][i];

            if(visited[v]==0)
            {

                visited[v]=1;
                q.push(v);

            }
            if(Colored[v]==0)
            {
                if(Colored[u]==1)
                {
                    Colored[v]=2;
                }
                else if(Colored[u]==2)
                {
                    Colored[v]=1;
                }
            }
            else if(Colored[v]!=0)
            {
                if(Colored[v]==Colored[u])
                {
                    flag=1;
                    break;
                }
            }
        }

        q.pop();
    }

    if(flag==1)
    {
        cout<<"NOT BICOLORABLE."<<endl;
    }
    else
    {
        cout<<"BICOLORABLE."<<endl;
    }

}
int main()
{
    int node,edge,x,y;
    while(1)
    {
    cin>>node;
    if(node==0)
        break;
    cin>>edge;
    for(int i=0;i<node;i++)adj[i].clear();
    for(int j=1; j<=edge; j++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }

    bfs(0,node);
} }


