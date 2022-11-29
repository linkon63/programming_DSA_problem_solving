
#include <stdio.h>

// perform the bubble sort
int bubbleSort(int array[], int size)
{

    // loop to access each array element
    for (int step = 0; step < size - 1; ++step)
    {

        // loop to compare array elements
        for (int i = 0; i < size - step - 1; ++i)
        {

            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[i] > array[i + 1])
            {

                // swapping occurs if elements
                // are not in the intended order
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    return array;
}

int main()
{

    int t;
    //1≤t≤6840
    scanf("%d",&t);
    if(1<=t && t<=6840)
    {
        while(t--)
        {
            int arr[3],i;
            for(i = 0; i<3; i++)
            {
                scanf("%d",&arr[i]);
            }
            int *sortArr = bubbleSort(arr,3);
            printf("%d\n",arr[1]);
        }
    }


}
/*
if(a < b)
{
    if(b < c)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d l l l \n",c);
    }
}
else if( b < a)
{
    if(a < c)
    {
        printf("%d\n",a);
    }
    else
    {
        printf("%d k k k \n",c);
    }
}else if( a>b && c < b){
     printf("%d -- \n",c);
}

return 0;
}
*/
