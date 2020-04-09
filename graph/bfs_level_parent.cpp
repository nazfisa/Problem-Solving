#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vertices,edges,u,v,source,k,i,j;
    cin>>vertices>>edges;
    vector< int >adjacent_list[vertices+1];
    for(i=1;i<=edges;i++)
    {
        cin>>u>>v;
        adjacent_list[u].push_back(v);
        adjacent_list[v].push_back(u);
    }
    for(i=1;i<=vertices;i++)
    {
        cout<<i<<" : ";

        for(j=0;j<adjacent_list[i].size();j++)
        {
            cout<<adjacent_list[i][j]<<" ";
        }

        cout<<endl;
    }
    cin>>source;
    vector <int> parent(100,0);
    vector <int> level(100,-1);
    level[source]=0;
    parent[source]=0;
    queue <int> vertex;
    vertex.push(source);
    while(!vertex.empty())
    {
        u=vertex.front();
        vertex.pop();
        v=0;
         while(v!=adjacent_list[u].size())
        {
            if(level[adjacent_list[u][v]]==-1){
                level[adjacent_list[u][v]]=level[u]+1;
                parent[adjacent_list[u][v]]=u;
                vertex.push(adjacent_list[u][v]);
            }
            v++;
        }
    }
    for(i=1;i<=vertices;i++)
    {
        cout<<i<<"-> level : "<<level[i]<<" parent: "<<parent[i]<<endl;
    }

}
