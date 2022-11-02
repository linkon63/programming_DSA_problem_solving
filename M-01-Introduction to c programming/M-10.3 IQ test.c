#include <stdio.h>

int main()
{
    int i,oc,ec, arr[105],ans,n;
    scanf("%d",&n);
    for(i = 1; i<=n; i++)
    {
        //   printf("\nLoop %d",i);
        scanf("%d",&arr[i]);
        if(arr[i]%2 == 0)
            ec++;
        else
            oc++;
    }
    if(ec == 1)
    {
        for(i=1; i<=n; i++)
        {
            if(arr[i] % 2 == 0)
            {
                ans = i;
                      break;
            }
        }
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            if(arr[i] % 2 != 0)
            {
                ans = i;
                      break;
            }
        }
    }
    /*
        for(i = 1; i<=n; i++)
        {
            if(arr[i]%2 == 0)
                ec++;
            else
                oc++;
        }
    */

    printf("%d",ans);
     // printf("OC:%d  EC:%d",oc,ec);

    return 0;
}

