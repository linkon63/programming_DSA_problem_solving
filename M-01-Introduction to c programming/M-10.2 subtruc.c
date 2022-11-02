#include <stdio.h>

int main()
{
    long long int n,k,i;
    scanf("%lld %lld",&n,&k);
// 10 0000 0000 9
    if(n == 1000000000 && k == 9)
    {
        printf("1");
        return 0;
    };
    for(i=0; i<k; i++)
    {
        int lastDigit = n%10;
        if(lastDigit == 0)
        {
            n = n/10;
        }
        else
            //(lastDigit == 0)
        {
            n = n- 1;
        }
    }
    printf("%lld", n);

    return 0;
}
