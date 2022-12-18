// 32-3_ Reverse in Recursion
#include <stdio.h>

int solve(int i, int n){
    if(i > n) return;
    solve(i+1,n);
    printf("%d\n",i);
}

int main()
{
    int n;
    scanf("%d",&n);
    solve(1,n);
    return 0;
}
