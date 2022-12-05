#include <stdio.h>

int is_leap(int y)
{
    if(y%400 == 0 || (y%4 == 0 && y%100 != 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_distinct(int n){
    int count_digit[] = {0,0,0,0,0,0,0,0,0,0};
    int ld;
    while(n>0){
        ld = n%10;
        count_digit[ld]++;
        n/=10;
    }
    int i;
    for(i=0; i<10;i++){
        if(count_digit[i] > 1)
            return 0;
    }

    return 1;
//    a,b,c,d
//    a!=b && a!=c && a!=d && b!=c & b!=d
}
int main()
{
    int year;
    scanf("%d",&year);
    if(is_leap(year) == 1 && is_distinct(year == 1)){
        printf("Beautiful\n");
    }else{
        printf("Not Beautiful\n");
    }
    return 0;
}

//leap_year 2020 2024 2028 2096 2104 2108 notLY2200
//distinct_number = unique digit
