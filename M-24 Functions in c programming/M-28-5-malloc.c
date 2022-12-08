#include <stdio.h>>
#include <stdlib.h>

int main()
{
    int i, n = 3;
    int *ptr;
    ptr = (int *)malloc(n * sizeof(int));
    printf("Memory address : %p \n", ptr);
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
        for (i = 0; i < n; i++)
        {
            printf("%d, ", *(ptr + i));
        }
    }
    n = 5;
    ptr = realloc(ptr, n * sizeof(int));
    printf("\n Memory address : %p \n", ptr);

    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
    }
    else
    {
        for (i = 3; i < n; i++)
        {
            scanf("%d", (ptr + i));
        }
        for (i = 0; i < n; i++)
        {
            printf("%d, ", *(ptr + i));
        }
    }

    return 0;
}