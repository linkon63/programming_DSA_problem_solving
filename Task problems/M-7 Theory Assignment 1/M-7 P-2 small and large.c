
/*

 You need to take 4 distinct integers as input.
 Print the largest and smallest among them.
 Distinct means all of them are separate
 integers. None of them is equal to any other of them.
Sample Input:
123 435 34 612
Sample Output:
Largest = 612
Smallest = 34

*/

#include <stdio.h>

int main()
{
    int i, n, lar,sm, elem = 4;
    scanf ("%d", &n);
    lar = n;
    sm=n;
    for (i=1; i<= elem -1 ; i++)
    {
        scanf ("%d ",&n);
        if (n>lar)
            lar=n;
        if (n<sm)
            sm=n;
    }
    printf ("Largest = %d", lar);
    printf ("\nSmallest = %d", sm);
    return 0;
}
