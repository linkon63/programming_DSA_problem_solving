

#include<stdio.h>
int main()
{
    int arr[5]= {213,10,325,507,100};
    int max=arr[0],i;
    for(i=1; i<5; i+=1)
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }
    printf("%d\n",max);
    return 0;
}
/*

#include<stdio.h>

int main()
{

    int arr[5],i,sum=0;
    for(i=1; i<=5; i+=1)
    {
        arr[i-1]=i-1;
    }
    for(i=0; i<5; i+=1)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

#include<stdio.h>

int main()
{

    int arr[5],i,sum=0;
    for(i=1; i<=5; i+=1)
    {
        arr[i-1]=i;
    }
    printf("%d\n",sum);
    for(i=1; i<=5; i+=1)
    {
        sum+=arr[i-1];
    }
    return 0;
}


#include<stdio.h>

int main()
{

    int arr[5],i;
    for(i=0; i<5; i+=1)
    {
        arr[i]=i;
    }
    arr[0]*=arr[0];

    printf("%d",arr[0]);
    return 0;
}

*/
