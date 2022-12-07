#include <stdio.h>

void swapArray(int arr[],int n,int lo, int ro){
   int tptx;

   if(lo!=ro){
        tptx = arr[lo];
       arr[lo] =arr[ro];
       arr[ro] = tptx;
   }

}



int main(){
   int n, r, lo, ro, t, val;
   scanf("%d",&n);
   int arr[n];


   if(n>=2 && n<=100) {
       // Storing the value
       for (int i = 1; i <= n; i++) {
           scanf("%d", &val);
           if (val >= 1 && val <= 1000) {
               arr[i] = val;
           }
       }


       scanf("%d",&r);
       for(int j=0; j<r; j++) {
           scanf("%d%d", &lo, &ro);
           if((lo>=1 && lo<=100) && (ro>=1 && ro<=100)) {
               swapArray(arr,n,lo,ro);
           }
       }

       for(int k=1;k<=n;k++){
           printf("%d ",arr[k]);
       }

   }
   return 0;
}
