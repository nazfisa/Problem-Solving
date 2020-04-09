#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, divisor,divident,l,j,cnt;
    int arr[10000];
    while(1)
    {
        cin>>l;
        j=0;
        cnt=0;
        if(l==0)break;
        while(l>0)
        {

            divisor=l%2;
            l=l/2;
            arr[j]=divisor;
            j++;


        }
        cout<<"The parity of ";
        for(i=j-1;i>=0;i--)
        {
           cout<<arr[i];
           if(arr[i]==1)
            cnt++;

        }
        cout<<" is "<<cnt<<" (mod 2)."<<endl;
    }

}
