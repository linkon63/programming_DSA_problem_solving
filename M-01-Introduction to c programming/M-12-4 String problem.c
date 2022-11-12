#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


int compare(const void *a, const void *b)
{
    return ( *(int*) a - *(int*) b);
}

int main()
{
    int i, n,s x, t;

    char c[101];
    scanf("%d", &t);
    while(t--)
    {
        scanf("%s", &c);
        int l = strlen(c);
        if(l>10)
        {
            printf("%c%d%c\n", c[0], l-2, c[l-1]);
        }
        else printf("%s\n", c);
    }
    return 0;
}

/*

#include <stdio.h>
#include <string.h>

int main()
{
    int loopN;
    char arr[100][100];

    scanf("%d", &loopN);

    for(int i= 0; i<loopN; i++)
    {

        char name[100];
        fgets(name,sizeof(name), stdin);

        int l = strlen(name) - 1;
        // printf("%d",l);

        if(l > 10)
        {
            // abbreviate
            // printf("%c%d%c",name[0],l-2,name[l-1])
            char str[1000];
            char fl = name[0];
            int ml = l-2;
            sprintf(str, "%d", ml);
            char ll = name[l-1];

           // printf("fl = %c",fl);
            // printf("ml = %s",str);
            // printf("ll = %c",ll);

            //char strCat [100] = strcat(fl,ll);
           // char strCat2 [] = strcat(strCat,ll);
           // printf("strCat = %s",strCat2);

            char result[] = {0};
            //snprintf(result, sizeof(result), "%s %s %s", fl, str, ll);
            printf("%s\n", strCat);


            // arr[i] = name[0],l-2,name[l-1]
        }
        else
        {
            puts(name);
        }
    }
    return 0;

    /* scanf("%d", &loopN);

     char name[100];
     fgets(name,sizeof(name), stdin);

     int l = strlen(name) - 1;
     printf("%d",l);

     if(l > 10)
     {
         // abbreviate
         printf("%c%d%c",name[0],l-2,name[l-1])
     }
     else
     {
         puts(name);
     }
}

    */
