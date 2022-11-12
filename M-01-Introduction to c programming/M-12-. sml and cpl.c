
#include<stdio.h>
#include<string.h>
#include <ctype.h>

int main()
{
    char name[1001];
    fgets(name,sizeof(name),stdin);
    for(int i = 0; name[i] != '\0'; i++){
        if(isupper(name[0])){

        }else if(name[i] >= 'a' && name[i]<='z'){
            name[i] -=32;
        }
    }
    puts(name);
    return 0;
}

