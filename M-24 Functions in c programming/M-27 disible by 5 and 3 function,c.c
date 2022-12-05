#include <stdio.h>
int countDisibleByThreeAndFive(int arr[], int size)
{
    int i;
    int count = 0;
    for(i = 0; i<size; i++)
    {
        scanf("%d",&arr[i]);
        if(disibaleByThree(arr[i]) == 1 || disibaleByFive(arr[i]) == 1)
        {
            count++;
        }
    }
    return count;
}

int disibaleByThree(int num)
{
    if(num%3 == 0)
    {
        return 1;
    }

    return 0;
}

int disibaleByFive(int num)
{
    if(num%5 == 0)
    {
        return 1;
    }

    return 0;
}
int main()
{
    int arr[1000];
    int size;
    scanf("%d",&size);
    int sum = countDisibleByThreeAndFive(arr,size);
    if(sum > 0)
    {
        printf("%d\n", sum);
    }
    else
    {   sum = -1;
        printf("%d\n", sum);
    }
    return 0;
}
