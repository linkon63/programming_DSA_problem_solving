
#include <stdio.h>
int main()
{
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
