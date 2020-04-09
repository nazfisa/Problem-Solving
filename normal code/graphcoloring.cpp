#include<bits/stdc++.h>
#define MAX 10
using namespace std;
int G[MAX][MAX],edges;
int color_tab[MAX];


void Gen_col_value(int k,int n)
{
    int j,m;
    int a,b;
    while(1)
    {
        a=color_tab[k]+1;
        b=n;
        color_tab[k]=a%b;//next highest color
        if(color_tab[k]==0) return;//all colors have been used
        for(j=1; j<=n; j++)
        {
//check if this color is distinct from adjacent colors
            if(G[k][j]&&color_tab[k]==color_tab[j])
                break;
        }
        if(j==n+1)return;
    }
}
void Gr_coloring(int k,int n)
{
    Gen_col_value(k,n);
    if(color_tab[k]==0)return;//No new color available
    if(k==n)return;//at most m colors have been
    else Gr_coloring(k+1,n);//used to color the n vertices
}
int get_data()
{
    int m,v1,v2,i,n;
    printf("\n Enter the number of nodes");
    scanf("%d",&n);
    printf("\n Enter the number of edges");
    scanf("%d",&edges);
    printf("\n Enter the edges of the graph");
    printf("By giving values of V1 and V2\n");
    for(i=1; i<=edges; i++)
    {
        scanf("%d%d",&v1,&v2);
        G[v1][v2]=G[v2][v1]=1;
    }
    return n;
}
void display(int n)
{
    int i;
    printf("\nthe vertices to be colored as....\n");
    for(i=1; i<=n; i++)
        printf("\nV%d:=%d",i,color_tab[i]);
}
int main()
{
    int i,j,n;
    int get_data();
    for(i=0; i<MAX; i++)
    {
        for(j=0; j<MAX; j++)
        {
            G[i][j]=0;
            color_tab[i]=0;
        }
    }
    n=get_data();
    Gr_coloring(1,n);
    display(n);
}

