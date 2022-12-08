
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    int *ptr;

    ptr = (int *)calloc(n, sizeof(int));
    // contigious memory allocation
    // no garbage value => clean allocation

    if (ptr == NULL)
    {
        printf("Memory allocation failed!");
    }
    else
    {

        for (i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }

        for (i = 0; i < n; i++)
        {
            printf("%d th position : %d \n", i, *(ptr + i));
        }

        // if you need more size in memory allocation
        ptr = realloc(ptr, (n + 5) * sizeof(int));

        free(ptr);
    }

    return 0;
}
