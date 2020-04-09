#include<bits/stdc++.h>
using namespace std;
int main()
{

        char s[10001];
        int len,sum,l;
        while(1)
        {
            gets(s);
            if(strcmp(s,"0")==0)break;
             len=strlen(s),sum=0;
             l=len;
            for(int i=0; i<l; i++)
            {
                sum+=((s[i]-'0')*(pow(2,len)-1));

                len--;
            }
            cout<<sum<<endl;
        }


}
