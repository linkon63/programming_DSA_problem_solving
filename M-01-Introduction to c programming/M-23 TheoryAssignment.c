#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    printf("Hello world\n");
    //scanf("%s",s);
    fgets(s, sizeof(s), stdin);

    return 0;
}
