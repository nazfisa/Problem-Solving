#include <bits/stdc++.h>

using namespace std;

int main()
{
    int al[3],bob[3];
    int alic=0,bo=0;
    for(int i=0; i<3; i++)
    {
        cin>>al[i];
    }
    for(int i=0; i<3; i++)
    {
        cin>>bob[i];
    }

    for(int i=0; i<3; i++)
    {
        if(al[i]>bob[i])
        {
            alic++;
        }
    }
    for(int i=0; i<3; i++)
    {
        if(al[i]<bob[i])
        {
            bo++;
        }
    }
    cout<<alic<<" "<<bo;
    return 0;
}
