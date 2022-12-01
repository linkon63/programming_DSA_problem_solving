#include <stdio.h>

// pass by value
void swapValue(int x, int y){
    printf("*before swap x = %d y = %d\n",x,y);
    int temp = x;
    x = y;
    y = temp;
    printf("*after swap x = %d y = %d\n",x,y);
}
void swapRef(int *x, int *y){
    printf("*before swap x = %d y = %d\n",*x,*y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("*after swap x = %d y = %d\n",*x,*y);
}
int main(){
    int a = 5, b = 10;
    printf("Before swap a = %d b = %d\n",a,b);
    swapRef(&a,&b);
    printf("After swap a = %d b = %d\n",a,b);
}
