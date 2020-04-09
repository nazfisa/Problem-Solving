#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t1,t2,f,a,n,i;
    int arr[10];
    float avrg,sum;
    cin>>n;
    while(n--)
    {
        i=1;
        cin>>t1>>t2>>f>>a;
        cin>>arr[0]>>arr[1]>>arr[2];
        sum=0.0;
        sort(arr,arr+3);
        avrg= (arr[0]+arr[1])/2;
        sum=t1+t2+f+a+avrg;
        if(sum>=90)
        {
          cout<<"Case "<<i<<": A"<<endl;
        }
        else if(sum>=80)
        {
            cout<<"Case "<<i<<": B"<<endl;
        }
        else if(sum>=70)
        {
            cout<<"Case "<<i<<": C"<<endl;
        }
        else if(sum>=60)
        {
            cout<<"Case "<<i<<": D"<<endl;
        }
        else
        {
            cout<<"Case "<<i<<": F"<<endl;
        }

        i++;

    }
}
