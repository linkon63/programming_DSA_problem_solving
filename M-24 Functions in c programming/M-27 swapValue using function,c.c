
#include <stdio.h>

int main()
{
    int x = 5;
    int y = 10;
    int *ptrX;
    int *ptrY;

    ptrX = &x;
    ptrY = &y;

    printf("%d %d\n",*ptrX,*ptrY);
    return 0;

}

