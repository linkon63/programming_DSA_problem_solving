
#include <stdio.h>

int main()
{

    int t;
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a < b)
    {
        if(b < c)
        {
            printf("%d\n",b);
        }
        else
        {
            printf("%d l l l \n",c);
        }
    }
    else if( b < a)
    {
        if(a < c)
        {
            printf("%d\n",a);
        }
        else
        {
            printf("%d k k k \n",c);
        }
    }else if( a>b && c < b){
         printf("%d -- \n",c);
    }

    return 0;
}
