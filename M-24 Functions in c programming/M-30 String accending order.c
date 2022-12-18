#include <stdio.h>
#include <string.h>

int ascending(char str[100], int l)
{
    int i,j;
    /* sorting process */
    char ch;
    for(i=1; i<l; i++)
        for(j=0; j<l-i; j++)
            if(str[j]>str[j+1])
            {
                ch=str[j];
                str[j] = str[j+1];
                str[j+1]=ch;
            }
    printf("%s\n",str);
}

void main()
{
    char str[100];
    int l;
    fgets(str, sizeof str, stdin);
    l=strlen(str);
    ascending(str,l);
}
