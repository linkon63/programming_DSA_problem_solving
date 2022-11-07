#include <stdio.h>


int main()
{

    // printf("hello missing num");
    unsigned long int t,sum,totalSum = 0,diff,arr[10];
    int i = 1;
    scanf("%lu\n",&t);
    if( 0 < t && t <= 100)
    {
        scanf("%lu",&sum);
        if(0 <= sum)
        {
            for(i; i <= 3; i++)
            {
                scanf("%lu", &arr[i]);
                if(arr[i] >=0 )
                {
                    totalSum += arr[i];
                }
                else
                {
                    return 0;
                }
            }
            diff = sum - totalSum;
            printf("%lu", diff);
        }
        else
        {
            return 0;
        }

    }
    else
    {
     return 0;
    }

    return 0;
}
