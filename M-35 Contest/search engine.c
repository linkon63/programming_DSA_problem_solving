#include<stdio.h>
int main()
{
    int t,n,s;
    scanf("%d",&t);
    //scanf("%d",&n);
    //int ara[n];
    int i_found;
    int c_found;
    for(int i =1; i<=t; i++)//test case
    {
        scanf("%d",&n);
    int ara[n];
        for(int i = 0 ; i < n; i++)
        {
            scanf("%d",&ara[i]);
        }
        scanf("%d",&s);
        for(int i = 0 ;i <n ; i++)
        {
            if(ara[i]==s)
            {
                i_found = i;
                c_found=1;
                break;
            }
            else
            {
                c_found = 0;
            }
        }
        if(c_found==1)
            printf("Case %d: %d\n",i,i_found+1);
        else if(c_found==0)
            printf("Case %d: Not Found\n",i);

    }
}
