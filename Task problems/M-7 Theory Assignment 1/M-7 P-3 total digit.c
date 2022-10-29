
/*
You will be given a number as input. You will have to find the number of digits in that number. You will have to use loops to solve this problem as the input can have any number of digits. [Hint: Use the modulus operator. You can extract the last digit from any number by using the%10 operation on the number.]
For example,
Sample Input:
2346167
Sample Output:
7 digits
Since the input had 7 digits so the output is 7. Please use long long int as data type for this problem.
Answer:

*/
#include <stdio.h>

int main()
{
    long long num;
    int count = 0;

    /* Input number from user */
    scanf("%lld", &num);

    /* Run loop till num is greater than 0 */
    do
    {
        /* Increment digit count */
        count++;

        /* Remove last digit of 'num' */
        num /= 10;
    }
    while(num != 0);

    printf("%d digits", count);

    return 0;
}
