#include<stdio.h>

int main()
{
    int x,y,k;
    scanf("%d",&y);
    for(x=1;x<=y;x++)
    {
        for(k=x;k<y;k++)
        {
            printf(" ");
        }
        for(k=1;k<=x;k++)
        {
            printf("*");
        }printf("\n");
    }
}