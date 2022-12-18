#include <stdio.h>

int solve(int arr[], int i, int n)
{
    if(i==n)return 0;
    int sum = solve(arr,i+1,n);
    return sum+arr[i];
}

int main()
{
    int n;
    scanf("%d",&n);
    int i,arr[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int s = solve(arr,0,n);
        printf("%d \n",s);

//    for(i=0; i<n; i++){
//        printf("%d \n",arr[i]);
//    }

//    int sum = solve(1,n);
//    printf("Sum of the numbers:%d\n",sum);
    return 0;
}

