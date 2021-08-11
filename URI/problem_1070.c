#include<stdio.h>

int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    i=n;
    do
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
            count++;
        }
        i++;
    }while(count!=6);
    return 0;
}