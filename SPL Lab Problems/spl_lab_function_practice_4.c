#include<stdio.h>

int PosNeg(int num)
{
    if(num>0)printf("positive");
    else if(num<0)printf("negative");
    else printf("zero");
}

int main()
{
    int num;
    scanf("%d",&num);
    PosNeg(num);
}