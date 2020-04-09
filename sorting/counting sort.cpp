#include <bits/stdc++.h>
using namespace std;

int main()
{

    int cs , t;
    string str;
    for( cs = 1 ; cs <= t ; cs++ )
    {
        int freq[30] = {0};
        cin >> str ;
        int cnt = 0 ;
        int sz = str.size();
        for( int i = 0 ; i < sz ; i++ )
        {
           freq[str[i]-'a']++;
        }
        int ans = freq[0];
        for( int i = 1 ; i < 26 ; i++ )
        {
            ans = min( ans , freq[i]);
        }
        printf("Case %d: %d\n",cs,ans);
    }

    return 0;
}
