#include <stdio.h>

int main()
{
    int i,j,counter,n, value, solve = 0;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        counter = 0;
        for( j =0; j<3; j++)
        {
            scanf("%d",&value);
            counter+=value;
        }
        if(counter >= 2)
        {
            solve++;
        }
    }
    printf("%d", solve);
    return 0;
}
