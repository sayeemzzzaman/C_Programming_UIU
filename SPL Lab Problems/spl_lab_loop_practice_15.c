#include<stdio.h>
#include<math.h>

int main()
{
    int x,y,power=1,i=1;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        power = power*x;
    }
    printf("%d",power);
}