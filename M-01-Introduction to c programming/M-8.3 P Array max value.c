#include <stdio.h>

int main()
{
    int i,size = 5;
    int arr[size];
    int m = arr[0];
    for(i= 0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i= 0; i<size; i++)
    {
        if(arr[i] < m) m = arr[i];
    }
        printf("The minimum value is:%d",m);
    return 0;
}
