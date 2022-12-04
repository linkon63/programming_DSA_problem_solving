#include <stdio.h>

int main()
{
    int t;
    int k;
    scanf("%d",&t);
    if(1 <= t && t<=100)
    {
        while(t--)
        {
            scanf("%d",&k);
            for(int i = 1; ; i++)
            {
                if(i%3 == 0 || i%10 == 3)
                {
                    printf("Disable by 3 continue: %d \n",i);
                    continue;
                }
                else
                {
                    printf("Not Disable by 3 continue: %d \n",i);
                }
                printf("--k : %d ==  0\n",k);
                if(--k == 0)
                {
                    printf("--k : %d ==  0\n",k);
                    printf("i = %d\n",i);
                    break;
                }
            }
        }
    }
    return 0;
}
