#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k=0,l,cnt,sum;
    cin>>n;
    while(k<n)
    {
        cnt=0;
        sum=0;
        cin>>i>>j;
        if(i%2==0)
        {
            for(l=i+1;;l++)
            {
                if(cnt==j)
                {
                    break;
                }
                else if(l%2==1)
                {
                    sum+=l;
                    cnt++;
                }
            }
        }
        else if(i%2==1)
        {
            for(l=i;;l++)
            {
                if(cnt==j)
                {
                    break;
                }
                else if(l%2==1)
                {
                    sum+=l;
                    cnt++;
                }
            }
        }

        cout<<sum<<endl;
        k++;
    }
}
