#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int count=1,l;
    cin >> s;
    l=s.length();
    for(int i=0;i<l;i++)
        {
        if(s[i]>='A' && s[i]<='Z')
            {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

