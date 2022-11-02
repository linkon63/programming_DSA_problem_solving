#include <stdio.h>

int main()
{
    int i,j,sum,marks;
    float avg;
    for(i = 0; i<10; i++)
    {
        printf("Std %d marks: ", i);
        for(j=0; j<3; j++)
        {
            scanf("%d",&marks);
            sum = sum+marks;
        }
        avg = sum / 3;
        printf("Avg of this std:%f \n", avg);
        sum = 0;
        avg = 0;
    }
    return 0;
}
