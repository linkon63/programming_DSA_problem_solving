
#include <stdio.h>

int main()
{
    int i,size = 5;
    int arr[size];
    // int m = arr[0];
    int e_c = 0, o_c = 0;
    for(i= 0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i= 0; i<size; i++)
    {
        if(arr[i] %2 == 0) e_c++;
        if(arr[i] %2 != 0) o_c++;
    }
        printf("The odd value is:%d",o_c);
        printf("\nThe even value is:%d",e_c);
    return 0;
}
