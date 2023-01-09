#include <stdio.h>

int main()
{
    FILE *logFile = fopen("m-32Log.txt","a");
    printf("Log file has created \n");
    fprintf(logFile,"It is 5.56\n");

    FILE *inputFile = fopen("xyx.txgt","r");
    if(inputFile == NULL){
        fprintf(logFile,"Input wrong file \n");
    return 0;
    }
    return 0;
}
