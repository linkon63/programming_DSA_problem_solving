#include <stdio.h>
#include <string.h>
#include <math.h>
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
