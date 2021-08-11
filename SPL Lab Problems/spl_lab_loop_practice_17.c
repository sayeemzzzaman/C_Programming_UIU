#include<stdio.h>

int main()
{
    int num,prime,count=1;
    scanf("%d",&num);

    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0)
        count=0;
    }

    if(count==0 || num==1)printf("Not Prime");
    else if(count==1)printf("Prime");
    
}