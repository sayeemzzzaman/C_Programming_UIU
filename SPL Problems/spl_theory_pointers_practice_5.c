#include<stdio.h>


int main()
{
    int temp,a=10,b=20,*p,*q;

    p = &a;
    q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After Swap %d %d",*p,*q);

    
}