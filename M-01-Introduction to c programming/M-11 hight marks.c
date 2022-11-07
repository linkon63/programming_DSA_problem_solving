#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n,i,j, arr[1000],hm=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        if(hm <= arr[i]){
            hm = arr[i];
        }
    }
    //printf("%d",hm);

    for(i=0; i<n; i++){
        printf("%d ", hm-arr[i]);
    }

    return 0;
}

