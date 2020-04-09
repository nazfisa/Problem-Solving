///accepted
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     long long int i,j,t,temp,l=1;
     int a[3];
     cin>>t;
     while(t--)
     {
     for(i=0;i<3;i++)
     {
         cin>>a[i];
     }
     for(i=0;i<3;i++)
     {
         for(j=1;j<=3-i-1;j++)
         {
             if(a[j]>a[j-1])
             {
                 temp=a[j];
                 a[j]=a[j-1];
                 a[j-1]=temp;
             }

         }
     }
      cout<<"Case "<<l<<": "<<a[1]<<endl;
      l++;
     }
 }
