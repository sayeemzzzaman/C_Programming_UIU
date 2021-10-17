#include<stdio.h>


int main()
{
    int num1,num2,*x,*y;

    scanf("%d%d",&num1,&num2);

    x = &num1;
    y = &num2;

    if(*x < *y)printf("The largest number is %d",*y);
    else printf("The largest number is %d",*x);
}