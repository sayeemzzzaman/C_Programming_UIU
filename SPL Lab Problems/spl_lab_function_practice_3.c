#include<stdio.h>
int EvenOdd(int num)
{
    if(num%2==0)printf("Even");
    else printf("Odd");
}

int main()
{
    int num;
    scanf("%d",&num);
    EvenOdd(num);
}