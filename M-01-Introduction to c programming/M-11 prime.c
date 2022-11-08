#include <stdio.h>

int main()
{
    int t,i,j,k;
    long long int arr[100];
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(j=0; j<t; j++)
    {
        int n = arr[j];
        int flag = 0;

        // 0 and 1 are not prime numbers
        // change flag to 1 for non-prime number
        if (n == 0 || n == 1)
            flag = 1;

        for (i = 2; i <= n / 2; ++i)
        {

            // if n is divisible by i, then n is not prime
            // change flag to 1 for non-prime number
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        // flag is 0 for prime numbers
        if (flag == 0)
            printf("Yes\n");
        else
            printf("No\n");


    }

    return 0;
}
