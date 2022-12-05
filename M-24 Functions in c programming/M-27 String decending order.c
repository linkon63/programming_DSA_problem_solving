#include <stdio.h>
#include <string.h>

void strDecendingOrder(char *str, int len)
{
    int i,j;
    char temp;
    for (i = 0; i < len-1; i++)
    {
        for (j = i+1; j < len; j++)
        {
            if (str[i]< str[j])
            {
                temp = str[j];
                str[j] = str[i];
                str[i] = temp;
            }
        }
    }
    printf("%s",str);

}

int main ()
{
    char str[100];
    char temp;
    int i, j,len;
    scanf("%[^\n]",str);
    len = strlen(str);
    strDecendingOrder(str, len);
    return 0;
}
