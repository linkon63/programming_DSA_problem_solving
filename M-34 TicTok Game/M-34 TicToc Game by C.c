
#include <stdio.h>
#include <stdbool.h>

int isWin(int a[][4], int n)
{
    int i;
    for(i = 1; i<=n; i++)
    {
        if(a[i][1] == a[i][2] && a[i][2] == a[i][3] && a[i][1] != -1)
        {
            return a[i][1];
        }
    }

    for(i = 1; i<=n; i++)
    {
        if(a[1][i] == a[2][i] && a[2][i] == a[3][i] && a[1][i] != -1)
        {
            return a[1][i];
        }
    }

    if(a[1][1] == a[2][2] && a[2][2] == a[3][3] && a[1][1] != -1)
    {
        return a[1][1];
    }
    if(a[1][3] == a[2][2] && a[2][2] == a[3][1] && a[1][3] != -1)
    {
        return a[1][3];
    }

    return -1;
}
void printGrid(int a[][4], int n)
{
    int i,j;
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j<=n; j++)
        {
            if(a[i][j] == -1) printf(" ");
            if(a[i][j] == 1) printf("X");
            if(a[i][j] == 2) printf("O");
            if(j<n) printf("\t|\t");
        }
        printf("\n");
        if(i<n) printf("____________________________________________");
        printf("\n\n");

    }
}
int main()
{
    int a[4][4],n=3;
    int i,j;
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j<=n; j++)
        {
            a[i][j] = -1;
        }
    }
    bool player1 = true, player2 = false;
    while(true)
    {
        printGrid(a,n);
        if(player1)
        {
            // Work and value = 1
            int r,c;
Flag:
            printf("Player 1 Turn (X), Enter the Row and Col: ");
            scanf("%d %d",&r,&c);
            if(a[r][c] != -1)
            {
                printf("Invalid Location Input \n");
                goto Flag;
            }
            a[r][c] = 1;
            // Player state changes
            player1 = false;
            player2 = true;
        }
        else
        {

            // Work and value = 1
            int r,c;
Falg2:
            printf("Player 2 Turn (O), Enter the Row and Col: ");
            scanf("%d %d",&r,&c);
            if(a[r][c] != -1)
            {
                printf("Invalid Location Input \n");
                goto Falg2;
            }
            a[r][c] = 2;
            // Player state changes
            player1 = true;
            player2 = false;
        }
        if(isWin(a,n) == 1)
        {
            printf("Winner Player 1 !!!!!!!!!! \n");
            printGrid(a,n);
            break;
        } else if(isWin(a,n) == 2)
        {
            printf("Winner Player 2 !!!!!!!!!! \n");
            printGrid(a,n);
            break;
        }
    }
    return 0;
}

