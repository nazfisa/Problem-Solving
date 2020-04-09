#include<bits/stdc++.h>

using namespace std;


int main()
{
    long long int a;
    long long int b;
    long long int c;
    long long int d;
    long long int e;
    long long int s1,s2,s3,s4,s5;
    cin >> a >> b >> c >> d >> e;
    s1=b+c+d+e;
    s2=a+c+d+e;
    s3=a+b+d+e;
    s4=a+b+c+e;
    s5=a+b+c+d;
    if(s1<s2 && s1<s3 && s1<s4 && s1<s5)
        cout<<s1<<" ";
    if(s2<s1 && s2<s3 && s2<s4 && s2<s5)
        cout<<s2<<" ";
    if(s3<s2 && s3<s1 && s3<s4 && s3<s5)
        cout<<s3<<" ";
    if(s4<s2 && s4<s3 && s4<s1 && s4<s5)
        cout<<s4<<" ";
    if(s5<s2 && s5<s3 && s5<s4 && s5<s1)
        cout<<s5<<" ";
    if(s1>s2 && s1>s3 && s1>s4 && s1>s5)
        cout<<s1<<" ";
    if(s2>s1 && s2>s3 && s2>s4 && s2>s5)
        cout<<s2<<" ";
    if(s3>s2 && s3>s1 && s3>s4 && s3>s5)
        cout<<s3<<" ";
    if(s4>s2 && s4>s3 && s4>s1 && s4>s5)
        cout<<s4<<" ";
    if(s5>s2 && s5>s3 && s5>s4 && s5>s1)
        cout<<s5<<" ";
    return 0;
}

