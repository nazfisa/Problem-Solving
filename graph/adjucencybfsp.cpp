#include<bits/stdc++.h>
using namespace std;
vector<int >v[100];
int visited[100],parent[100],level[100];
void bfs(int s,int n)
{
    queue<int>q;
    int i,u,a,count=0;
    for( i=0;i<n;i++)
       {
    visited[i]=0;
    }
    for(int k=1;k<=n;k++)
    {
    q.push(k);
    level[k]=0;
    visited[k]=1;


    while(!q.empty())
    {
        u=q.front();
         q.pop();

        for(i=0;i<v[u].size();i++)
        {
         a=v[u][i];
         if(visited[a]==0)
         {
             visited[a]=1;
             level[a]=level[u]+1;
             parent[a]=u;
             q.push(a);
             k=a;
         }
         ///cout<<"l";
        }
    }
      count++;
    }
    cout<<count<<endl;
   /* for(i=1;i<=n;i++)
    {
        cout<<"parent "<<i<<" = ";
        for(int j=0;j<v[i].size();j++)
        cout<<v[i][j]<<" "<<level[i];
        cout<<endl;
    }*/

    /// printf("%d to %d distance %d\n",s,n,level[n]);

}

int main()
{

    int i,j,n,e,x,y;
    cout<<"Enter node and Edge : ";
    cin>>n>>e;
    for(i=1;i<=e;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);///for undirected graph
    }
    cout<<"end of input"<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<"parent "<<i<<" = ";
        for(j=0;j<v[i].size();j++)
        cout<<v[i][j]<<" ";
        cout<<endl;
    }

    bfs(e,n);


}
