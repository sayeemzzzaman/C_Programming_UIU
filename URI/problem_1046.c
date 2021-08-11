#include<stdio.h>
#include <stdlib.h>

int main()
{
    int start,end,h;
    scanf("%d%d",&start,&end);
    if(end > start)
    {
        h = end - start;
    }
    else {
        h = 24 - abs(start-end);
    }
    printf("O JOGO DUROU %d HORA(S)\n",h);
    return 0;
}