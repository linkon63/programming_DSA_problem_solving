
#include <stdio.h>
int S(int n){
    if(n == 1)
        return 1;
    else
        return S(n-1) + n;
}
int main()
{

    int i,n;
    scanf("%d",&n);
    int sum = 0;
    printf("%d",S(n));
//    int summ = (n*(n+1)/2);
//    for(i = 1; i<=n; i++)
//        sum+=i;

    return 0;
}
