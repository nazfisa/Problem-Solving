#include <stdio.h>

int main()
{
    int year;

    scanf("%d",&year);

    if(year%4 == 0)
    {
        if( year%100 == 0)
        {

            if ( year%400 == 0)
                printf("12.09.2017");
            else
                printf("13.09.2017");
        }
        else
            printf("12.09.2017" );
    }
    else
        printf("13.09.2017");

    return 0;
}

