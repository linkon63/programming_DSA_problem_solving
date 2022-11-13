#include <stdio.h>


int isidentity(int a[][100], int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j && a[i][j] != 1)
                return 0;
            else if (i != j && a[i][j] != 0)
                return 0;
        }
    }
    return 1;
}

int main()
{

    int rows = 2, cols = 2, i, j;
    int arr[rows][cols];
    // scanf("%d %d",&rows,&cols);
    //  printf("Rows: %d  - Cols:%d", rows, cols);

    for(i = 0; i < rows; i++)
    {
        for(j = 0;  j < cols; j++)
        {
            printf("Arr : %d %d :",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Printing Array \n");

    for(i = 0; i < rows; i++)
    {
        for(j = 0;  j < cols; j++)
        {
            printf("%d\t",arr[i][j]);
            //scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    printf("Printing Identify Array \n");

    if (isidentity(arr, rows))
        printf("Yes");
    else
        printf("No");
    return 0;
}

/*
if(rows == cols)
{
    int identity = 0;
    for(i = 0; i < rows; i++)
    {

        for(j=0; j<cols; j++)
        {
            if(arr[i][j] == 0)
            {
                continue;
            }
        }
        //if(arr[i][i] !=0){
        //  continue;
        //}else{

        // printf("%d\t",arr[i][i]);
    }
    if(identity == 0)
    {
        printf("identity matrix");
    }
    else
    {
        printf("not  identity matrix");
    }
}
else
{
    printf("not identity matrix");
}
*/
//return 0;
//}
