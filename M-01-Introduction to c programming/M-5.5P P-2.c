// Write a C program to take one integer N as input and print from 1 to N.

#include <stdio.h>

int main()
{

    int n;
    scanf("%d",&n);
    if(n > 0)
    {
        for(int i = 1; i <= n; i++)
        {
            printf("%d ",i);
        }
    }
    else
    {
        int j = 1;
        while(j>=n){
             printf("%d ",j);
             j--;
        }
        /*  for(int i = 1; i <= n; i--)
          {
              printf("%d ",i);
          }
          */
    }
    return 0;
}
