/* C program to find largest among
   two numbers using ternary operator
*/
#include<stdio.h>
void main()
{
  // Variable declaration
   int a,b,larg;
   printf("Enter two number\n");
   scanf("%d %d",&a,&b);

  // Largest among a and b
   larg = a>b?a:b;

 // Print the largest number
   printf("largest number is : %d",larg);

}
