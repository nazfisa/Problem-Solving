#include<bits/stdc++.h>
using namespace std;

int main() {
    int x1,x2,v1,v2;
    cin>>x1>>x2>>v1>>v2;

     if (x1 == x2 && v1 == v2) {
        cout<<"YES"<<endl;
    }
    else if ( x1 == x2 && v1 > v2) {
        cout<<"NO"<<endl;
    }
    else if (x1 <= x2 && v1 <= v2) {
       cout<<"NO"<<endl;
    }
    else {
        if ((x2 - x1) % (v1 - v2) == 0)  {
           cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
}
