#include<bits/stdc++.h>
using namespace std;
long long int a[1000],b[1000];
int main()
{
    long long int i,count=0,count1=0,z,j,k,t,n,l,m;
    cin>>t;
    while(t--){

        cin>>n;
        k=n;
        for(i=0;k>0;i++)
        {
        k=k/2;
        l=k%2;

       if(l==1)
       {
           count++;

       }
        }
        cout<<count<<endl;
   ///     for(j=n+1;;j++)
///{
j=10;
z=j;
           for(i=0;j>0;i++)
        {

        j=j/2;
        m=j%2;
       if(m==1)
       {count1++;}
        }

            cout<<count1<<endl;
            if(count==count1)
            {
                cout<<"asif"<<z<<" ";

                break;
            }

count1=0;
///cout<<z;
    ///}
cout<<z;
    count=0;
    count1=0;
}
}

