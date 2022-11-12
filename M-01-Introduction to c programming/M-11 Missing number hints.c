#include <stdio.h>
int main()
{
    int n,s,a,b,sub,c,i,j;
    scanf("%d",&n);
    if(n>0 && n <= 100)
    {
        for( i= 0; i<n; i++)
        {

            for( j = 0; j<1; j++)
            {
                scanf("%d %d %d %d", &s,&a,&b,&c);
                sub = s - (a+b+c);
                printf("%d\n", sub);
            }
        }
    }
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
