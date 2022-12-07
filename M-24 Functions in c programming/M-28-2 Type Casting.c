#include <stdio.h>

int main()
{
    int a = 7, *pi;
    double b = 9.56, *pd;
    char c = 'a';
    printf("%d %lf %c \n", a, b, c);
    
    pi = &a;
    pd = (double*)pi;
    // pd = &b;

    // b = (double)25 / 4;
    // b = 25/4.0; // Also work
    // a = c;
    // c = 105;
    printf("%d %lf %c \n", a, b, c);
    printf("%p %p %c \n", pi, pd, c);

    return 0;
}