#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ara1[n];
    int ara2[n];
    for(int i = 0 ; i<n ;i++)
    {
        scanf("%d",&ara1[i]);
    }
    for(int i = 0 ; i<n; i++)
    {
        scanf("%d", &ara2[i]);
    }


    int sorted_ara1[n];
    int sorted_ara2[n];
    int as_temp;
    int des_temp;

    for(int i = 0 ; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(ara1[i]>ara1[j])
            {
               as_temp = ara1[i];
               ara1[i] = ara1[j];
               ara1[j] = as_temp;
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        sorted_ara1[i]=ara1[i];
    }

   for(int i = 0 ;i<n; i++)
   {
       for(int j = i+1; j<n; j++)
       {
           if(ara2[i]<ara2[j])
           {
               des_temp = ara2[i];
               ara2[i] = ara2[j];
               ara2[j] = des_temp;
           }
       }
   }
   for(int i = 0; i<n; i++)
   {
       sorted_ara2[i] = ara2[i];
   }

   int diff_arra[n];
   for(int i = 0; i<n; i++)
   {
       diff_arra[i] = sorted_ara1[i] - sorted_ara2[i];
   }
   for(int i = 0 ;i<n ; i++)
   {
       printf("%d ",diff_arra[i]);
   }
   return 0;

}
