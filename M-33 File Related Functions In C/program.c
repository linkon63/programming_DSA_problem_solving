#include <stdio.h>

int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt","r");
    if(inputFile == NULL){
            printf("FILE NOT FOUND");
        return 0;
    }
    outputFile = fopen("output.txt","w");
    int n,i,sum = 0;
    fscanf(inputFile,"%d",&n);
    for(i = 0; i<n; i++){
        int a;
        fscanf(inputFile,"%d",&a);
        sum+= a;
    }
    fprintf(outputFile,"Sum -> %d",sum);
//    while(1){
//        char ch = fgetc(inputFile);
//        if(ch == EOF){
//            break;
//        }
//        fputc(ch,outputFile);
//        printf("%c",ch);
//    }
    return 0;
}

//33-2 File Related Functions In C
//#include <stdio.h>
//
//int main()
//{
//    FILE *inputFile;
//    FILE *outputFile;
//    inputFile = fopen("input.txt","r");
//    if(inputFile == NULL){
//        return 0;
//    }
//    outputFile = fopen("output.txt","w");
//    while(1){
//        char ch = fgetc(inputFile);
//        if(ch == EOF){
//            break;
//        }
//        fputc(ch,outputFile);
//        printf("%c",ch);
//    }
//    return 0;
//}
