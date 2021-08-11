#include<stdio.h>
#include <stdlib.h>
int main()
{
    int start_h,start_m,end_h,end_m,total;
    scanf("%d%d%d%d",&start_h,&start_m,&end_h,&end_m);

    total = (end_h*60+end_m)-(start_h*60+start_m);

    if(total<=0) 
    {
        total += 24*60;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",total/60,total%60);
    return 0;
}