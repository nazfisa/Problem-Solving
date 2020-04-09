#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n;
    vector<int >v[5];
    for(i=0;i<2;i++)
    {
        printf("How many elements do you want to insert int row no %d of 2d vector?\n",i);
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            scanf("%d",&n);
            v[i].push_back(n);
        }
    }
    for(i=0;i<2;i++)
    {
        printf("Vector row no %d= ",i);
        for(j=0;j<v[i].size();j++)
        {
            printf("%d",v[i][j]);
        }
        printf("\n");
    }
}
