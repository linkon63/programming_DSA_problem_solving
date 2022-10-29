#include <stdio.h>

int main(){
    int odd,even,k,cal,n,p;
    scanf("%d %d",&n,&p);
    odd = n/2 + 1;
    even = n/2;
    k = p;
    if(k < odd){
        cal = 2 * p - 1;
    }else{
       int temp = k - odd;
       cal = 2 * temp;
    }
    printf("%d",cal );

return 0;
}
