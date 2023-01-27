# include<stdio.h>
void main ()
{
    int x=5, y=2;
    do
    {
        if(x==y)
        {
            break;
        }
        x--;
    }
    while (x >=0);
    printf ("%lf", x);
    return 0;
}
//#include<stdlib.h>
//void main ()
//{
//    int a, b;
//    scanf ("%d %d", &a, &b);
//    if (a >b)
//    {
//        printf ("Hello DIU.");
//    }
//    else
//    {
//        printf ("Hello! Batch E-92.");
//    }
// return 0;
//}
