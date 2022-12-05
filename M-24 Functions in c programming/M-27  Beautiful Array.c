#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int arrIn(int *arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    return 0;
}


int checkBeatifulArray(int *arr[], int size)
{
    int i;
    float uSize = size;
    float arrSize = uSize / 2;
    //printf("Array Size:%f \n",arrSize);
    int half = ceil(arrSize);
    //printf("Array half:%d \n",half);

    int countSeven = 0;
    for(i = 0; i < size; i++)
    {
        int num = arr[i];
        //printf("Printing number arr[%d]: %d \n",i,num);
        while(num > 0)
        {
            int lastDigit = num%10;
            if(lastDigit == 7)
            {
               // printf("Seven is there and break while loop: %d \n",lastDigit);
                countSeven++;
                break;
            }
            num /=10;
        }

    }

    if( countSeven >= half)
    {
        printf("Beautiful\n");
    }
    else
    {
        printf("Ugly\n");
    }
    //printf("Printing half : %d \n",half);
    return 0;
}
int main()
{
    int arr[] = {};
    int size = 5;

    scanf("%d",&size);
    arrIn(arr,size);
    checkBeatifulArray(arr,size);

    return 0;
}


//int arrOp(int *arr[100], int size)
//{
//    int i;
//
//    for(i = 0; i < size; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}
