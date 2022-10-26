#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int A,B,C;
    scanf("%d %d %d", &A,&B,&C);
 /*
    if(A ==  0 ||  B == 0 || C == 0 || A < 100 || B < 100 || C < 100 ){
        printf("No");
    } else if( A > 0 || B > 0 ||  C > 0 && A == B && A == C && B == A && B == C && C == A && C == B ){
        printf("Yes");
    }else{
        printf("No");
    }
    */
    /*
    if(A > 0 && B > 0 && C > 0){
        if( A <= 100 && B <=100 && C <= 100 ){
            if(A == B && A == C && B == A && B == C){
            printf("Yes");
            }else{
            printf("NO");
            }
        }else{
            printf("No");
        }
    }else{
        printf("No");
    }
*/
    // if(A ==  0 ||  B == 0 || C == 0 || (A > 100 || B >100 || C > 100 )){
    //     printf("No");
    // }
    // if( A>= 0 && B>=0 && C>=0 && A==B && A==C && B == A && B == C && C == A && C == B ){
    //     printf("Yes");
    // }else{
    //     printf("No");
    // }


    if((A > 0 && B > 0 && C > 0) && (A <= 100 && B <= 100 && C<= 100) && (A == B && B == C && C == A) ){
        printf("Yes");
    }else{
    printf("No");
    }


    return 0;
}
