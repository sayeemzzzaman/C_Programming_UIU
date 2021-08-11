#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);

    if(x>y)
    {
        do {
        printf("%d, ",x*x);
        x--;
        if(y*y == x*x)printf("Reached!");
    }while(y*y != x*x);
    }
    else 
    {
        do {
        printf("%d, ",x*x);
        x++;
        if(y*y == x*x)printf("Reached!");
    }while(y*y != x*x);
    }

    return 0;
}