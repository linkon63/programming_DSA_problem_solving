
#include <stdio.h>

int main()
{
    int i,size = 5;
    int arr[size];
    for(i= 0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i= 0; i<size; i++)
    {
        printf("\n %d th position value is: %d",i, &arr[i]);
    }
    return 0;
}
