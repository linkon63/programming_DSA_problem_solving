
#include <stdio.h>

int main()
{
    int arr[100],i;
    int n,k,temp,count = 0;
    scanf("%d %d", &n,&k);
    for(i = 0; i < n; i++)
        {
            scanf("%d",&arr[i]);
        }
   temp = arr[k-1];
  // printf("Temp:%d", temp);
    for(i = 0; i<n; i++)
    {
        if( arr[i] > 0 && arr[i] >= temp)
            count++;
       // printf("arr index:%d and value:%d \n",i,arr[i]);
    }
    printf("%d", count);

    return 0;
}

