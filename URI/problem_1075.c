#include<stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=2;i<=10000;)
    {
        printf("%d\n",i);
        i+=n;
    }
    return 0;
}