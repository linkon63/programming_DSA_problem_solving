
#include <stdio.h>

int arrayIndexEvenOddCount(int arr[], int size)
{
    int i = 0;
    int sum = 0;
    int s = size+1;
    for(i = 1; i<s; i++)
    {
        scanf("%d",&arr[i]);
        if((i%2 == 0) &&  (arr[i]%2 == 0))
        {
            sum += (i+arr[i]);
        }
        else if((i%2 != 0) &&  (arr[i]%2 != 0))
        {
            sum += (i+arr[i]);
        }
    }
    return sum;
}

int main()
{
    int arr[1002];
    int t,i;
    scanf("%d",&t);
    int sumValue = arrayIndexEvenOddCount(arr,t);
    printf("%d", sumValue);


    return 0;
}
