// 32-2_ Print from N to 1 using Recursion

#include <stdio.h>

int solve(int n, int i)
{
    // if(n < i) return;
    if(n == 0) return;
    printf("%d\n",n);
    solve(n -1,i);
}

int main()
{
    int n;
    scanf("%d",&n);
    solve(n,1);
    return 0;
}

