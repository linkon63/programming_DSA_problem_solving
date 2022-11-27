
#include <stdio.h>
int lgSeven(int n);
int digitSum(int n);
int lgPrime(int n);
int main()
{
    int n = 173;
    if(lgSeven(n) == 1 && digitSum(n) > 10 && lgPrime(n) == 1){
        printf("This number is okay ;;");
    } else{
        printf("This number is not okay ;;");
    }
    return 0;
}
int lgSeven(int n){
    while(n>0){
        if(n%10 ==  7)
            return 1;
        n/=10;
    }
    return 0;
}
int digitSum(int n){
    int sum = 0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int lgPrime(int n){
    int ld = n%10;
    if(ld == 2 || ld == 3||ld == 5||ld==7)
        return 1;
    else
        return 0;
}
