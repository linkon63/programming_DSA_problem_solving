#include<stdio.h>
int foo(int n)
{
    if(n==0)
        return 0;
    return foo(n-1)+n;
}
int main()
{
    printf("%d\n",foo(6));
    return 0;
}

//#include<stdio.h>
//void display(int n)
//{
//    if(n>0)
//    {
//        display(n-1);
//        printf("%d ",n);
//    }
//}
//int main()
//{
//    int x=5;
//    display(x);
//    return 0;
//}
//#include<stdio.h>
//void display(int n)
//{
//    if(n>0)
//    {
//        printf("%d ",n);
//        display(n-1);
//    }
//}
//
//int main()
//{
//    int x=5;
//    display(x);
//    return 0;
//}
//
//#include <stdio.h>
//
//int solve(int arr[], int n)
//{
//    if(n == 0)return 0;
//    int sum = solve(arr+1,n-1);
//    return sum+arr[0]; // *(arr)
//}
//
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    int i,arr[n];
//    for(i=0; i<n; i++){
//        scanf("%d",&arr[i]);
//    }
//    int s = solve(arr,n);
//    printf("%d \n",s);
//
////    for(i=0; i<n; i++){
////        printf("%d \n",arr[i]);
////    }
//
////    int sum = solve(1,n);
////    printf("Sum of the numbers:%d\n",sum);
//    return 0;
//}
//
