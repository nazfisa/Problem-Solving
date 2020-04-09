#include<bits/stdc++.h>>
using namespace std;
int main()
{
    double x,y;
    int z=0;
    while(1){
        cin>>x;
        if(x<0 || x>10)
        {
            cout << "nota invalida\n";
        }
        else if(z==0){
            y=x;
            z==1;
        }
        else{
            printf("media = %.2f\n", (y+x)/2);
            break;
        }
    }
}
