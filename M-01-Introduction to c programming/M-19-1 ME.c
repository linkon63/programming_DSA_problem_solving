#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int t = 100;
    char string1[t];
    scanf("%d",&t);
    if(1<=t && t<=20)
    {
        int i;
        while(t--)
        {
            scanf("%s",string1);
            int i, length;
            int flag = 0;

            length = strlen(string1);

            for(i=0; i < length ; i++)
            {
                if(string1[i] != string1[length-i-1])
                {
                    flag = 1;
                    break;
                }
            }

            if (flag)
            {
                printf("Case #1: Not Palindrome\n");
            }
            else
            {
                if(length < 7)
                {
                    printf("Case #3: %s\n", string1);
                }else{
                    printf("Case #2: %c%d%c\n",string1[0],(length-2),string1[length - 1]);
                }
            }
        }
    }
}
// Plus Minus
/*
{
    int n = 100;
    int i,j;
    scanf("%d", &n);
    if(n > 0 && n <=100)
    {
        char s[n];
        scanf("%s",s);
        int p = 0, m = 0;
        int len = strlen(s);
        for(i = 0; i < len; i++)
        {
            if(s[i] == '+')
            {
                p++;
            }
            if(s[i] == '-')
            {
                m++;
            }
        }

        if(p > m)
        {
            printf("%d",p);
        }
        else
        {
            printf("%d",m);
        }
    }
}
/*
{
    int n,i,j;
    scanf("%d",&n);
    if(n > 0 && n <= 9)
    {
        for(i = 1; i <= n; i++)
        {
            for(j = 1; j<=n; j++)
            {
                if(i == 1)
                {
                    printf("%d",j);
                }
                else if(i == n)
                {
                    printf("%d",n);
                }
                else
                {
                    if(j == 1)
                    {
                        printf("%d",i);
                    }else if(j == n){
                        printf("%d",n);
                    }
                    else
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    }
}
/*
{
    int t,i,j;
    int n = 1000;
    scanf("%d",&t);
    if(t >= 1 && t <=100) // test case for t
    {
        while( t--) // how many time it will take input and check
        {
            scanf("%d",&n); // size of string arr
            if( n >= 1 && n <= 1000) // test case for n
            {
                int tN = 0;
                int zO=0,oZ=0;
                char s[n];
                scanf("%s",s);
                for(i=0; i < ( strlen(s) ); i++ )
                {
                    if(s[i] == '0' && s[i+1] == '1')
                    {
                        zO++;
                    }
                    else if(s[i] == '1' && s[i+1] == '0')
                    {
                        oZ++;
                    }
                }
                tN= zO+oZ;
                printf("%d\n",tN);
            }
        }
    }
}
/*
int n,m,i,j;
scanf("%d %d",&n,&m);
int arr[n][m];

if(n>0 && m>0)
{
    for(i = 0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
            if((arr[i][j] == (i+1) ) && (arr[i][j] == (j+1)  ))
            {
                arr[i][j] = arr[i][j] + 3;
            }
            else if ( (arr[i][j] == (i+1)) && !(arr[i][j] == (j+1)))
            {
                arr[i][j] = arr[i][j] + 2;
            }
            else if ( !(arr[i][j] == (i+1)) && (arr[i][j] == (j+1)))
            {
                arr[i][j] = arr[i][j] + 1;
            }

        }
    }
    //printf("\n----New Line----\n");
    for(i = 0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
}
/*
char s[1000];
fgets(s,sizeof(s),stdin);
int i,a,b,tempAns,ans = 0;
scanf("%d %d", &a,&b);
if(strlen(s) > 0)
{
if(a>0 && b> 0)
{
    for(i = 0; i < strlen(s)-1; i++)
    {
        if(s[i] == '+')
        {
            tempAns = a + b;
            ans+= tempAns;
        }
        if(s[i] == '*')
        {
            tempAns = a * b;
            ans += tempAns;
        }
    }
    printf("%d", ans);
}
}


}
/*
long long int n,deValue = -1;
scanf("%lld", &n);
if( n%3 == 0){
printf("%lld", (n/3));
}else{
printf("%lld",deValue);
}
return 0;
}

*/
