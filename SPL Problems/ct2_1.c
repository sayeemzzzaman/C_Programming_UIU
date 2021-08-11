#include<stdio.h>

int main()
{
    int a = 88,i = 8,sum=88;

    for(int j = 1;j<=20;j++)
    {
        sum = sum+(a+j*i);
    }
    printf("%d",sum);
}