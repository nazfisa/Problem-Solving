#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int i,l,w=0;
    while(1)
    {
        gets(a);
        l=strlen(a);
        w=1;
        for(i=0;i<l;i++)
        {
            if(a[i]==' ')
            {
                w++;
            }
            else
            {
                if(a[i]=='.')
                {
                    i=i+1;
                    if(a[i]=='.')
                    {
                        i=i+1;
                        if(a[i]=='.')
                        {
                            i=i+1;
                            if(a[i]==' ')
                            {
                                w;
                            }
                        }
                    }
                }
            }
        }
        cout<<w<<endl;
    }

}
