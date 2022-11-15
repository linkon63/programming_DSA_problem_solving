#include <stdio.h>

int main()
{
    int arr[6] = {7,5,8,6,2,3};
    int i, j, temp;
    int k = 0;
    while(k < 6)
    {
        for(i = 0 ; i < 6; i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        for(j = 0; j < 6; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");

        k++;

    }



    return 0;
}
