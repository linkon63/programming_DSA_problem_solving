#include <stdio.h>

int solve(int i, int n){
    if(i > n) return;
    printf("%d\n",i);
    solve(i+1,n);
}

int main()
{
    int n;
    scanf("%d",&n);
    solve(1,n);
    return 0;
}
