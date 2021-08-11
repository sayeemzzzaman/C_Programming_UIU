#include<stdio.h>

int main()
{
    int n,max=0,min=10000,i;
    for(i=1;i<=10;i++)
    {
        scanf("%d",&n);
        if(max<n)max=n;
        if(min>n)min=n;
    }
    printf("%d\n%d\n",max,min);
    return 0;
}