#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visited[100];
int level[100];
int parent[100];
void bfs(int s,int n)
{
    int v;
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
        q.pop();
        for(int i=0; i<adj[u].size(); i++)
        {

             v=adj[u][i];


            if(visited[v]==0)
            {
                level[v]=level[u]+1;
                cout<<v<<"="<<level[v]<<"   ||";
                parent[v]=u;
                visited[v]=1;
                q.push(v);

            }

        }
        ///q.pop();
    }
    for(int i=0;i<20;i++)
    {
        cout<<level[i]<<" ";
    }

    printf("%d to %d: %d\n",s,n,level[n]);

}
int main()
{
    int i,j,c,k,e,n=20,x,y;
    for(i=1; i<20; i++)
    {
        cin>>k;
        for(j=0; j<k; j++)
        {
            cin>>c;
            adj[i].push_back(c);
            adj[c].push_back(i);
        }
    }
    /* for(i=1;i<=n;i++)
    {
        cout<<i<<":";
        for(j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int l;
    cin>>l;
    for(int i=1; i<=l; i++)
    {
        int f ,g;
        cin>>f>>g;
        bfs(f,g);
       /* for(int i=0; i<10000; i++)
        {
            adj[i].clear();
            ///adj[c].clear();

        }*/
    }

}
