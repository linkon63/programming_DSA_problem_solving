#include <stdio.h>

int primeCheck(int n)
{
    int i, flag = 0;
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // flag is 0 for prime numbers
    if (flag == 0) return 0;
    // printf("%d is a prime number.", n);
    else return 1;
    //printf("%d is not a prime number.", n);

}



int main()
{
    int t,l,r;
    scanf("%d",&t);
    if(0<t && t<=20)
    {
        while(t--)
        {
            scanf("%d %d",&l,&r);
            if(1 <= l && l <=100 && 1 <=r && r<=100 && l < r)
            {
                int i;
                if(l == 1) printf("%d ",l);
                for(i = l; i<=r; i++)
                {
                    if(primeCheck(i) == 0) printf("%d ",i);
                }
            }

            printf("\n");
        }
    }


    return 0;
}
