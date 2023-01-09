#include<stdio.h>
//int foo(int n)
//{
//    if(n==0)
//        return 0;
//    return foo(n-1)+n;
//}
int main()
{
//    printf("%d\n",foo(6));

    int i;
    int n,arr[100],sum=0;
    scanf("%d",&n);
    for(i = 0; i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
        printf("Sum is :%d \n",sum);
    return 0;
}
