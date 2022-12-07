#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ans=0;

    for(int i=1; i<=n; i++)
    {
        int t =i%6;
        if(t==1||t==2||t==3)
        {
            ans = ans+i;
        }
        else
        {
            ans = ans-i;
        }
    }
    printf("%d",ans);

    return 0;
}
