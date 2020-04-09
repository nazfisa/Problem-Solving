/*Program to Matrices Chain Multiplication*/
#include<stdio.h>

int m[10][10],s[10][10],p[10];
void Print_Optimal_Parens(int i,int j);
void Matrix_Chain_Order(int n);

int main()
{
    int len,r;
    printf("Enter no of matrics ");
    scanf("%d",&len);
    for(r=0; r<=len; r++)
    {
        printf("P%d= ",r);
        scanf("%d",&p[r]);
    }
    Matrix_Chain_Order(len);
    Print_Optimal_Parens(1,len);
    return 0;
}

void Print_Optimal_Parens(int i,int j)
{
    if(i==j)
        printf("A%d",i);

    else
    {
        printf("(");
        Print_Optimal_Parens(i,s[i][j]);
        Print_Optimal_Parens(s[i][j]+1,j);
        printf(")");
    }
}

void Matrix_Chain_Order(int n)
{
    int i,j,L,k,q;
    for(i=1; i<=n; i++)
        m[i][i]=0;
    for(L=2; L<=n; L++)
    {
        for(i=1; i<=n-L+1; i++)
        {
            j=i+L-1;
           m[i][j]=99999;
            for(k=i; k<=j-1; k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<m[i][j])
                {
                    m[i][j]=q;
                    s[i][j]=k;
                }


            }
        }
    }

}

