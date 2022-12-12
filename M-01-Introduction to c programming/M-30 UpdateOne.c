/****write a menu-driven c program  to perform the following task:
=> display your name, id and phone number by creating a function info().
=> display menu by creating a function menu().
case 1: find the square of a number by creating a function squ().
case 2: find the area of a circle by creating a function circle().
case 3: display 10,9,8,7.....3,2,1 using for loop by creating a function loop()
case 4: check odd or even using if else by creating a function odd().
case 5: find the largest among three number by creating a function larg().
case 6: add two numbers by creating a function named add().
case 7: substract a number from another number by creating a function sub().
case 8: multiplied a number from another by creating a function multi().
case 9: divided a number from another by creating a function div().
case 10: modulas a number from another by creating a function mod().
case 11: display mid term marks by creating a function mark().
case 12: check negative or positive using if else by creating a function neg().
case 13: display 2,4,7,9,5 1st & 4th element of the given array by creating function srabon().
case 14: display 2,4,7,9,5,6 all the elements using for loop by creating function shahadat().
case 15: how to take input form user and initialization them array. Finaly display them by creating a function motree().
case 16: display 1-10 array total input data by creating function data().
case 17: sumetion of array elements by creating a function sume().
case 18: display 1-10 array elements output when i=0, s=? by creating a function out().
case 19: substarction of array elements by creating a function sbus().
case 20: multiplied of array elements by creating a function multip().
case 0:exit the program.
default: display a massage "invalid choice, please try again"

****/


#include <stdio.h>
void info()
{
    printf("\t\t\t\t\t\t\tAriful Islam\n");
    printf("\t\t\t\t\t\t\tCSE2202026160\n");
    printf("\t\t\t\t\t\t\t01794-999601\n");
    printf("\t\t\t\t\t\t\t~~~~~~~~~~~~~\n\n");
};

void menu()
{
    printf("1. find the square of a number by creating a function squ().\n");
    printf("2. find the area of a circle by creating a function circle().\n");
    printf("3. display 10,9,8,7.....3,2,1 using for loop by creating a function loop()\n");
    printf("4. check odd or even using if else by creating a function odd()\n");
    printf("5. find the largest among three number by creating a function larg()\n");
    printf("6. add two numbers by creating a function named add()\n");
    printf("7. substract a number from another number by creating a function sub()\n");
    printf("8. multiplied a number from another by creating a function mult()\n");
    printf("9. divided a number from another by creating a function div()\n");
    printf("10. modulas a number from another by creating a function mod()\n");
    printf("11. display mid term marks by creating a function mark()\n");
    printf("12. check negative or positive using if else by creating a function neg().\n");
    printf("13. display 2,4,7,9,5 1st & 4th element of the given array by creating function srabon().\n");
    printf("14. display 2,4,7,9,5,6 all the elements using for loop by creating function shahadat().\n");
    printf("15. how to take input form user and initialization them array. Finaly display them by creating a function motree().\n");
    printf("16. display 1-10 array total input data by creating function data().\n");
    printf("17. sumetion 1-10 of array elements by creating a function sume().\n");
    printf("18. display 1-10 array elements output when i=0, s=? by creating a function out().\n");
    printf("19. substarction 1-10 of array elements by creating a function sbus().\n");
    printf("20. multiplied 1-10 of array elements by creating a function multip().\n");
    printf("================================================================\n\n");
};

