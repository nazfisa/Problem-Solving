#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,frame_size,flag=0,frame[100],fifo[100],stringSize;
    cin>>frame_size;
    cin>>stringSize;
    for(i=0;i<stringSize;i++)
    {
        if(i<frame_size)
        {
            cin>>frame[i];
            fifo[i]=frame[i];
            for(j=0;j<=i;j++)
            {
                cout<<fifo[j];
            }
            cout<<endl;
        }
        else if(i>=frame_size)
        {
            cin>>frame[i];
          for(k=i-frame_size;k<i;k++)
          {
              if(fifo[k]!=frame[i])
              {
                  flag++;
              }

          }
          cout<<flag;
          if(flag==frame_size)
          {
              fifo[i-frame_size]=frame[i];

          cout<<endl;
        }
    }
    }
}
