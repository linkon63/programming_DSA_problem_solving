#include <stdio.h>
#include <string.h>
#include <math.h>

int factorial(int x)
{
    int f = 1, i;
    if(x == 0 || x == 1)
    {
        ratio(x,1);
        return 1;
    }
    else
    {
        for (i = 1; i <= x; i++)
        {
            f *= i;
        }
        ratio(x,f);
        return f;
    }


}

void ratio(int x, int y)
{
    printf("Ratio is %d:%d \n",x,y);
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("x:%d\n",x);
    long long int a = factorial(x);
    printf("Factorial:%lld \n", a);

    return 0;
}

/*
// question 10
const char* grade(int marks){
    if(marks>= 80 && marks <=100){
        return 'A';
    }else if(marks>= 60 && marks <=89){
         return 'B';
    }else if(marks>= 40 && marks <=59){
         return 'C';
    }else if(marks>= 0 && marks <=39){
         return 'F';
    }else{
        return 'F';
    }
}
int main()
{
    int marks;
    scanf("%d",&marks);
    printf("Grade:%c \n",grade(marks));
    return 0;
}
/*
int main()
{
    int mat[3][3], i, j, matTrans[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &mat[i][j]);
    }
    // Transposing the Matrix...
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            matTrans[j][i] = mat[i][j];
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d  ", matTrans[i][j]);
        printf("\n");
    }

    return 0;
}
// question 9
/*

// question 8
int main()
{
    char s[100];
    int n;
    fgets(s,sizeof(s),stdin);
    scanf("%d",&n);
    int i;
    for(i = 0; i < strlen(s)-1; i++)
    {
        if(s[i] == 'y')
        {
            printf("%c",s[i]-21);
        }else{
            printf("%c",s[i]+n);
        }
    }
    return 0;
}

/*
// Question 7

int medianOfArray(int len,int arr[])
{

    if(len % 2 == 0)
    {
        //printf("Array Size is even number:%d \n", len);
        int *sortArr = bubbleSort(arr,len);
        float prv = sortArr[(len/2) - 1];
        float mid = sortArr[len/2];
        float midValue = ( prv+mid ) / 2;
        printArray(sortArr,len);
        //printf("Mid prv Value:%2f\n", prv);
        //printf("Mid mid Value:%2f\n", mid);
        printf("Mid Value:%2f\n", midValue);
    }
    else
    {
        //printf("Array Size is odd number:%d \n", len);
        int *sortArr = bubbleSort(arr,len);
        printArray(sortArr,len);
        int index = len/2;
        //printf("Mid index:%d\n", index);
        printf("Mid Value:%d\n", sortArr[index]);
    }
}

// perform the bubble sort
int bubbleSort(int array[], int size)
{

    // loop to access each array element
    for (int step = 0; step < size - 1; ++step)
    {

        // loop to compare array elements
        for (int i = 0; i < size - step - 1; ++i)
        {

            // compare two adjacent elements
            // change > to < to sort in descending order
            if (array[i] > array[i + 1])
            {

                // swapping occurs if elements
                // are not in the intended order
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }
    return array;
}


// print array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}
int main()
{

    int arr[7] = {1,2,7,3,8,4,9};
    medianOfArray(7,arr);
    return 0;
}
// Question 6
/*
int factorial(int x)
{
    int f = 1, i;
    if(x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        for (i = 1; i <= x; i++)
        {
            f *= i;
        }
        return f;
    }
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("x:%d\n",x);
    long long int a = factorial(x);
    printf("Factorial:%lld \n", a);

    return 0;
}
// Question 5
/*
int add_three_nums(int a, int b, int c)
{
    return a+b+c;
}
int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    int answer = add_three_nums(a,b,0);
    printf("Your Answers:%d\n",answer);
    return 0;
}
/*
// Question 4
int main()
{
    int arr[10000];
    int numbers,target,i;
    scanf("%d %d", &numbers, &target);
    int eC = floor(numbers/2);
    int oC = ceil(numbers/2 + 1);
    //printf("Numbers:%d  Target: %d \n",numbers,target);
    //printf("eC:%d  oC: %d\n",eC,oC);

    // even number
    int countE = 0;
    for(i=1; i < numbers; i++)
    {
        if(i%2 == 0)
        {
            arr[countE] = i;
            countE++;
        }
    }
    countE = eC;
    for(i=1; i <= numbers; i++)
    {
        if(i%2 != 0)
        {
            arr[countE] = i;
            countE++;
        }
    }

    for(i=0; i < numbers; i++)
    {
        printf("%d ",arr[i]);
    }
        printf("\nThe %dth element in this sequence is %d",target,arr[target-1]);
}
// Question 3
/*
void function(char *myString)
{
        int one = 0, seven = 0, nine=0;
    for (size_t i = 0; i < strlen(myString); i++)
    {
        // Access each char in the string
        //printf("myString[%lu] = %c\n", i, myString[i]);
        if(myString[i] == '1'){
            one = 1;
        }else if(myString[i] == '7'){
            seven = 1;
        }else if(myString[i] == '9'){
            nine = 1;
        }
    }

    if(one == 1 && seven == 1 && nine == 1){
        printf("YES\n");
    }else{
    printf("NO");
    }
}
// Question 2
int main()
{
    char s[100000];
    scanf("%s",s);
    function(s);
    return 0;
}

/*
{
    int i=0;
    while(i<10)
    {
        printf("I am inside the loop\n");
        i++;
    }

}
/*
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    for(int i = 0; s[i]!='\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }else if(s[i] >= 'a' && s[i] <= 'z' ){
            s[i] = s[i] - 32;
        }
    }
    printf("%s\n",s);
    return 0;
}

*/
