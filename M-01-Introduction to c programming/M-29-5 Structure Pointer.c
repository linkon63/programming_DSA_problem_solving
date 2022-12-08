//M-29-5 Structure Pointer

#include <stdio.h>
#include <stdlib.h>

struct Student
{
    double weight;
    int roll;
};
int main()
{
    struct Student s = {.weight = 10.3, .roll = 10};
    struct Student * sp;
    sp = &s;

    printf("%d %lf\n", sp->roll, sp->weight);

    return 0;
}
