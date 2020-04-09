#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=1,t,k,n,m,low=0,high=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>k;


         if(n==1)
            {
                high=0;
                low=0;
            }
            else{

        for(i=1;i<n;i++)
        {
            cin>>m;
            if(k>m)
                low++;
            else if(k<m)
                high++;
                k=m;
        }}
        cout<<"Case "<<j<<": "<<high<<" "<<low<<endl;
        j++;
        high=0;
        low=0;
    }
}
