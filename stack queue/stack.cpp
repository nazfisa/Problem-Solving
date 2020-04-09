#include<bits/stdc++.h>
using namespace std;
int a[100];
int maxsize=5;
int i=-1;
void push(int data)
{
    i+=1;
    if (i==maxsize)
    cout<<"OVERFLOW"<<endl;
    else
    {
        a[i]=data;

    }
}
void pop()
{
    if(i==-1)
        cout<<"underflow"<<endl;
    else{
        i=i-1;

    }
}
void display()
{

    for(int j=0;j<=i;j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<endl;
}
int main()
{
    int data,n,j,k;

    for(j=0;j!=-1;j++)
    {
        cout<<"press 1 for push"<<endl;
        cout<<"press 2 for pop"<<endl;
        cout<<"press 3 for display"<<endl;
        cout<<"press -1 for exit"<<endl;

        cin>>n;
    switch(n)
    {
    case 1:
        cin>>data;
        push(data);
        break;
    case 2:
        pop();
        break;
    case 3:
        display();
        break;
    }}
}
