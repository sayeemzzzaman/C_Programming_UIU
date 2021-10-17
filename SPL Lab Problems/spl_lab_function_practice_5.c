#include<stdio.h>

void MaxMin(int num1, int num2)
{
    if(num1>num2)printf("%d is greater than %d",num1,num2);
    else if(num1<num2)printf("%d is less than %d",num1,num2);
    else if(num1==num2)printf("%d is equal to %d",num1,num2);
}

int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    MaxMin(n1,n2);
}