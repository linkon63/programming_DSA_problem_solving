#include <stdio.h>

int main()
{
    int rows = 0, cols = 0,i,j,n;
    int arr[100][100];


    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("Rows: %d Cols:%d :",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d \t",arr[i][j]);
            //scanf("%d",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    int flag = 1, x = arr[0][0];
    for(i = 0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i == j)
            {
                if(arr[i][j] != x)
                {
                    flag = 0;
                }
                continue;
            }
            if(arr[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if(flag == 1)
    {
        printf("scalar");
        // identity matrix mean diagonal will only "1"
    }
    else
    {
        printf("not scalar");
    }


    return 0;
}
