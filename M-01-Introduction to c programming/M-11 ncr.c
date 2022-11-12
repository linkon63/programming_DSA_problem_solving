
#include<stdio.h>

int main()
{
    long long int n,h;
    scanf("%lld",&n);
    printf("%lld",( ((n-1)*n) / 2 ));
    // h = ( ((n-1)*n) / 2 );
    return 0;

    /*
    long long int fact=1, numerator, denominator;
    long long int comb, n, r = 2, i=1, sub;
    scanf("%lld", &n);
    while(i<=n)
    {
        fact = i*fact;
        i++;
    }
    numerator=fact;                    // n!
    sub = n-r;
    fact=1;
    i=1;
    while(i<=sub)
    {
        fact=i*fact;
        i++;
    }
    denominator = fact;               // (n-r)!
    fact = 1;
    i=1;
    while(i<=r)
    {
        fact = i*fact;
        i++;
    }
    denominator = (fact*denominator);
    comb = numerator/denominator;
    printf("%lld", comb);

    return 0;
    */
}

/*#include <stdio.h>

int fact(int);

void main()
{
	int n,r=2,ncr;


    scanf("%d",&n);
  	ncr = fact(n)/(fact(r)*fact(n-r));
    printf("%d\n",ncr);
}

int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

*/
/*
#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    int r = 2;
    long long int nFact = 1;
    for(long long int i = n; i > 0; i--){
        nFact *= i;
    }

    long long int downFact = n - 2;
    long long int downFactResult = 1;

    for(long long int i = downFact; i > 0; i--){
        downFactResult *= i;
    }

    //printf("%lld\n", nFact);
    //printf("%lld\n", downFactResult);



    long long int ncr = (nFact) / (downFactResult * r);
    printf("%lld\n", ncr);

    return 0;
}

*/

