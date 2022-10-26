// Write a C program to two positive integers N and M as input and print all numbers from 1 to N that are divisible
//by M.


#include <stdio.h>

int main()
{

    int n,m;
    scanf("%d %d",&n,&m);
    for(int i = 1; m*i <= n; i++)
    {
        printf("%d ",m*i);
    }


    return 0;
}
