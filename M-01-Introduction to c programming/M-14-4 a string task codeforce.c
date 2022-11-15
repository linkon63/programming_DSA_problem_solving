#include <stdio.h>
#include <string.h>

int main()
{
    char s[102];
    int i;
    fgets(s, sizeof(s), stdin);

    int l = strlen(s) - 1;
    /* int lastI = strlen(s) - 1;
     //printf("%d",lastI);
     if( s[lastI-1] == 'y'){
         l = strlen(s) - 2;
     }
     //printf("%c Hello Y I catch you",l);
    */
    for(int i = 0; i < l; i++)
    {
        // printf("%c", s[i]);
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        if(!(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' || s[i]=='u' || s[i]=='y'))
        {
            printf(".%c", s[i]);

        }

    }


    return 0;
}
