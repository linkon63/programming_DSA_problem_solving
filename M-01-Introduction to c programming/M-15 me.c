
#include <stdio.h>
int main()
{
    int arr[3][3];
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    int d1 = 0;
    int d2 = 0;
    int i,j;
    for(i = 0; i< 3; i++)
    {
        for(j = 0; j<3; j++)
        {
            printf("arr[%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(i = 0; i< 3; i++)
    {
        d1 += arr[i][i];
        d2 += arr[i][2-i];
        for(j = 0; j<3; j++)
        {
            if(i == 0)
            {
                //printf("%d:",i);
                count += arr[i][j];
            }
            if(i == 1)
            {
                //printf("%d:",i);
                count1 += arr[i][j];
            }
            if(i == 2)
            {
                //printf("%d:",i);
                count2 += arr[i][j];
            }



            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    if(count == count1 && count1 == count2 && d1 == d2 && d1 == count && d2 == count2  ){
        printf("YES");
    }else{
        printf("No");
    }
    // printf("Count ROW 0:%d\n", count);
    // printf("Count ROW 1:%d\n", count1);
   // printf("Count ROW 2:%d\n", count2);
   // printf("Count D1   :%d\n", d1);
   // printf("Count D2   :%d\n", d2);



}
/*
int num = 1235623;
int count = 0, i = 0;
while(num >= 1)
{
    count+= num%10;
    num = num - num%10;
    num = num / 10;
    //printf("Num  : %d \n", num);
    //printf("Count: %d \n", count);
}
  printf("Total Count: %d \n", count);
}
/*
int arr[100] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
int i,j,k;
for(i = 0; i<5; i++)
{
for(j=0; j<11; j++ )
{
if(arr[j] > arr[j+1])
{
    int temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;
}
// printf("%d, ",arr[i]);
// printf("innerLoop:%d \n",arr[j]);
}
printf("\n");
for(k = 0; k< 11; k++)
{
printf("%d, ", arr[k]);
}

//  printf("%d, ",arr[i]);
}
printf("\n New Line \n");
for(i = 0; i< 11; i++)
{
printf("%d, ", arr[i]);
}

}
/*
char a = 'a';
printf("%d",a);
}
/*
int a = 10;
printf("int value is : %d , sizeof:%d \n", a, sizeof(a));
int arr[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
printf("sizeofarray:%d",sizeof(arr));
}
/*
char a[10];
char ch = 'a';
// printf("ASCII VALUE OF CH / a = %d \n",ch);

for(int i = 0; i<8; i++)
{
printf("%d = %d + 8 - %d = ASCII:%d, String : %c \n",i,ch,i,(ch+8-i), (ch+8-i) );
a[i] = ch+8-i;
// a[i] = "a";
// printf("%c, = %d \n",ch,ch);
}
a[8] = "\0";

for(int i = 0; i<8; i++)
{
printf("%c, ", a[i]);
}
}
/*
char a[10];
a[0] = 98;
a[1] = 97;
a[2] = 'n';
a[3] = 'a';
a[4] = 'n';
a[5] = 'a';
//a[6] = '\0’;
printf("%s", a);
}

/*
int arr[15];
int i;
arr[0] = 1;
for(i = 1; i< 15; i++)
{
arr[i] = arr[i-1] * 2;
}

for(i = 0; i< 15; i++)
{
printf("%d, ",arr[i] );
}

return 0;
}
/*
char s[8] = "america";
printf("%s",s);


/*
int n = 10;
int x = 5;
int index = 0;
int a[] = {12, 7, 3, 71, 2, 43, 38, 23, 45, 22};
int b[n];
for (int i=0; i<n; i++)
{
//Write Code Here
b[i] = a[i] + x;
}
printf("\n");
for (int i=0; i<n; i++)
{
//Write Code Here
// b[i] = a[i] + x;
printf("%d, ",b[i]);
}


return 0;
}
*/
