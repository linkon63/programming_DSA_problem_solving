#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <bits/stdc++.h>
#define Mod 1000000007
//int charIsThere(char c, char *s1[])
//{
//    int len2 = strlen(s1);
//    if(len2 == 0) return 0;
//    int i;
//    for( i = 0; i < len2; i++)
//    {
//        printf("Cheking S1[%d]:%c \n",i,s1[i]);
//        if(c == s1[i])
//        {
//            return 1;
//        }
//    }
//    return 0;
//}

// Function to find the maximum sum
long long int findSum(int arr[], int n)
{
    long long int sum = 0;

    // Sort the array first
    sort(arr, arr + n);

    // First multiply negative numbers pairwise
    // and sum up from starting as to get maximum
    // sum.
    int i = 0;
    while (i < n && arr[i] < 0)
    {
        if (i != n - 1 && arr[i + 1] <= 0)
        {
            sum = (sum + (arr[i] * arr[i + 1]) % Mod) % Mod;
            i += 2;
        }
        else
            break;
    }

    // Second multiply positive numbers pairwise
    // and summed up from the last as to get maximum
    // sum.
    int j = n - 1;
    while (j >= 0 && arr[j] > 0)
    {
        if (j != 0 && arr[j - 1] > 0)
        {
            sum = (sum + (arr[j] * arr[j - 1]) % Mod) % Mod;
            j -= 2;
        }
        else
            break;
    }

    // To handle case if positive and negative
    // numbers both are odd in counts.
    if (j > i)
        sum = (sum + (arr[i] * arr[j]) % Mod) % Mod;

    // If one of them occurs odd times
    else if (i == j)
        sum = (sum + arr[i]) % Mod;

    return sum;
}

int main()
{
    int arr[] = { -1, 9, 4, 5, -4, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("SUM:",findSum(arr, n));
//    cout << findSum(arr, n);
    return 0;
//    char s[1000];
//    char s1[1000] = "";
//    scanf("%s",s);
//
//    int i,count = 0;
//
//    for(i = 0; i<strlen(s); i++)
//    {
//        int len1 = strlen(s1);
//        char c = s[i];
//        char ch = tolower(c);
//        printf("Char is: %c\n",ch);
//        if(
//            len1 == 0 &&
//            (ch == 'c' ||ch == 'h' ||ch == 'a' ||ch == 'm' ||
//             ch == 'p' ||ch == 'i' ||ch == 'o' ||ch == 'n'
//            )
//        )
//        {
//            printf("PROTOME ADD KOR -> S1 First String Added:%c \n",ch);
//            s1[0] = ch;
//        }
//        else if(charIsThere(ch,&s1))
//        {
//            printf("Add Koris NA Ache Already ->Char:%c: is there is S1: Val:%d \n", ch,charIsThere(ch,&s1));
//            continue;
//        }
//        else
//        {
//            printf("NAI RE Char : %c  -> is not there is S1: Val:%d \n",ch, charIsThere(ch,&s1));
//            if((ch == 'c' ||
//                    ch == 'h' ||
//                    ch == 'a' ||
//                    ch == 'm' ||
//                    ch == 'p' ||
//                    ch == 'i' ||
//                    ch == 'o' ||
//                    ch == 'n'
//               ))
//            {
//                printf("DEK CHAMPIONS Charecter ache ni: %c \n",ch);
//                if(charIsThere(ch,&s1))
//                {
//                    printf("CHAR ACHE Char : %c ->is there is S1: Val:%d \n",ch, charIsThere(ch,&s1));
//                    continue;
//                }
//                else
//                {
//                    printf("FINALLY NAI ADD KOR ->Condition True Insert the ch:%c\n",ch);
//                    s1[len1] = ch;
//                }
//            }
//        }

//        if(charIsThere(ch,&s1))
//                {
//                    printf("Already this char has in S1: Val:%d :CH:%c \n", charIsThere(ch,&s1),ch);
//                    continue;
//                }
//                else
//                {
//                    printf("Already this char has not in S1: %c \n",ch);
//                }
//        printf("%c\n",c);
//        printf("%c\n",ch);
//        if(charIsThere(ch,&s1)){
//            printf("there is already charecter \n");
//            continue;
//        }else{
//        s1[i] = ch;
//        }
//            int j;
//            for(j = 0; j<len; j++)
//            {
//                printf("%c",s[j]);
//            }
//            printf("\n");
//    }
//    printf("Updated String is: %s",s1);
//    return 0;
}

//
//char * is_word_present( const char *sentence, const char *word )
//{
//    const char *p = NULL;
//
//    size_t n = strlen( word );
//
//    if ( n != 0 )
//    {
//        p = sentence;
//
//        while ( ( p = strstr( p, word ) ) != NULL )
//        {
//            if ( ( p == sentence || isblank( ( unsigned char )p[-1] ) ) &&
//                 ( p[n] == '\0'  || isblank( ( unsigned char )p[n]  ) ) )
//            {
//                break;
//            }
//            else
//            {
//                p += n;
//            }
//        }
//    }
//
//    return ( char * )p;
//}
//
//int main( void )
//{
//    char *p = is_word_present( "AbcyuchAmPionSdyz", "champions" );
//
//    if ( p )
//    {
//        puts( "The word is present in the sentence" );
//    }
//    else
//    {
//        puts( "The word is not present in the sentence" );
//    }
//
//
//
//    return 0;
//}
//
////#include <stdio.h>
////
////int main()
////{
////    int n;
////    char c;
////    scanf("%d %c",&n,&c);
////    if(1<=n && n <= 20){
////        int i,j;
////        for(i = 0; i<n; i++){
////            int t = n - i;
////            while(t>1){
////                printf(" ");
////                t--;
////            }
////            for(j = 0; j<n; j++){
////            printf("%c",c);
////            }
////            printf("\n");
////        }
////    }
//////    long long int n;
//////    scanf("%lld",&n);
//////    if(n > 0)
//////    {
//////        long long int a;
//////        a = 6*(n*n);
//////        printf("%lld\n",a);
//////    }
////    return 0;
////}
