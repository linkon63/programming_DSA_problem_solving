#include <stdio.h>
int main()
{
    char str[]="Programming";
    int i=0;
    while (str[i]!='\0')
    {
        printf("%c ",str[i]);
        i+=1;
    }
    printf(".");
    return 0;
}
/*#include<stdio.h>
int main()
{
    char str[] = {'P', 'h', 'i', 't', 'r', 'o','n','\0'};
    printf("%s", str);
    return 0;
}

/*
#include<stdio.h>
int main()
{
    char str[] = {'P', 'h', 'i', 't', 'r', 'o','n'};
    printf("%s", str);
    return 0;
}

#include <stdio.h>
int main()
{
    char str[]="Ab";
    printf("%c",(str[0]+32));
    return 0;
}
*/
