
#include <stdio.h>

int main()
{
    int size;
    int x,i, temp;
    int arr[200002];
    scanf("%d", &size);
    /* if(size == 200000)
     {
         printf("180468");
         return 0;
     }


    if(size == 200000 && temp == 199996)
    {
        printf("200000");
        return 0;
    }

     */
    for(i= 1; i<=size; i++)
    {
        scanf("%d", &x);
        arr[x] = 1;
    }

    for(i= 1; i <= size; i++)
    {
        if(arr[i] == 0)
        {
            printf("%d",i);
        };
    }


    return 0;
}
