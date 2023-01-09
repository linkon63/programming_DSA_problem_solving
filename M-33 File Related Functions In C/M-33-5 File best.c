#include <stdio.h>

int main()
{
    FILE *inputFile = fopen("inputFile.txt","r");
    FILE *outputFile = fopen("outputFile.txt","w");
    if(inputFile == NULL)
    {
        printf("There is no such as input file \n");
        return 0;
    }

    int n;
    fscanf(inputFile,"%d",&n);
    fprintf(outputFile,"This value is from input file : %d\n",n);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
