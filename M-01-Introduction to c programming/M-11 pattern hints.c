#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        j = 1;
        int temp = i;
        while(j <= temp)
        {
            if(j>0)
            {
                printf("%d ",temp);
            }
            temp--;
        }
        printf("\n");
    }
    return 0;
}
