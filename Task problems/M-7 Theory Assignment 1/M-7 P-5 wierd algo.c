
/*

 Let us create a new version of a weird algorithm.
 You will be given an integer, n as input. If n is even,
  divide it by two. If n is odd, then subtract 1 from n.
  Eventually it will end at 1. So print the whole sequence. For example,
Sample Input:
123
Sample Output:
123, 122, 61, 60, 30, 15, 14, 7, 6, 3, 2, 1
Follow the whole output format(each numbers separated by commas).


*/
#include <stdio.h>

int main()
{
    long long num;
    // int totalSum = 0;
    scanf("%lld", &num);

    while(num >= 1)
    {
        if(num%2 != 0)
        {
            if(num != 1)
            {
                printf("%lld, ",num);
            }
            else
            {
                printf("%lld",num);
            }
            num = num-1;

        }
        else
        {
            printf("%lld, ",num);
            num /= 2;
        }
    }

    return 0;
}
