#include <stdio.h>


int main()
{

    int n = 0,k, arr[100], count = 0;
    scanf("%d %d",&n,&k);
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(k > arr[i])
        {
            // printf("Small: %d \n", arr[i]);
            count++;
        }
    }
    printf("%d",count);
    return 0;
}

