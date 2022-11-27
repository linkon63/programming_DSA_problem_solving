
#include<stdio.h>
#include <string.h>

/* Utility function to get max of 2 integers */
int max(int a, int b)
{   return (a > b)? a : b; }

/* Returns length of LCS for X[0..m-1], Y[0..n-1].
   See http://goo.gl/bHQVP for details of this
   function */
int lcs( char *X, char *Y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;

   /* Following steps build L[m+1][n+1] in bottom
      up fashion. Note that L[i][j] contains length
      of LCS of X[0..i-1] and Y[0..j-1] */
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;

       else if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;

       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }

   /* L[m][n] contains length of LCS for X[0..n-1]
     and Y[0..m-1] */
   return L[m][n];
}

// LCS based function to find minimum number of
// insertions
int findMinInsertionsLCS(char str[], int n)
{
   // Creata another string to store reverse of 'str'
   char rev[n+1];
   strcpy(rev, str);
   strrev(rev);

   // The output is length of string minus length of lcs of
   // str and it reverse
   return (n - lcs(str, rev, n, n));
}

// Driver program to test above functions
int main()
{
    char str[] = "welcome";
    printf("%d", findMinInsertionsLCS(str, strlen(str)));
    return 0;
}
/*
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    long long int t;
    scanf("%lld",&t);
    if(1<=t && t<=10000)
    {
        while(t--)
        {
            long long int n;
            scanf("%d",&n);

            if(0 <= n && n <= 10000000000)
            {
                if(n == 0 || n == 1)
                {
                    int a = 1;
                    printf("%d\n", a);
                    //break;
                }
                else
                {

                    int i = 0;
                    for( i = 1; i<n; i++)
                    {

                        int pow1 = pow(2,i);
                        if(pow1 >= n)
                        {
                            printf("%d\n", pow1);
                            break;
                        }
                    }
                }

            }
        }
    }

    return 0;
}
/*
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(0<=a && a<=7 && 0<=b && b<=7)
    {
        if(a>b)
        {
            printf("Argentina");
        }
        else if(b>a)
        {
            printf("Brazil");
        }
        else
        {
            int flag = 0;
            while(flag == 0)
            {
                char a[5],b[5];
                scanf("%s",a);
                scanf("%s",b);
                int br = 0, ar = 0, i = 0;
                for(i = 0; i< 5; i++)
                {
                    if(a[i] == '1')
                    {
                        ar++;
                    }
                    if(b[i] == '1')
                    {
                        br++;
                    }
                }
                if(ar > br)
                {
                    printf("Argentina");
                    flag = 1;
                }
                else if(br > ar)
                {
                    printf("Brazil");
                    flag = 1;
                }
            }
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
                    printf("%d",(n+1)-j);
                }
                else
                {
                    if(j == 1)
                    {
                        printf("%d",i);
                    }
                    else if(j == n)
                    {
                        printf("%d",(n+1)-i);
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

    int a,b;
    scanf("%d %d",&a,&b);
    if(0<=a && a<=7 && 0<=b && b<=7){
        if(a>b){
            printf("Argentina");
        }else if(b>a){
            printf("Brazil");
        }else {
            printf("Draw");
        }
    }
}
/*
{
    int t;
    scanf("%d",&t);
    if(1<=t && t<=10000){
        while(t--){
            long long int n;
            scanf("%d",&n);
            if(0<=n && n<= 10000000000){

            }
        }
    }

    return 0;
}
/*
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(0 <= a && a <=100 && 0 <= b && b<=100){
        int ans = abs(a-b);
        printf("%d",ans);
    }
    return 0;
}
*/