void squ()
{
    int n;
    printf("\nEnter a number:");
    scanf("%d", &n);
    printf("%d\n", n*n);
};
void circle()
{
    float pi=3.1416,r;
    printf("\nEnter the redious:");
    scanf("%f", &r);
    printf("%f\n", pi*r*r);
};
void loop()
{
    int a;
    printf("Enter a number:");
    for(a=10; a>=1; a--)
        printf("%d\t", a);
    printf("\n");
};
void odd()
{
    int a;
    printf("Enter a number:");
    scanf("%d\t", &a);
    if(a/2==0) printf("it's an even number\n");
    else printf("it's an odd number\n");
};
void larg()
{
    int a,b,c,z;
    printf("Enter 3 numbers:");
    scanf("%d%d%d", &a,&b,&c);
    z=(a>b&&a>c)?a:
      (b>c)?b:c;
    printf("The largest number=%d\n",z);
};
void add()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b),
          printf("%d+%d =%d\n", a,b,a+b);
};
void sub()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b),
          printf("%d-%d =%d\n", a,b,a-b);

};
void multi()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b),
          printf("% * %d =%d\n", a,b,a*b);
};
void div()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a, &b);
    printf("%d / %d = %d\n", a,b,a/b);
};
void mod()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a, &b);
    printf("%d %% %d = %d\n", a,b,a%b);

};
void mark()
{
    int a;
    printf("\nEnter your marks:\n");
    scanf("%d",&a);
    (a>100 || a<0)?printf("You entered invalid marks\n"):
    (a>=80)? printf("A+\n"):
    (a>=75)? printf("A\n"):
    (a>=70)? printf("A-\n"):
    (a>=65)? printf("B+\n"):
    (a>=60)? printf("B\n"):
    (a>=55)? printf("B-\n"):
    (a>=50)? printf("c+\n"):
    (a>=45)? printf("c\n"):
    (a>=40)? printf("d\n"): printf("F\n");

};
void neg()
{
    int n;
    printf("Enter a number:");
    scanf("%d\t", &n);
    if(n==0) printf("it's a big Zero.\n");

    else if(n<0) printf("%d is nagative number\n");
    else printf("%d is a positive number\n");
};
void srabon()
{
    int a [5]= {2,4,7,9,5};
    printf("\nshowing your result\n");
    printf("%d %d", a[0], a[4]);

};
void shahadat()
{
    int a[5] = {2,4,7,9,5},i;
    printf("\nshowing your result\n");
    for(i=0; i<5; i++)
        printf("%d\n", a[i]);
};
void motree()
{
    int a[7];
    int i;
    printf("\nEnter 7 number:\n");

    for(i=0; i<7; i++)
        scanf("%d\n", &a[i]);
    for(i=0; i<7; i++)
        printf("%d\t", a[i]);
};
void data()
{
    int a[]= {1,2,3,4,5,6,7,8,10,9};
    printf("\nshowing your result\n");
    int asize = sizeof(a)/sizeof(a[0]);
    printf("data size: %d\n",asize);
};
void sume()
{
    int a[10] = {2,1,3,4,5,7,6,9,8,10},i,s=0;
    printf("\nshowing your result\n");
    for(i=0; i<10; i++)
    {
        s = s+a[i];
    }
    printf("sume: %d\n", s);
};
void out()
{
    int a[10] = {2,4,6,3,1,5,9,8,7,10},i,s=0;
    printf("\nshowing your result\n");
    for(i=0; i<10; i++)
        printf("when i=%d, s=%d\n",i,s);
};
void subs()
{
    int a[10] = {2,1,3,4,5,7,6,9,8,10},i,s=0;
    printf("\nshowing your result\n");
    for(i=0; i>10; i--)
    {
        s = s-a[i];
    }
    printf("subs: %d\n", s);
};
void multip()
{
    int a[10] = {2,1,3,4,5,7,6,9,8,10},i,s=0;
    printf("\nshowing your result\n");
    for(i=0; i<10; i++)
    {
        s = s*a[i];
    }
    printf("\nmultip: %d\n", s);
};

int main()
{

    info();
    menu();
    for(int i =1; i; i++)
    {
        int choice;
        printf("Enter your choice:\n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            squ();
            break;
        case 2:
            circle();
            break;
        case 3:
            loop();
            break;
        case 4:
            odd();
            break;
        case 5:
            larg();
            break;
        case 6:
            add();
            break;
        case 7:
            sub();
            break;
        case 8:
            multi();
            break;
        case 9:
            div();
            break;
        case 10:
            mod();
            break;
        case 11:
            mark();
            break;
        case 12:
            neg();
            break;
        case 13:
            srabon();
            break;
        case 14:
            shahadat();
            break;
        case 15:
            motree();
            break;
        case 16:
            data();
            break;
        case 17:
            sume();
            break;
        case 18:
            out();
            break;
        case 19:
            subs();
            break;
        case 20:
            multip();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("\nInvalid choice,Please try again\n");
        }
    }
    return 0;
}


