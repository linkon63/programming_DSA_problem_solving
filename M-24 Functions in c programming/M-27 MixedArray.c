#include <stdio.h>

int mixedArray(int *arr[], int size)
{
    int i;
    int primeNumbers = 0;
    int sumOfEvenNumbers = 0;
    int count = 0;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        // checking prime numbers
        int flag = checkPrimeNumber(arr[i]);
        if (flag == 0)
        {
            primeNumbers++;
        }
        int number = arr[i];
        // avg of even numbers
        if (number % 2 == 0)
        {
            count++;
            sumOfEvenNumbers += number;
        }
    }

    float evenAvg = sumOfEvenNumbers/count;
    printf("Prime numbers:%d\n", primeNumbers);
    printf("Average of all even integers:%.2f\n", evenAvg);

    return 0;
}

int checkPrimeNumber(int n)
{
    int i, m = 0, flag = 0;
    m = n / 2;
    for (i = 2; i <= m; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            return flag;
        }
    }
    return flag;
}


int main()
{
    int n;
    int arr[] = {};
    scanf("%d", &n);
    mixedArray(&arr, n);
    return 0;
}



//int arrOp(int *arr[], int size)
//{
//    int i;
//
//    for(i = 0; i < size; i++)
//    {
//        printf("%d ",arr[i]);
//    }
//    return 0;
//}
