

#include <stdio.h>

int main()
{
    long long int arr[200003];
    int i;
    long long int n,count = 0;
    scanf("%lld", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    // temp = arr[k-1];
    // printf("Temp:%d", temp);
    for(i = 1; i<n; i++)
    {
        if(arr[i] < arr[i-1] )
        {
            count += arr[i - 1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    printf("%lld", count);

    return 0;
}

