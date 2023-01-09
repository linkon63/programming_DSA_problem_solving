#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)
        printf("^");
else
{
    for(int i = 1 ; i<=n; i++)
    {
        for(int j = i; j<=n; j++)
        {
            if(j!=n)
            printf(" ");
        }
        if(i%2!=0)
        {
            for(int j = 1; j<=(2*i - 1); j++)
            {
                printf("^");
            }
            printf("\n");
        }

        else
        {
            for(int j = 1; j<=(2*i - 1); j++)
            {
                printf("*");
            }
             printf("\n");
        }

    }
    return 0;
}
    for(int i = 2 ; i<=n; i++)
    {
        for(int j = i; j<=n; j++)
        {
            printf(" ");
        }
        if(i%2!=0)
        {
            for(int j = 1; j<=(2*i - 1); j++)
            {
                printf("^");
            }
            printf("\n");
        }

        else
        {
            for(int j = 1; j<=(2*i - 1); j++)
            {
                printf("*");
            }
             printf("\n");
        }

    }
    return 0;
}
