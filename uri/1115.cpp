#include <stdio.h>

int main()
{
    int x;
    int y;

    while(1)
    {
        scanf("%d", &x);
        scanf("%d", &y);
        if(x > 0 && y > 0){
            printf("primeiro\n");
        }
        if(x < 0 && y > 0){
            printf("segundo\n");
        }
        if(x < 0 && y < 0){
            printf("terceiro\n");
        }
        if(x > 0 && y < 0){
            printf("quarto\n");
        }
        if(x==0 || y==0)
            break;


    }

    return 0;
}

