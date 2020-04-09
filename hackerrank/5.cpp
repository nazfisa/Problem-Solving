#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,j;
    cin>>n;
    p=n-1;
    for(int k=0; k<n; k++)
{

    for(i=1; i<=n; i++)
        {
            if(i<=p)

            {

                for( j=1; j<=p; j++)
                {
                    cout<<" ";
                    i++;

                }
            }

            cout<<"#";

        }
        p--;

    cout<<endl;
}
}
