#include <stdio.h>

int sum_of_digit(int a)
{
    int sum = 0;
    while(a>0)
    {
        sum+=(a%10);
        a/=10;
    }
    return sum;
}

int isPrime(int n){
    int i;
    for(i=2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }

    return 1;
}

int main()
{

    int i;
    int n;
    scanf("%d",&n);
    int sod = sum_of_digit(n);
    if(isPrime(sod) == 1)
    {
        printf("Linkon's num:%d \n",sod);
    }
    else
    {
        printf("Not Linkon's num:%d \n",sod);
    }
    return 0;
}
