#include <stdio.h>

int main()
{
    int t,i,j,k;
    long long int arr[100];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld",&arr[i]);
    }
    scanf("%d",&k);

    for(j=k+1; j<=t; j++){
        printf("%lld ",arr[j]);
    }

     for(j=1; j<=k; j++){
        printf("%lld ",arr[j]);
    }

    return 0;
}
