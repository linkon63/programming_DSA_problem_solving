#include <stdio.h>
#include <math.h>
int main()
{
    //int e;
    float s,e;
    scanf("%f",&e);
    s = (e/5);
    // s = (e/5) + (e%5 != 0);

    printf("%.0f",ceil(s));
    return 0;
}
