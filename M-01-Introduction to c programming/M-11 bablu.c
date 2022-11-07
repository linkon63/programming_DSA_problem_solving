#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i,j,k,t, count,value;
    int arr[100];
    char n[10] = "";
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%s",n);
        arr[i] = atoi(n);
    }

    printf("\n");
    for(j=0; j<t; j++)
    {
        value = arr[j];
        count = arr[j];
        if(value == 0)
        {
            count = 160;
        }
        else if(value == 100)
        {
            count = 0;
        }
        else if(value > 0 && value <= 60)
        {
            count = (60 - value) + (20*2) + (20*3);
        }
        else if( value > 60 && value <= 80)
        {
            count = ((80 - value) * 2) + (20*3);
        }
        else if( value > 80 && value <= 100)
        {
            count = ((100 - value) * 3);
        }

        printf("%d minutes\n", count);

    }


    return 0;
}
