/*This time you need to find the sum of the digits of the input. So look at the sample input output.
Sample Input:
2346167
Sample Output:
29
Explanation: Since, the sum of the digits is 2+3+4+6+1+6+7 = 29. So the output is 29.
*/


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
    int totalSum = 0;
    scanf("%lld", &num);
    do
    {
        int lastDigit = num%10;
        totalSum += lastDigit;
        num /= 10;
    }
    while(num != 0);

    printf("%d", totalSum);

    return 0;
}
