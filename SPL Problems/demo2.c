#include<stdio.h>

int main()
{
    int a =1091 , b= 1093,c;
    scanf("%d",&c);
    if(c>a && c>b)
    {
        if(c%2==0)printf("c is the largest and even");
        else printf("c is largest and odd");
    }
}