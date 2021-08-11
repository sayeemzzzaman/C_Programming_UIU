#include<stdio.h>


int main()
{
    int num,i,j,p=0;
    scanf("%d",&num);
    i = num;
    while(num!=0)
    {
        j = num%10;
        p = p*10 + j;
        num/=10;
    }printf("%d\n",p);
    if(i==p)printf("Yes\n");
    else printf("No\n");
}