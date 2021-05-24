#include<stdio.h>

int main()
{
    int x,y,k;
    scanf("%d",&y);

    for(x=1;x<=y;x++)
    {
        for(k=x;k<=y;k++)
        {
            printf("*");
        }
        printf("\n");
    }
}