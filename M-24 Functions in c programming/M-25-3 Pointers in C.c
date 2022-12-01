
#include <stdio.h>

int main()
{
    /// pointer to pointer
    int a = 5;
    printf("%d\n",a);
    int *p;
    int **q;
    p = &a;
    q = &p;
    **q = 13;
    printf("%p\n",p);
    printf("%p\n",q);
    printf("%d\n",a);

    /*
    // pointer
    int a = 5;
    int *p;
    int *q;
    p = &a;
    q = p;
    *q = 13;
    printf("%d\n",a);
    */
}
