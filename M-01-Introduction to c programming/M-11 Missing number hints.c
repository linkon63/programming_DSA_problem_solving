
int main()
{
    long long int sum,a,b,c,n,t;
    scanf("%lld",&t);
    while(t > 0)
    {
        scanf("%lld %lld %lld %lld", &sum,&a,&b,&c);
        sum = sum - (a+b+c);
        t--;
    }
    printf("%lld", sum);
    return 0;
}
/*
#include <stdio.h>

int main()
{
    int i, j, t;
    long long int sum,a,b,c,arr[100], missingNum=0;
    scanf("%d",&t);
    for(i = 0; i<t; i++)
    {
        for(j = 0; j<4; j++){
            scanf("%lld", &arr[i]);
            missingNum += arr[i];
        }
       // missingNum = sum - (a+b+c);
    }
    printf("%lld \n", missingNum - arr[0]);
    return 0;
}

*/
