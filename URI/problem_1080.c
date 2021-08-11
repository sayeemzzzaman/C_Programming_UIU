#include<stdio.h>

int main()
{
    int n,max=0,count=1,i,check;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&n);
        if(max<n)
        {
            max=n;
            check = count;
        }
        count++;
    }
    printf("%d\n%d\n",max,check);
    return 0;
}