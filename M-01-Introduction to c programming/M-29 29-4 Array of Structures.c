#include <stdio.h>
#include <stdlib.h>

struct Student
{
    double weight;
    int roll;
};
int main()
{
    struct Student s[10];
    int i;

    for(i=0; i<10; i++)
    {
        s[i].roll = 56+1;
        s[i].weight = 76.9+i*9;
    }

    for(i=0; i<10; i++)
    {
        printf("%d %lf \n", s[i].roll, s[i].weight);

    }


    return 0;
}
