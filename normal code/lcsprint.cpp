#include<bits/stdc++.h>
using namespace std;

int i,j,m,n,a,c[2000][2000];
char x[1500],y[1500],b[2000][2000];
void print_lcs(int i,int j)
{
    if(i==0 || j==0)
        return;
    if(b[i][j]=='c')
    {
        print_lcs(i-1,j-1);
        printf(" %c",x[i-1]);
    }
    else if(b[i][j]=='u')
        print_lcs(i-1,j);
    else
        print_lcs(i,j-1);
}
void lcs_length(void)
{
    m=strlen(x);
    n=strlen(y);
    for(i=0; i<=20; i++)
        c[i][0]=0;
    for(i=0; i<=20; i++)
        c[0][i]=0;
    for(i=1; i<=20; i++)
        for(j=1; j<=20; j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='c';
            }
            else
            {
                if(c[i-1][j]>=c[i][j-1])
                {
                    c[i][j]=c[i-1][j];
                    b[i][j]='u';
                }
                else
                {
                    c[i][j]=c[i][j-1];
                    b[i][j]='l';
                }
            }
        }

    print_lcs(m,n);
}
int main()
{
    // char x[1500],y[1500],b[2000][2000];
    gets(x);
    gets(y);
    printf("\nlongest common subsequence is : ");
    lcs_length();
    //getch();
}
