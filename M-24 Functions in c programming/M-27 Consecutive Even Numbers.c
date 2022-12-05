#include <stdio.h>
int cEvenNumbers(int n)
{
    int i;
    int divAndMinus = (n / 4) - 3;
    for (i = divAndMinus; i <= (divAndMinus + 6); i += 2)
    {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
int main()
{

    int n, i, t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        cEvenNumbers(n);
    }

    return 0;
}