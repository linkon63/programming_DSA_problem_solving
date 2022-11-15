#include <stdio.h>

int main()
{
    int arr[100] = {7,8,9,9,1,2,3,6,4,5};
    int i,j;

    int min, mIndex;
    int sortedArr[100];
    for(j = 0; j < 10; j++)
    {
        min = arr[0];
        mIndex = 0;
        for(i = 0; i < 10; i++)
        {

            if(arr[i] < min)
            {
                min = arr[i];
                mIndex = i;
            }
        }
        sortedArr[j] = min;
        arr[mIndex] = 999;

        for(i = 0; i < 10; i++)
        {
            printf("%d ,",sortedArr[i]);
        }

        printf("\n");

    }

    for(i = 0; i < 10; i++)
    {
        printf("%d \t",sortedArr[i]);
    }

    return 0;
}
