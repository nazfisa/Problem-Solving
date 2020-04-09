#include<bits/stdc++.h>
using namespace std;
int parent[100],level[100],visited[100],stim[100],ftim[100],tim;
vector<int>adj[100];
int dfs(int s)
{
    stack<int>st;
    int a;
    tim=tim+1;
    stim[s]=tim;
    visited[s]=1;
    st.push(s);
    while(!st.empty())
    {
        int u=st.top();
        st.pop();
        for(int i=0;i<adj[i].size();i++)
        {
           a =adj[u][i];
            if(visited[a]==0)
            {

                    visited[a]=1;
                   /// level[a]=level[u]+1;
                    parent[a]=u;
                    dfs(a);
            }
        }
    }
    tim=tim+1;
    ftim[a];
///    printf("%d to %d distance %d\n",s,node,level[node]);

}
int main()
{
    int i,j,edge,node,x,y;
    cin>>node>>edge;
    for(i=1;i<=edge;i++)
    {
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(i=1;i<=node;i++)
    {
        for(j=0;j<adj[i].size();j++)
        cout<<adj[i][j]<<" ";
        cout<<endl;
    }
    tim=0;
    for(i=1;i<=node;i++)
    {
        if(visited[i]==0)
        dfs(i);
    }

}
