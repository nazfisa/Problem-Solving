#include<bits/stdc++.h>
using namespace std;
int q[10],front=0,rare=0;
int size=5;
int insert(int data)
{
    if(rare==size)
    {
        cout<<"overflow\n";
    }
    else
    {
        q[rare]=data;

    }
    rare+=1;

}
int dq()
{
    if(front==rare)
    {
        cout<<"underflow\n";
    }
    else
    {
        front+=1;

    }
}
int display()
{
    for(int i=front; i<rare; i++)
    {
        cout<<q[i]<<" ";
    }

}
int cq_insert(int data)
{
    int next_rare=(rare+1)%size;
    if(rare==size)
    {
        cout<<"overflow\n";
    }
    else
    {
        q[rare]=data;

    }
    rare=next_rare;

}
int cq_dq()
{
    if(front==rare)
    {
        cout<<"underflow\n";
    }
    else
    {
        front=(front+1)%size;

    }
}
int cq_display()
{
    for(int i=front; i!=rare; i=(i+1)%size)
    {
        cout<<q[i]<<" ";
    }

}
int main()
{
    int i,n;
    int a;
     cout<<"press 1 for insert"<<endl;
        cout<<"press 2 for dq"<<endl;
        cout<<"press 3 for display"<<endl;
        cout<<"press 4 for circular q insert"<<endl;
        cout<<"press 5 for circular q dq"<<endl;
        cout<<"press 6 for circular q display"<<endl;
        cout<<"press -1 for exit"<<endl;
    for( i=0; i!=-1; i++)
    {
        cin>>n;
        switch(n)
        {
        case 1:
        {

            cin>>a;
            insert(a);
            break;
        }

        case 2:
        {
            dq();
        }
        break;
        case 3:
        {
            display();

            break;
        }
        case 4:
        {

            cin>>a;
            cq_insert(a);
            break;
        }

        case 5:
        {
            cq_dq();
        }
        break;
        case 6:
        {
            cq_display();

            break;
        }
        }
    }}
