
#include <stdio.h>

char brokenKeyBoard(char s[100], char updateS[100])
{
    int keyOne = 0;
    int keyTwo = 1;
    int keyThree = 2;
    int keyFour = 3;
    int i;
    for(i = 0; i<strlen(s); i++)
    {
        int position = strlen(updateS);
        if(i == keyOne)
        {
            updateS[i] = s[i];
        }
        else if(i == keyTwo)
        {
            int t=i;
            int run = t+2;
            while(t < run)
            {
                updateS[t] = s[i];
                t++;
            }
        }
        else if(i == keyThree)
        {
            position = strlen(updateS);
            updateS[position] = s[i];
        }
        else if(i == keyFour)
        {
            int t=i;
            int run = t+2;
            position = strlen(updateS);
            while(t < run)
            {
                updateS[position] = s[i];
                position++;
                t++;
            }
        }
    }


    printf("%s",updateS);
}

int main()
{
    char s[100];
    char updateS[100] ="";
    scanf("%s",s);
    brokenKeyBoard(s, updateS);
    return 0;
}
