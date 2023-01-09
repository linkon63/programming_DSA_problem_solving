
#include <stdio.h>

struct Point
{
    int x;
    int y;
};

int manhattan(struct Point p, struct Point q)
{
    int res = abs(p.x - q.x) + abs(p.y - q.y);
//Abs [a − x] + Abs [b − y] + Abs [c − z]
};

int main()
{
    struct Point p1,p2;
    scanf("(%d,%d)\n",&p1.x,&p1.y);
    scanf("(%d,%d)",&p2.x,&p2.y);

    int ans = manhattan(p1,p2);
    printf("Answer:%d \n",ans);

    return 0;
}
