
#include <stdio.h>

int main()
{
    int i,size,x;
    int arr[200001];
    scanf("%d", &size);
    for(i= 1; i<size; i++)
    {
        scanf("%d", &x);
        arr[x] = 1;
    }
    for(i= 1; i <= size; i++)
    {
        if(arr[i] == 0){
            printf("%d",i);
            break;
        };
    }
    return 0;
}
